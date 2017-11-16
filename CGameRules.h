#pragma once
#include <CBoard.h>
#include <string>

using namespace std;

/**
 * @class CGameRules
 * @author Michael Trunk
 * @date 16/11/2017
 * @file CGameRules.h
 * @brief Outlines the rules and flow of a checkers games
 */
class CGameRules {
	
/****************************************************************
* Private member variables
****************************************************************/
private:
	CBoard m_board; //every checkers game has a board, no?
	
	//player names
	string m_p1Name = "Player One"; //black
	string m_p2Name = "Player Two"; //white
	
	

/****************************************************************
* Initialization functions start up the game
****************************************************************/	
public:
	void init(); //master function which dispatches setup jobs
	void getNameForPlayer(string& sPlayer); //print the string you're given, and rename it to match input
	
/****************************************************************
* Basic console interface for getting moves, clearing screen, etc.
****************************************************************/
	void 	redrawGame(); //clears the screen and re-prints everything
	void 	cls(); //clears the screen
	
	Pos 	getFrom(string& sPlayerName, bool isBlack); //gets a starting position
	Pos		getTo(string& sPlayerName, bool isBlack); //gets an ending position
	
/****************************************************************
* Game logic
****************************************************************/
	
	/**
	 * @brief Given a position, checks the piece at that position
	 * 		to get the default movement direction
	 * @return 
	 * 		0 -> king, any direction
	 * 		1 -> black, +i
	 * 		
	 */
	int 	defaultVerticalDirection(Pos pos);
	
	
	bool 	moveIsLegal(Pos to, Pos from); //Verifies that the move is a legal move. Returns whether or not it's legal
	void	doMove(Pos to, Pos from); //modifies the board, removing captured piece(s)
	
	
};