#include <conio.h>
typedef enum _arrow {up=11,left,right,down};
void input() {
	
		int key=0, r_k = 0;
		//r_k==누른 화살표
		if (_kbhit()) {
			key = _getch();
			switch (key)
			{
			case 224:key = _getch();
				switch (key)
				{
				case 72:return up;
				case 75:return left;
				case 77:return right;
				case 80:return down;
				default:
					break;
				}
			default:
				break;
			}
		}
	}
