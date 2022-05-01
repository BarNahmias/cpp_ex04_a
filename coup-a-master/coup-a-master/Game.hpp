//
// Created by בר נחמיאס on 24/04/2022.
//

#pragma once
#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup{
    class Player;
        class Game {

        private:

            string _turn;
            string _winner;
            vector <string> p;
//
//            //  constructor
//            Game();
//            //  distructor
//            ~Game() ;

        public:
             unsigned  int _income;

            string turn() const;

            string winner() const;

            vector <string> players()const;

        };

}


