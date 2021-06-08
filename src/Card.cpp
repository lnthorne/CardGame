/*****************************
* @author Liam Thorne <liam.thorne@uleth.ca>
* @date 14/03/2021
* card class implementation
******************************/

#include <iostream>
#include <string>
#include "Card.h"

std::string Card::getCardSuit() {
  return Suit;
}

std::string Card::getCardValue() {
  return Value;
}

bool Card::operator == (const Card &c) const {
    if (Value == c.Value && Suit == c.Suit)
        return true;

    return false;
}

bool Card::operator != (const Card &c) const {
    if (Value != c.Value || Suit != c.Suit)
        return true;

    return false;
}


std::string Card::print() const {
    return ("[" + Value + "/" + Suit + "]");
}
