/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 29/03/2021
* UNOdeck class def'n
***********************/

#ifndef UNODECK_H_INCLUDED
#define UNODECK_H_INCLUDED

#include <iostream>
#include <vector>
#include "Deck.h"
#include "Card.h"

class UNOdeck : public Deck {
 public:
   /*
   * defaultConstructor
   */
  UNOdeck() {}

   /*
   * destructor
   */
  ~UNOdeck() {}

   /*
   * adds 52 cards into the stack to create a deck of cards
   * 12 cards of each suit
   * 4 suits
   * 4 wild cards
   * @param Number of decks you want in use
   */
  void setDeck(int numOfDecks) override;
};

#endif
