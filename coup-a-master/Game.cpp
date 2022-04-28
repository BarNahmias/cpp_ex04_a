//
// Created by בר נחמיאס on 24/04/2022.
//

#include "Player.hpp"

using namespace coup;

#include <iostream>
#include <stdexcept>
#include <vector>
#include "Game.hpp"

vector<string> Game::players() const {return  p;}
string Game::turn()const {return this->_turn;}
string Game::winner() const {return this->_winner;}