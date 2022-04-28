//
// Created by בר נחמיאס on 24/04/2022.
//

#include "Duke.hpp"
#include "Player.hpp"
#include "Game.hpp"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

using namespace coup;
Duke::Duke(Game & game , const  string & player_name): Player(game, player_name,"Duke"){}

void Duke:: block(Player & player) {cout << "block" << endl;}
void Duke:: tax() {cout << "tax" << endl;}
