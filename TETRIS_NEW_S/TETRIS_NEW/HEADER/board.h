#pragma once
//20*10 array,+ side and bottom add void sell for impact cheak
int board[25][12] = { 0, };
int blockboard[25][12] = { 0, };
int scrbuffer[25][12]={ 0, };
int backbuffer[25][12] = { 0, };
int block[7][4][4][4] = {
	/*M_I*/{
		/*0면*/{
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0}
	},  /*1면*/{
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	},	/*2면*/ {
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0},
		{1,0,0,0}
	},	/*3면*/{
		{1,1,1,1},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	},

},
/*M_O*/{
	/*0면*/{
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},  /*1면*/{
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*2면*/ {
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*3면*/{
	{1,1,0,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},

},
/*M_T*/{
	/*0면*/{
	{1,1,1,0},
	{0,1,0,0},
	{0,1,0,0},
	{0,0,0,0}
},  /*1면*/{
	{0,0,1,0},
	{1,1,1,0},
	{0,0,1,0},
	{0,0,0,0}
},	/*2면*/ {
	{0,1,0,0},
	{0,1,0,0},
	{1,1,1,0},
	{0,0,0,0}
},	/*3면*/{
	{1,0,0,0},
	{1,1,1,0},
	{1,0,0,0},
	{0,0,0,0}
},

},
/*M_L*/{
	/*0면*/{
	{1,0,0,0},
	{1,0,0,0},
	{1,0,0,0},
	{1,1,1,0}
},  /*1면*/{
	{1,1,1,1},
	{1,0,0,0},
	{1,0,0,0},
	{0,0,0,0}
},	/*2면*/ {
	{1,1,1,0},
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0}
},	/*3면*/{
	{0,0,0,1},
	{0,0,0,1},
	{1,1,1,1},
	{0,0,0,0}
},

},
/*M_J*/{
	/*0면*/{
	{0,0,1,0},
	{0,0,1,0},
	{0,0,1,0},
	{1,1,1,0}
},  /*1면*/{
	{1,0,0,0},
	{1,0,0,0},
	{1,1,1,1},
	{0,0,0,0}
},	/*2면*/ {
	{1,1,1,0},
	{1,0,0,0},
	{1,0,0,0},
	{1,0,0,0}
},	/*3면*/{
	{1,1,1,1},
	{0,0,0,1},
	{0,0,0,1},
	{0,0,0,0}
},
},
/*M_S*/{
	/*0면*/{
	{0,1,1,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},  /*1면*/{
	{1,0,0,0},
	{1,1,0,0},
	{0,1,0,0},
	{0,0,0,0}
},	/*2면*/ {
	{0,1,1,0},
	{1,1,0,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*3면*/{
	{1,0,0,0},
	{1,1,0,0},
	{0,1,0,0},
	{0,0,0,0}
},
},
/*M_Z*/{
	/*0면*/{
	{1,1,0,0},
	{0,1,1,0},
	{0,0,0,0},
	{0,0,0,0}
},  /*1면*/{
	{0,1,0,0},
	{1,1,0,0},
	{1,0,0,0},
	{0,0,0,0}
},	/*2면*/ {
	{1,1,0,0},
	{0,1,1,0},
	{0,0,0,0},
	{0,0,0,0}
},	/*3면*/{
	{0,1,0,0},
	{1,1,0,0},
	{1,0,0,0},
	{0,0,0,0}
},
},
};//end


