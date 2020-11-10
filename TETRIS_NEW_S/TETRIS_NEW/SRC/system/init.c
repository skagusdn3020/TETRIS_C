#include "../../HEADER/opdisplay.h"
#include "../../HEADER/system/structure.h"
void boardreset(int(*board)[12], int line, int resetvalue) {
	for (int col = 1; col < 11; col++){
		for (int row = 0; row < line; row++) {
			board[row][col] = 0;
		}
	}
}
void init(void* _struc, int line, int resetvalue) {
	_Arr_list* Arr_list = (_Arr_list*)_struc;
	fullscreen();
	info(0,3);
	CursorView(0);
	boardreset(Arr_list->board, line, resetvalue);
	boardreset(Arr_list->blockboard, line, resetvalue);
	boardreset(Arr_list->frtbuffer, line, resetvalue);
	boardreset(Arr_list->bckbuffer, line, resetvalue);
}
