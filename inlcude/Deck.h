/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 14/03/2021
* Deck class def'n
***********************/

#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "Card.h"


/*
* Class that represents a deck of cards.
*/
class Deck {
 public:
    /*
    * defaultConstructor
    */
    Deck() {}

    /*
    * destructor
    */
    virtual ~Deck() {
      //delete the vector of cards
      for (Card* c : deck) {
        delete c;
      }
    }

    /*
    * adds 52 cards into the stack to create a deck of cards
    * 13 cards of each suit (plus 4 wildcards if playing uno)
    * @param number of decks to create
    */
    virtual void setDeck(int numberOfDecks) = 0;

    /*
    * randomly shuffles the cards in the deck
    */
    void shuffle();

    /*
    * deals 5 cards each
    * @return a vector of cards to goto a hand
    */
    std::vector<Card*> dealCards();

    /*
    * Gets the top card off of deck
    * @return a card from the deck
    */
    Card* getTopCard() const;

    /*
    * prints out the card to console
    * @return string in form "[Value/Suit]"
    */
    std::string print() const;

    /*
    * @return size of deck
    */
    int getDeckSize() const;

    /*
    * pulls a card from the top of the deck and then deletes the card from the deck
    * @return a card from the deck
    */
    Card* pullTopCard();

 protected:
    std::vector<Card*> deck;
};

#endif //DECK_H_INCLUDED
