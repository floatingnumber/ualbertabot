#pragma once

#include "Common.h"
#include "Player.h"

namespace SparCraft
{
/*----------------------------------------------------------------------
 | Kiter Player
 |----------------------------------------------------------------------
 | Chooses an action with following priority:
 | 1) If it can attack, ATTACK closest enemy unit
 | 2) If it cannot attack:
 |    a) If it is in range to attack an enemy, move away from closest
 |    b) If it is not in range of enemy, MOVE towards closest
 `----------------------------------------------------------------------*/
class Player_Kiter : public Player
{
public:
	Player_Kiter (const IDType & playerID);
	void getMoves(const GameState & state, std::vector<Action> & moveVec);
	virtual PlayerPtr clone();
};
}