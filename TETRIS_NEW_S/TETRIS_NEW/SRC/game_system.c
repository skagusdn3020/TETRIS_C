#define checkinput 0
#define checkboard 0
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
#if checkboard
#include <stdio.h>
#endif
#if checkinput
#include <stdio.h>
#endif
void game_logic(void) {
	system("title ��TETRIS��");
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
		#if checkinput
		//check input (O)
		if (Param.key != 0) {
			switch (Param.key) {
			case 72: printf("�� "); Param.key = 0; break;
			case 75: printf("�� "); Param.key = 0; break;
			case 77: printf("�� "); Param.key = 0; break;
			case 80: printf("�� "); Param.key = 0; break;
			default: printf("%d ", Param.key); Param.key = 0; break;
			}
		}
		#endif
		#if checkboard
		boardreset(Param.board, 24, 0);
		system("cls");
		for (int i = 0; i < 12; i++)
			printf("��");
		printf("\n");
		for (int i = 0; i < 25; i++) {
			for (int j = 0; j < 12; j++) {
				switch (Param.board[i][j]) {
				case 0:printf("  "); break;
				case 1:printf("��"); break;
				case 2:printf("��"); break;
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