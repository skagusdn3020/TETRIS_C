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
����ɺ� ���� �ϴ� ����� �����Ǿ� �������� ������Ÿ�� ����
init: reset
input: input from keyboard
simul: contect
update: if success simul,update boards(board | blockbaord)
render: rendering buffer
*/