#pragma once
void init(void* _strc, int line, int resetvalue);
#if 1
	////////////////////
	//board[][12]reset || default=>[line : 24 / value : 0]
	int boardreset(int(*board)[12], int line, int resetvalue);
	////////////////////
#endif