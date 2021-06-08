
/*****************************
* @author Tofunmi Ojo <Tofunmi.ojo@uleth.ca>
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 17/03/2021
* Hand class defintion file
******************************/

#include <vector>
#include <iostream>
#include <algorithm>
#include "Hand.h"
#include "Card.h"
#include "Exceptions.h"
#include "Deck.h"

//function that takes a card and puts it in currentHand
void Hand::addCard(Card* c) {
  currentHand.push_back(c);
}

//function that deletes a card out of your hand
void Hand::deleteCard(Card* c) {
  currentHand.erase(std::remove(currentHand.begin(),
currentHand.end(), c), currentHand.end());
}

int Hand::getNumOfCardsInHand() {
  return currentHand.size();
}


Card* Hand::getCard(Card* c) {
  //iterator for find algorithm(currentHand)
  std::vector<Card*>::iterator it;
  //find algorithm
  it = find(currentHand.begin(), currentHand.end(), c);
  if (it == currentHand.end())
    return new Card("illegal", "illegal");

  return c;
}


void Hand::addHand(std::vector<Card*> tempHand) {
  currentHand = tempHand;
}

//std::vector<Card*> Hand::getCurHand() {
//  return currentHand;
