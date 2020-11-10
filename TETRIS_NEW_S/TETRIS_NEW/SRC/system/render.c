#include "../../HEADER/system/structure.h"
#include "../../HEADER/system/buffer.h"
#include "../../HEADER/opdisplay.h"
#include <Windows.h>
#include <process.h>
//double buffer rendering
unsigned int WINAPI render_th(_Buffer* buff);
void render(void* Buff) {
	HANDLE H_RENDER;
	HANDLE ID_RENDER;
	_beginthreadex(NULL, 0, render_th, (_Buffer*)Buff, 0, (unsigned*)&ID_RENDER);
}

unsigned int WINAPI render_th(_Buffer* buff) {
	static HANDLE buffer[2];

} 