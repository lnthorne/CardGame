/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 30/03/2021
* standardDeck class implementation
***********************/

#include <iostream>
#include <string>
#include <vector>
#include "standardDeck.h"
#include "Deck.h"
#include "Card.h"

void standardDeck::setDeck(int numOfDecks)  {
    //string arrays that hold values and suits
  std::string Suit[] { "Heart", "Diamond", "Club", "Spade" };

  std::string Value[] {
    "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
    "Eight", "Nine", "Ten", "Jack", "Queen", "King"
    };


  int counter = 0;

  while (counter < numOfDecks) {
      for (int i = 0; i < 4; i++) { // 4 suits
        for (int j = 0; j < 13; j++) { // 13 values
            Card* card = new Card(Suit[i], Value[j]);
          deck.push_back(card);
        }
      }
      counter++;
    }
    std::cout<< deck.size() << std::endl;
}
