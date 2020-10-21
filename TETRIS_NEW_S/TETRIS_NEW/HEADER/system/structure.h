#pragma once
typedef struct _Param {
	int key;
	int(*board)[12];
	int(*blockboard)[12];
}_Param;
typedef struct _Buffer {
	int(*frtbuf)[12];
	int(*bckbuf)[12];
}_Buffer;
