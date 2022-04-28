//
// Created by בר נחמיאס on 24/04/2022.
//
#pragma once
#include <iostream>
#include <string>
#include "Game.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;


namespace coup{
    class Game;

    class Player {

    protected:
        string _player_name;
        string _role;
        int _coins;
        Game * _game;

    public:

    //    constructor
        Player(Game & game, const string & player_name ,const string & role) ;

        virtual void income();

        virtual void  foreign_aid();

        virtual void coup(Player & player);

        virtual string role();

        virtual int  coins();
    };

}

