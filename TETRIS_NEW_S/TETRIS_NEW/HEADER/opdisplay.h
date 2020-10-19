#pragma once
void gotoxy(int x, int y);
void fullscreen();
//i=background,j=text  /default:0(black background),3(sky text)
void info(int i, int j);
//(text,back)
void setcolor(unsigned short text,unsigned short back);
//배경색전체설정
void backcolor(unsigned short num);
//Hide Cursor 1->Hide  0->display
void CursorView(char show);

