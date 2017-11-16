#include <CBoard.h>



void CBoard::Clear(){
	int i;
	int j;
	for (i = 0; i <= 8; i++){
		for (j = 0; j <= 8; j++){
			m_aBoard[i][j] = SPACE;
		}
	}
}