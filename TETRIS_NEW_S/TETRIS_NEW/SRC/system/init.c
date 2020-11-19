#include "../../HEADER/opdisplay.h"
#include "../../HEADER/system/structure.h"
#include "../../HEADER/board_con.h"
void boardreset(int(*board)[12], int line, int resetvalue) {
	int col, row;
	for (row = row_e; row >= row_s; row--) {
		for (col = col_s; col <= col_s; col++) {
			board[row][col] = resetvalue;
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
