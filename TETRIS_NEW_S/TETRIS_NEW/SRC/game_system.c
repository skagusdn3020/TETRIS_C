#define test_input 0
#define test_board 0 //printf boards
#define test_pushboard 1
#include "../HEADER/system/init.h"
#include "../HEADER/system/input.h"
#include "../HEADER/system/render.h"
#include "../HEADER/system/simulate.h"
#include "../HEADER/system/update.h"
#include "../HEADER/board.h"
#include "../HEADER/system/structure.h"
#include "../HEADER/system/buffer.h"
#include <Windows.h>
#include <stdbool.h>
#if test_board || test_pushboard || test_input
#include <stdio.h>
#endif
void game_logic(void) {
	system("title ¢ÃTETRIS¢Ã");
	_Arr_list Arr_list;
	Arr_list.board = board;
	Arr_list.blockboard = blockboard;
	Arr_list.frtbuffer = scrbuffer;
	Arr_list.bckbuffer = backbuffer;
	_Param Param;	
	Param.key = 0;
	Param.board = board;
	Param.blockboard = blockboard;
	_Buffer Buff;
	Buff.frtbuf = scrbuffer;
	Buff.bckbuf = backbuffer;
	bool endflag = false; //gameover flag
	init(&Arr_list, 24, 0);
	input(&Param.key);
	//title
	render(&Buff);

	while (1) {
		#if test_input
		//check input (O)
		if (Param.key != 0) {
			switch (Param.key) {
			case 72: printf("¡è "); Param.key = 0; break;
			case 75: printf("¡ç "); Param.key = 0; break;
			case 77: printf("¡æ "); Param.key = 0; break;
			case 80: printf("¡é "); Param.key = 0; break;
			default: printf("%d ", Param.key); Param.key = 0; break;
			}
		}
		#endif
		#if test_board
		boardreset(Param.board, 24, 0);
		system("cls");
		for (int i = 0; i < 12; i++)
			printf("¢Ã");
		printf("\n");
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 12; j++) {
				switch (Param.board[i][j]) {
				case 0:printf("  "); break;
				case 1:printf("¡á"); break;
				case 2:printf("¢Ã"); break;
				}
			}
			printf("\n");
		}
		#endif
		simul(&Param);
		update(&Param,&Buff);
		render(&Buff);
		

	}

}

/* ~think flow~
mission:build prototype
init: reset
input: input from keyboard
simul: contact
update: if success simul,update boards(board | blockbaord)
render: rendering buffer

now ->build simul()
	  build render thread 
*/