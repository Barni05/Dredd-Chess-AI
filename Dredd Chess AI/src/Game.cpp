#include "pch.h"
#include "Game.h"

Game::Game(){
	m_GameData.m_Players[int(m_GameData.m_CurrentPlayerType)] = new Player();
	m_GameData.switchPlayerType();
	m_GameData.m_Players[int(m_GameData.m_CurrentPlayerType)] = new Player();

}
Game::~Game() {}

Game* Game::getInstance()
{
	if (!m_Game)
		m_Game = new Game();
	return m_Game;
}