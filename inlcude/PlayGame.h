#ifndef PLAYGAME_H_INCLUDED
#define PLAYGAME_H_INCLUDED

#include <iostream>
#include <vector>
#include "Player.h"
#include "Card.h"

class PlayGame {
 public:
  /**
  *constructor
  *@param nump num of palyers
  *@param pls list of players
  */
  PlayGame(Player* a1, Player* a2) : p1{a1}, p2{a2} {}

  /*
  * destructor
  */
  ~PlayGame() {
    delete p1;
    delete p2;
  }

  /**
  *@return the numberofPlayers
  */
  int getNumofPlayer();

  /**
  *@return get the arrary of players.
  */
  //std::vector<Player*> getPlayers();

  int playersTurn(Player* currPlayer);

  bool fish(Player* currPlayer, Player* player2, Card* c);

 protected:
  /**
  *the total number of players
  */
  const int numPlayer = 2;

  /**
  *The list of players
  */
  Player* p1;
  Player* p2;
};

#endif
