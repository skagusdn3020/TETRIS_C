#include "../../HEADER/opdisplay.h"
void boardreset(int(*board)[12], int line, int resetvalue) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = resetvalue;
		}
	}
}
void init(int(*board)[12], int line, int resetvalue) {
	fullscreen();
	info(0,3);
	CursorView(1);
	boardreset(board, line, resetvalue);
}
