//
// Created by בר נחמיאס on 01/05/2022.
//

#include "doctest.h"
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
using namespace coup;
using namespace std;

TEST_CASE("operation without money"){

    Game game_1{};

    /* This player drew the "Duke" card, his name is Moshe
    and he is a player in game_1 */
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};

    vector<string> players = game_1.players();

    CHECK_THROWS(duke.coup(captain));
    CHECK_THROWS(assassin.coup(captain));
    CHECK_THROWS(ambassador.coup(captain));
    CHECK_THROWS(contessa.coup(captain));
    CHECK_THROWS(captain.coup(assassin));
}
TEST_CASE("income"){

    Game game_1{};

    /* This player drew the "Duke" card, his name is Moshe
    and he is a player in game_1 */
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};

    vector<string> players = game_1.players();


    int duke_coins=duke.coins();
    int assassin_coins=assassin.coins();
    int ambassador_coins=ambassador.coins();
    int captain_coins=captain.coins();
    int contessa_coins=contessa.coins();

    duke.income();
    assassin.income();
    ambassador.income();
    captain.income();
    contessa.income();

    CHECK(duke.coins()==duke_coins+1);
    CHECK(assassin.coins()==assassin_coins+1);
    CHECK(ambassador.coins()==ambassador_coins+1);
    CHECK(captain.coins()==captain_coins+1);
    CHECK(contessa.coins()==contessa_coins+1);
}
TEST_CASE("block"){

    Game game_1{};

    /* This player drew the "Duke" card, his name is Moshe
    and he is a player in game_1 */
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};

    vector<string> players = game_1.players();

    assassin.coup(captain);
    contessa.block(assassin);
    CHECK_THROWS(assassin.coup(captain));

}
TEST_CASE("winner"){

    Game game_1{};

    /* This player drew the "Duke" card, his name is Moshe
    and he is a player in game_1 */
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};
    vector<string> players = game_1.players();


    ambassador.coup(duke);
    ambassador.coup(assassin);
    ambassador.coup(captain);
    ambassador.coup(contessa);


    CHECK(game_1.winner()=="Meirav");

}

TEST_CASE("mo money"){

    Game game_1{};

    /* This player drew the "Duke" card, his name is Moshe
    and he is a player in game_1 */
    Duke duke{game_1, "Moshe"};
    Assassin assassin{game_1, "Yossi"};
    Ambassador ambassador{game_1, "Meirav"};
    Captain captain{game_1, "Reut"};
    Contessa contessa{game_1, "Gilad"};

    if(game_1._income<=1){
        CHECK_THROWS(duke.foreign_aid());
        CHECK_THROWS(assassin.foreign_aid());
        CHECK_THROWS(ambassador.foreign_aid());
        CHECK_THROWS(contessa.foreign_aid());
        CHECK_THROWS(captain.foreign_aid());

        CHECK_THROWS(duke.income());
        CHECK_THROWS(assassin.income());
        CHECK_THROWS(ambassador.income());
        CHECK_THROWS(contessa.income());
        CHECK_THROWS(captain.income());


    }



}