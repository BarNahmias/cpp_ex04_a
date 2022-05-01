//
// Created by בר נחמיאס on 24/04/2022.
//

#include <string>
#include "Game.hpp"
#include "Player.hpp"

 namespace coup{

    class Contessa : public Player {
    private:

    public:
        Contessa(Game &_game , const string &  _player_name): Player(_game,_player_name,"Contessa"){}

        virtual void block(Player & player);

    };


}