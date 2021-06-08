/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 29/03/2021
* deckFactory class def'n
***********************/

#ifndef DECKFACTORY_H_INCLUDED
#define DECKFACTORY_H_INCLUDED

#include <iostream>
#include "standardDeck.h"
#include "UNOdeck.h"
#include "Card.h"
#include "Deck.h"
#include "Exceptions.h"

class deckFactory {
 public:
   /*
   * enumeration to keep deck type
   */
  enum GAME {STANDARD = 0, UNO};

   /*
   * defaultConstructor
   */
  deckFactory() {}

   /*
   * destructor
   */
  ~deckFactory() {}

   /*
   * factory method to create the game deck
   * @param enum type to set game deck
   * @param number of decks you would like to play with
   * @return Deck* a pointer to a deck
   */
  Deck* createDeck(deckFactory::GAME d, int numOfDecks) {
     //switch statement to see what deck you want
     switch (d) {
       case deckFactory::STANDARD: {
          Deck* deck = new standardDeck;
          deck->setDeck(numOfDecks);

          return deck;
      }

        case deckFactory::UNO: {
          Deck* deck = new UNOdeck;
          deck->setDeck(numOfDecks);

          return deck;
      }
     }
  }
};
#endif //DECKFACTORY_H_INCLUDED
