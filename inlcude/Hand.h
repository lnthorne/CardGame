/*****************************
* @author Tofunmi Ojo <Tofunmi.ojo@uleth.ca>
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 17/03/2021
* Hand class header file
******************************/
#ifndef HAND_H_INCLUDED
#define HAND_H_INCLUDED

#include <iostream>
#include <vector>
//#include "Player.h"
#include "Card.h"
#include "Deck.h"

class Hand {
 public:
  /*
  * constructor for Hand
  */
  Hand() {}

  /*
  * destructor
  */
  virtual ~Hand() {}

  /*
  * method takes in a Card and adds it to the players hand
  * @param c represents a Card that is dealt to a player and must bne added to their hand
  */
  void addCard(Card* c);

  /*
  * Method that takes a vector of cards and adds it to hand
  * @param tempHand is a vector of cards that has been dealt or picked up
  */
  void addHand(std::vector<Card*> tempHand); //NEEDS TO BE IMPLENTED STILL

  /*
  * method removes a card from a players Hand
  * @param c represents the card that must be removed
  */
  void deleteCard(Card* c);

  /*
  * returns the NumOfCardsInHand
  */
  int getNumOfCardsInHand();

  /*
  * method takes in a Card checks if it is in the players hand
  * @param c represents the Card that the method will check
  * @throw card_not_found if card not found in hand
  * @return the card you wanted if it was found
  */
  Card* getCard(Card* c);

  /*
  * print Hand
  */
  void printHand() const {
    for (int i = 0; i < currentHand.size(); i++) {
      std::cout<< currentHand[i]->print() << std::endl;
    }
  }

  //protected:
  std::vector<Card*> currentHand;
};
#endif
