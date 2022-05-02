//
// Created by בר נחמיאס on 24/04/2022.
//

#include "Player.hpp"
#include "Game.hpp"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

Player :: Player(Game & game, const string  & player_name ,const string & role) {
    this->_game=&game;
    this->_player_name=player_name;
    this->_role=role;
    this->_coins=0;
}

void Player :: income(){
//    cout << "income" << endl;
}
void Player ::  foreign_aid(){
//    cout << "foreign_aid" << endl;
}
void Player ::  coup(Player & player){
//    cout << "coup" << endl;
}

string Player ::  role() {  return  "r";}

int Player :: coins() {return 0;}
