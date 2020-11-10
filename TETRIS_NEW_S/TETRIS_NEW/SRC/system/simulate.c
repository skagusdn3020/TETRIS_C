#include "../../HEADER/system/structure.h"
#include "../../HEADER/system/simulate_sub/simulate_sub.h"
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#define key_test 1
#define yes true
#define no false
#define speed 1 //dropdown speed
//  MINO
//	M_I=0
//	M_O=1
//	M_T=2
//	M_L=3
//	M_J=4
//	M_S=5
//	M_Z=6
//[����ε���][ȸ������][��][��]
int block[7][4][4][4] = {
	/*M_I*/{
		/*0��*/{
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0}
	},  /*1��*/{
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	},	/*2��*/ {
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0}
	},	/*3��*/{
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	},

},
/*M_O*/{
	/*0��*/{
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},  /*1��*/{
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*2��*/ {
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*3��*/{
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},

},
/*M_T*/{
	/*0��*/{
	{1,1,1,0},
	{0,1,0,0},
	{0,1,0,0},
	{0,0,0,0}
},  /*1��*/{
	{0,0,1,0},
	{1,1,1,0},
	{0,0,1,0},
	{0,0,0,0}
},	/*2��*/ {
	{0,1,0,0},
	{0,1,0,0},
	{1,1,1,0},
	{0,0,0,0}
},	/*3��*/{
	{1,0,0,0},
	{1,1,1,0},
	{1,0,0,0},
	{0,0,0,0}
},

},
/*M_L*/{
	/*0��*/{
	{1,0,0,0},
	{1,0,0,0},
	{1,0,0,0},
	{1,1,1,0}
},  /*1��*/{
	{1,1,1,1},
	{1,0,0,0},
	{1,0,0,0},
	{0,0,0,0}
},	/*2��*/ {
	{1,1,1,0},
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0}
},	/*3��*/{
	{0,0,0,1},
	{0,0,0,1},
	{1,1,1,1},
	{0,0,0,0}
},

},
/*M_J*/{
	/*0��*/{
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0},
	{1,1,1,0}
},  /*1��*/{
	{1,0,0,0},
	{1,0,0,0},
	{1,1,1,1},
	{0,0,0,0}
},	/*2��*/ {
	{1,1,1,0},
	{1,0,0,0},
	{1,0,0,0},
	{1,0,0,0}
},	/*3��*/{
	{1,1,1,1},
	{0,0,0,1},
	{0,0,0,1},
	{0,0,0,0}
},
},
/*M_S*/{
	/*0��*/{
	{0,1,1,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},  /*1��*/{
	{1,0,0,0},
	{1,1,0,0},
	{0,1,0,0},
	{0,0,0,0}
},	/*2��*/ {
	{0,1,1,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*3��*/{
	{1,0,0,0},
	{1,1,0,0},
	{0,1,0,0},
	{0,0,0,0}
},
},
/*M_Z*/{
	/*0��*/{
	{1,1,0,0},
	{0,1,1,0},
	{0,0,0,0},
	{0,0,0,0}
},  /*1��*/{
	{0,1,0,0},
	{1,1,0,0},
	{1,0,0,0},
	{0,0,0,0}
},	/*2��*/ {
	{1,1,0,0},
	{0,1,1,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*3��*/{
	{0,1,0,0},
	{1,1,0,0},
	{1,0,0,0},
	{0,0,0,0}
},
},
};//end
void simul(void* _Params) {
	_Param* Param = (_Param*)_Params;
#if key_test
	if (Param->key != 0) {
		switch (Param->key) {
		case 72: printf("�� "); Param->key = 0; break;
		case 75: printf("�� "); Param->key = 0; break;
		case 77: printf("�� "); Param->key = 0; break;
		case 80: printf("�� "); Param->key = 0; break;
		default: printf("%d ", Param->key); Param->key = 0; break;
		}
	}
#endif
	static time_t start=2, end=4;		//} for dropdown timer
	static double dif;				//}
	static bool now_mino_live=no;
	static int nowmino_Y = 0;
	static bool nowimpact = no;
	static list_cnt = 6;
	static mino_list[7] = { 0,1,2,3,4,5,6 };
	dif=difftime(end, start);
	//check nosedive
	if (Param->key==down && now_mino_live==yes) {
		nosedive(Param->board, Param->blockboard);
		return;
	}
		if (dif>=speed)
	{ 
		time(&start);/*time*/
		//push mino
	}
	
	if (now_mino_live == false) {
		//spawn mino
	}
	// mino table is last *and* turn end (now_mino_live == false)
	if (list_cnt == 6 && now_mino_live == false && nowimpact==yes) {
		shupple(mino_list);
		list_cnt = 0;
	}
	time(&end);/*time*/
}

/* ~think flow~
loop in 1.sec,Param->key base change boards
now -> 
	  
*/