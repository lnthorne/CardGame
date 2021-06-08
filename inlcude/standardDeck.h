/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 29/03/2021
* standardDeck class def'n
***********************/

#ifndef STANDARDDECK_H_INCLUDED
#define STANDARDDECK_H_INCLUDED

#include <iostream>
#include <vector>
#include "Deck.h"
#include "Card.h"

class standardDeck : public Deck {
 public:
   /*
   * defaultConstructor
   */
  standardDeck() {}

   /*
   * destructor
   */
  ~standardDeck() {}

   /*
   * adds 52 cards into the stack to create a deck of cards
   * 13 cards of each suit
   * @param number of decks you want in use
   */
  void setDeck(int numOfDecks) override;
};
#endif
