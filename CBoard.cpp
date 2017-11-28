#include <CBoard.h>



void CBoard::Clear(){
	int i;
	int j;
	for (i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			m_aBoard[i][j] = SPACE;
		}
	}
}

int CBoard::countWhite(){
	int i;
	int j;
	int countW;
	for (i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			if (m_aBoard[i][j] = WHITE){
				countW ++;
			}
		}
	}
	return countW;
}


int CBoard::countBlack(){
	int i;
	int j;
	int countB;
	for (i = 0; i < 8; i++){
		for (j = 0; j < 8; j++){
			if (m_aBoard[i][j] = BLACK){
				countB ++;
			}
		}
	}
	return countB;
}

void CBoard::setUp(){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 8; j++){
			if ((i + j) & 1)
				m_aBoard[i][j] = WHITE;
		}
	}
	
	
	for (int i = 6; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if ((i + j) & 1)
				m_aBoard[i][j] = BLACK;
		}
	}
}

bool CBoard::squareIsEmpty(Pos pos){
	bool empty = false;
	if (m_aBoard[pos.i][pos.j] = SPACE){
		empty = true;
	}
	return empty;
}

void CBoard::emptySquare(Pos pos){
	m_aBoard[pos.i][pos.j] = SPACE;
}

void CBoard::movePiece(Pos posFrom, Pos posTo){
	m_aBoard[posTo.i][posTo.j] = m_aBoard[posFrom.i][posFrom.j];
	m_aBoard[posFrom.i][posFrom.j] = CBoard.emptySquare();
}

bool CBoard::squareIsWhite(Pos pos){
	return isWhite(m_aBoard[pos.i][pos.j]);
}

bool CBoard::squareIsBlack(Pos pos){
	return isBlack(m_aBoard[pos.i][pos.j]);
}

void CBoard::checkMakeKing(){
	
}