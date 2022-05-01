//
// Created by בר נחמיאס on 24/04/2022.
//
//using namespace std;
#include <string>
#include "Game.hpp"
#include "Player.hpp"
namespace coup{

    class Captain : public Player {
    private:

    public:
        Captain(Game &game , const string &  player_name): Player(game,player_name,"Captain"){}

        virtual void steal(Player & player);

        virtual void block(Player & player);

    };

}
