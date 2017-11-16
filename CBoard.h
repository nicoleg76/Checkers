#pragma once
#define SPACE ' '
#define BLACK 'o'
#define WHITE 'O'
#define BLACK_KING 'k'
#define WHITE_KING 'K'


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
	void countWhite();
	
	/**
	 * @brief counts amount of black pieces on board
	 */
	void countBlack();
	
	/**
	 * @brief initial set up of board
	 */
	void setUp();
	
	
	/**
	 * @brief checks if each square is empty
	 */
	void squareEmpty();
};