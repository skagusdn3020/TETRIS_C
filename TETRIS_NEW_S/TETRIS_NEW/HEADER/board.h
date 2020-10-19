#pragma once
//20*10 array,+ side and bottom add void sell for impact cheak
int board[25][12] = { 0, };
int blockboard[25][12] = { 0, };
int scrbuffer[25][12]={ 0, };
int backbuffer[25][12] = { 0, };
typedef struct _boarddata {
	int (*boardP)[12];
	int (*blockboardP)[12];
	int* flag;
}boarddata;

