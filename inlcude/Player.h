/********************************************
* @author Liam Thorne
* @date 11/04/2021
* Player class
********************************************/
#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <string>
#include "Hand.h"

class Player : public Hand {
 public:
   /*
   * constructor for Player
   * @param n is the players name
   */
  Player(std::string n = "Unknown") : name{n} {}

   /*
   * destructor
   */
  ~Player() {}

   /*
   * get Players name
   * @return string of players name
   */
  std::string getName() {
     return name;
  }

 private:
  std::string name;
};

#endif
