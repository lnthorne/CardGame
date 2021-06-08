/********************************************
* @author Liam Thorne <liam.thorne@uleth.ca> edit by Vincent,Liu
* @date 15/03/2021
* Exceptions class
********************************************/

#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED

#include <stdexcept>

/*
* Exception for a index outside of suit/value enum
*/
class illegal_card_Selection: public std::runtime_error {
 public:
   /*
   * @param errMessage an error errMessage
   */
  explicit illegal_card_Selection(const char* errMessage) :
    std::runtime_error(errMessage) {}
};

/*
* Exception if number of decks is negative
*/
class illegal_deck_selection: public std::runtime_error {
 public:
   /*
   * @param errMessage an error errMessage
   */
  explicit illegal_deck_selection(const char* errMessage) :
    std::runtime_error(errMessage) {}
};


/*
* Exception if the player is not in the list
*/
class illegal_player_selection: public std::runtime_error {
 public:
  /*
  *@param errMessage an error errMessage
  */
  explicit illegal_player_selection(const char* errMessage) :
  std::runtime_error(errMessage) {}
};

/**
*Exception if Card is not found in hand
*/
class illegal_Hand_Selection: public std::runtime_error {
 public:
   /*
   * @param errMessage an error errMessage
   */
  explicit illegal_Hand_Selection(const char* errMessage) :
    std::runtime_error(errMessage) {}
};

/*
* Exception if card is not in deck
*/
class card_not_found: public std::runtime_error {
 public:
   /*
   *@param errMessage an error errMessage
   */
  explicit card_not_found(const char* errMessage) :
  std::runtime_error(errMessage) {}
};





#endif  // EXCEPTIONS_H_INCLUDED
