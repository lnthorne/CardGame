/****************************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 14/03/2021
* Deck class implementation
*****************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include "Deck.h"
#include "Card.h"


void Deck::shuffle() {
  auto rng = std::default_random_engine {};
  std::shuffle(std::begin(deck), std::end(deck), rng);
}

std::vector<Card*> Deck::dealCards() {
  std::vector<Card*> tempHand;

  //copy card from deck then delete it
  for (int i = 0; i < 5; i++) {
    tempHand.push_back(deck[i]);
  }
  //delete the cards you just dealed
  deck.erase(deck.begin(), deck.begin()+5);
  return tempHand;
}


Card* Deck::getTopCard() const {
  int n = deck.size();
  return deck[n-1];
}


std::string Deck::print() const {
  for (int i = 0; i < 52; i++) {
    std::cout<< deck[i]->print() << std::endl;
  }
}


int Deck::getDeckSize() const {
  return deck.size();
}


Card* Deck::pullTopCard() {
  int n = deck.size();
  Card* card = deck[n-1];
  //deleting card from vector
  deck.pop_back();
  return card;
}

//try setting up deck in the constructor
