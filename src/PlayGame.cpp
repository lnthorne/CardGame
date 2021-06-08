#include <iostream>
#include <string>
#include <vector>
#include "Deck.h"
#include "Player.h"
#include "PlayGame.h"
#include "Card.h"


int PlayGame::getNumofPlayer() {
  return numPlayer;
}

bool PlayGame::fish(Player* currPlayer, Player* player2, Card* c) {
  //If card is not in Hand than it will return this card
  Card* testCard = new Card("illegal", "illegal");

  if (currPlayer == p1) { //if the current player is player1
    Card* c2 = p2->getCard(c); //look for card in player2 hand

    if (*c2 == *testCard) { //if card is not found
      delete testCard;
      delete c2;
      return false; //go fish
    }

      p1->addCard(c2);
      p2->deleteCard(c2);
  } else if (currPlayer == p2) { //if the currentPlayer is player2
      Card* c2 = p1->getCard(c);

      if (*c2 == *testCard) {
        delete testCard;
        delete c2;
        return false; //go fish
      }

      p2->addCard(c2);
      p1->deleteCard(c2);
  }
  delete testCard;
  return true; //card was found
}

/*std::vector<Player*> PlayGame::getPlayers() {
  std::vector<Player*> Players;
  Players.push_back(p1);
  Players.push_back(p2);

  return Players;
}*/

int PlayGame::playersTurn(Player* currPlayer) {
  //varibles for input
  std::string cardSuit = "Spade"; //I cant get user input
  std::string cardValue = "Ten"; //so these are hard coded
  char temp;
  bool ans;
  do {
    //display user their hand
    currPlayer->printHand();
    //getting input from user
    std::cout << " What Card would you like to check in [Value,Suit] form "
              << std::endl;
    //std::cin >> temp >> cardValue >> temp >> cardSuit >> temp;

    //creating card
    Card* c = new Card(cardSuit, cardValue);

  //checking if currPlayer even has the card in hand
    //if other player has card current player wants
    //other player gives card to current player
    if (currPlayer == p1) {
      ans = fish(p1, p2, c);
      } else if (currPlayer == p2) {
        ans = fish(p2, p1, c);
        }

    //delete input card
    delete c;
} while (ans == true);

return 1;
}
