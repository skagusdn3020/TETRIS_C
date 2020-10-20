#include "../HEADER/system/init.h"
#include "../HEADER/system/input.h"
#include "../HEADER/system/render.h"
#include "../HEADER/system/simulate.h"
#include "../HEADER/system/update.h"
#include "../HEADER/board.h"
#include <stdio.h>
void game_logic(void) { 
	init(board, 25, 0);	
	input();
	simul();
	update();
	render();
	

}

/* ~think flow~
각기능별 구현 일단 블록이 생성되어 떨어지는 프로토타입 제작
init: reset
input: input from keyboard
simul: contect
update: if success simul,update boards(board | blockbaord)
render: rendering buffer
*/