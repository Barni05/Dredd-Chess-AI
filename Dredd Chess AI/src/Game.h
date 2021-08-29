#pragma once
#include "Player.h"
#include "Utils/Utils.h"
class Game
{
	static Game* m_Game;
	GameData m_GameData;

	Game();
	~Game();
public:
	static Game* getInstance();
};
