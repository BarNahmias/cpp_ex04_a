//
// Created by בר נחמיאס on 24/04/2022.
//


//using namespace std;
#include <string>
#include "Game.hpp"
#include "Player.hpp"
namespace coup{
    class Ambassador : public Player {
    private:

    public:
        Ambassador(Game &_game ,const string &   _player_name): Player(_game,_player_name,"Ambassador"){}
        virtual void  transfer (Player &take,Player &get);
        virtual void block(Player & player);

    };


}


