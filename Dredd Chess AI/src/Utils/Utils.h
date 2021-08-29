#pragma once
#include "Player.h"
struct Location
{
	int x, y;
};

enum class PlayerTypes {
	BLACK = 0,
	WHITE
};

struct GameData
{
	
	Player* m_Players[2];
	PlayerTypes m_CurrentPlayerType;

	void switchPlayerType()
	{
		if (m_CurrentPlayerType == PlayerTypes::BLACK)
			m_CurrentPlayerType = PlayerTypes::WHITE;
		else
			m_CurrentPlayerType = PlayerTypes::BLACK;
	}
};


enum class PlayerPosition
{
	LEFT = 8,
	RIGHT = -8
};