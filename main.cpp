//
//  main.cpp
//  myCardGame
//
//  Created by Liam Thorne on 2021-04-24.
//

#include <iostream>
#include <vector>
#include <string>
#include "Player.h"
#include "deckFactory.h"
#include "Card.h"
#include "Deck.h"
#include "PlayGame.h"

int main(int argc, const char * argv[]) {
    //Create players names
    Player* player1 = new Player("Liam");
    Player* player2 = new Player("Tofu");

    //create game object
    PlayGame game(player1, player2);

    //create deck
    deckFactory factory;
    Deck* deck;

    deck = factory.createDeck(deckFactory::STANDARD, 1);

    //shuffle deck
    deck->shuffle();

    //deal deck
    player1->addHand(deck->dealCards());
    player2->addHand(deck->dealCards());

    //display players
    std::cout<< "Player 1 is: " << player1->getName() << std::endl;
    std::cout<< "Player 2 is: " << player2->getName() << std::endl;

    //display players
    std::cout<< player1->getName() << " your hand is: \n";
    player1->printHand();
    std::cout<< std::endl << std::endl;

    std::cout<< player2->getName() << " your hand is: \n";
    player2->printHand();
    std::cout<< std::endl << std::endl;

    //start game loop
    //Pick the starting player
    srand(time(NULL));
    int turn = rand() % 2;

    //keep going while the deck still has cards
    int num = deck->getDeckSize();
    while (num != 0) {
      if (turn == 0) { //player1 turn
        std::cout<< "It is " << player1->getName() << "s turn\n";

        //call playGame function
        if (game.playersTurn(player1) == 1)
          player1->addCard(deck->pullTopCard()); // go fish from the deck

        turn++;
      } else if (turn == 1) { //player 2 turn
          std::cout<< "It is " << player2->getName() << "s turn\n";
          //call playGame function
          if (game.playersTurn(player2) == 1)
              player2->addCard(deck->pullTopCard()); // go fish from the deck

            turn = 0;
        }

      num = deck->getDeckSize();
    }

    std::cout << "******The deck has run out******\n"
              << player1->getName() << "s score is: "
              << player1->getNumOfCardsInHand() << std::endl
              << player2->getName() << "s score is: "
              << player2->getNumOfCardsInHand() << std::endl
              << "****** GAME OVER ******\n";

    delete deck;

}
