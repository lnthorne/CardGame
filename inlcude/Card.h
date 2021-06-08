/**********************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 14/03/2021
* card class Def'n
***********************/

#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <iostream>
#include <string>
class Card {
 public:
    /*
    * Def Constructor
    */
    Card() {}

    /*
    * Constructor with Suit and Value
    * @param Suit represents the suit of the card
    * @param Value represents the value of the card
    */
    Card(std::string cardSuit, std::string cardValue): Value{cardValue},
    Suit {cardSuit} {}

    /*
    * destructor
    */
    virtual ~Card() {}

    /*
    * gets the suit of the card
    * @return the suit of the cards
    */
    std::string getCardSuit();

    /*
    * gets the value of the card
    * @return the value of the card
    */
    std::string getCardValue();

    /*
    * prints out the card to console
    * @return string in form "[Value/Suit]"
    */
    std::string print() const;

    /*
    * @return true if the value and suit match
    */
    bool operator == (const Card& c) const;

    /*
    * @return true if value and suit dont match
    */
    bool operator != (const Card& c) const;

 private:
  std::string Value;
  std::string Suit;
};

#endif //CARD_H_INCLUDED
