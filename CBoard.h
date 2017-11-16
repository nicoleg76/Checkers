#pragma once
#define SPACE ' '
#define BLACK 'o'
#define WHITE 'O'
#define BLACK_KING 'k'
#define WHITE_KING 'K'
#include <string>

class Pos{
	int i;
	int j;
    Pos(int _i, int _j){
		i = _i;
		j = _j;
	}
};

inline isWhite(char w){
	return w <= 90;
}

class CBoard {
	
	char m_aBoard[8][8];
	
	/**
	 * @brief empties each square
	 */
	void Clear();
	
	/**
	 * @brief counts amount of white pieces on board
	 */
	int countWhite();
	
	/**
	 * @brief counts amount of black pieces on board
	 */
	int countBlack();
	
	/**
	 * @brief initial set up of board
	 */
	void setUp();
	
	/**
	 * @brief checks if square at position given is empty
	 */
	bool squareIsEmpty(Pos pos);
	
	/**
	 * @brief moves piece to selected spot
	 */
	void movePiece(Pos positionFrom, Pos positionTo);
	
	/**
	 * @brief go through all pieces and check if they should be made kings or not
	 */
	void checkMakeKing();
	
	/**
	 * @brief empties selected square
	 */
	void emptySquare();
	
	bool squareIsWhite(Pos pos);
	
	bool squareIsBlack(Pos pos);
	
	std::string toString();
};