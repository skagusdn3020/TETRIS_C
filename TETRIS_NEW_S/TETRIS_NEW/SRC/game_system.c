#define checkinput 0
#include "../HEADER/system/init.h"
#include "../HEADER/system/input.h"
#include "../HEADER/system/render.h"
#include "../HEADER/system/simulate.h"
#include "../HEADER/system/update.h"
#include "../HEADER/board.h"
#include "../HEADER/system/structure.h"
#if checkinput
#include <stdio.h>
#endif
void game_logic(void) {
	
	_Param Param;	
	Param.key = 0;
	Param.board = board;
	Param.blockboard = blockboard;
	_Buffer Buf;
	Buf.frtbuf = scrbuffer;
	Buf.bckbuf = backbuffer;
	init(board, 25, 0);	
	input(&Param.key);
	while (1) {
		//check input (O)
#if checkinput
		if (Param.key != 0) {
			switch (Param.key) {
			case 72: printf("��"); Param.key = 0; break;
			case 75: printf("��"); Param.key = 0; break;
			case 77: printf("��"); Param.key = 0; break;
			case 80: printf("��"); Param.key = 0; break;
			default: break;
			}
		}
#endif
		simul();
		update();
		render();
	}
	return 0;

}

/* ~think flow~
mission:build prototype
init: reset
input: input from keyboard
simul: contact
update: if success simul,update boards(board | blockbaord)
render: rendering buffer

now -> build render thread 
*/