//
// Created by בר נחמיאס on 24/04/2022.
//
#include <string>
#include "Game.hpp"
#include "Player.hpp"
using namespace std;

namespace coup{
class Assassin : public Player {
    private:

    public:
        Assassin(Game &_game , const string &  _player_name): Player(_game,_player_name,"Assassin"){}
        virtual  void coup (Player & player);

    };

}
