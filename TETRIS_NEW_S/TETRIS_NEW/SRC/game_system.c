#define checkinput 0
#include "../HEADER/system/init.h"
#include "../HEADER/system/input.h"
#include "../HEADER/system/render.h"
#include "../HEADER/system/simulate.h"
#include "../HEADER/system/update.h"
#include "../HEADER/board.h"
#include "../HEADER/system/structure.h"
#include "../HEADER/system/buffer.h"
#include <Windows.h>
#if checkinput
#include <stdio.h>
#endif
void game_logic(void) {
	
	_Param Param;	
	Param.key = 0;
	Param.board = board;
	Param.blockboard = blockboard;
	_Buffer Buff;
	Buff.frtbuf = scrbuffer;
	Buff.bckbuf = backbuffer;
	init(board, 25, 0);
	input(&Param.key);
	//title
	render(&Buff);
	while (1) {
		//check input (O)
#if checkinput
		if (Param.key != 0) {
			switch (Param.key) {
			case 72: printf("ก่"); Param.key = 0; break;
			case 75: printf("ก็"); Param.key = 0; break;
			case 77: printf("กๆ"); Param.key = 0; break;
			case 80: printf("ก้"); Param.key = 0; break;
			default: break;
			}
		}
#endif
		simul(&Param);
		update(&Param,&Buff);
		render(&Buff);
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

now ->build simul()
	  buffer.h ~double buffering~
	  build render thread 
*/