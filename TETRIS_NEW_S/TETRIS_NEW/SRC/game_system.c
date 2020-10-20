#include "../HEADER/system/init.h"
#include "../HEADER/system/input.h"
#include "../HEADER/system/render.h"
#include "../HEADER/system/simulate.h"
#include "../HEADER/system/update.h"
#include "../HEADER/board.h"
#include <stdio.h>
void game_logic(void) {
	typedef struct {
		int key;
		int* (*board)[12];
		int* (*blockboard)[12];
	}_Param;
	_Param Param;
	Param.key = 0;
	init(board, 25, 0);	
	input(Param.key);
	while (1) {
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
simul: contect
update: if success simul,update boards(board | blockbaord)
render: rendering buffer
master -> group Param array datas
*/