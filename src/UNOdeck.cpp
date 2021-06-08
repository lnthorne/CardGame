/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 30/03/2021
* UNOdeck class implementation
***********************/

#include <iostream>
#include <string>
#include <vector>
#include "UNOdeck.h"
#include "Deck.h"
#include "Card.h"

void UNOdeck::setDeck(int numOfDecks) {
  //string of arrays that hold values and suits
  std::string Suit[] { "Red", "Green", "Yellow", "Blue",
                      "Wild", "Wild_Draw_Four" };

  std::string Value[] { "Zero", "One", "Two", "Three", "Four", "Five", "Six",
                        "Seven", "Eight", "Nine", "Skip_Turn", "Reverse",
                        "Draw_Two", "Wild", "Wild_Draw_Four"};

  int counter = 0;

  while (counter < numOfDecks) {
    for (int i = 0; i < 4; i++) { // 4 suits
      for (int j = 0; j < 12; j++) { // 12 values
            Card* card = new Card(Suit[i], Value[j]);
            deck.push_back(card);
          }
       }

      //add 2 wild and 2 wild Draw four
      for (int i = 0; i < 2; i++) {
          //push_back wild card
          Card* card = new Card(Suit[4], Value[12]);
          deck.push_back(card);

          Card* Draw_four_card = new Card(Suit[5], Value[13]);
          deck.push_back(Draw_four_card);
        }
      counter++;
     }
     std::cout << deck.size() << std::endl;
  }
