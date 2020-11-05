#include "../../HEADER/opdisplay.h"
#include "../../HEADER/system/structure.h"
void boardreset(int(*board)[12], int line, int resetvalue) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = resetvalue;
		}
	}
}
void init(void* _strc, int line, int resetvalue) {
	_Arr_list* Arr_list = (_Arr_list*)_strc;
	fullscreen();
	info(0,3);
	CursorView(0);
	boardreset(Arr_list->board, line, resetvalue);
	boardreset(Arr_list->blockboard, line, resetvalue);
	boardreset(Arr_list->frtbuffer, line, resetvalue);
	boardreset(Arr_list->bckbuffer, line, resetvalue);
}
