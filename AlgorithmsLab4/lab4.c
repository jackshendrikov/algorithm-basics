#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = x; scrn.Y = y;
	SetConsoleCursorPosition(hOuput,scrn);
	Sleep(30);
	printf("*");
}

void gotoxy2(int x, int y)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = x; scrn.Y = y;
	SetConsoleCursorPosition(hOuput,scrn);
	Sleep(30);
	printf("*");
}


int main()
{
    int f=1, start_y2=5, start_x2=74, start_y=20, start_x=78, step_y=15, step_x=3;
    int y=start_y;
    int x=start_x;
	int x2=start_x2;
    int y2=start_y2;

    while(f<=2) {
        while (y<start_y2+step_y) {
            gotoxy(x,y);
            y++;
            gotoxy2(x2,y2);
            y2--; 
		}
        
		start_y2=y;
        start_y=y2;

        while (x <start_x2+step_x) {
            gotoxy(x,y);
            x++;
            gotoxy2(x2,y2);
            x2--; 
		}
        
		start_x2=x;
        start_x=x2;

        while (y>start_y2-step_y) {
            gotoxy(x,y);
            y--;
            gotoxy2(x2,y2);
            y2++; 
		}
        
		start_y2=y;

        while (x <start_x2+step_x) {
            gotoxy(x,y);
            x++;
            gotoxy2(x2,y2);
            x2--; 
		}
        
		start_x2=x;
        start_x=x2;

        while (y<start_y2+step_y) {
            gotoxy(x,y);
            y++;
            gotoxy2(x2,y2);
            y2--; 
		}
		
        start_y2=y;
        start_y=y2;

        while (x <start_x2+step_x) {
            gotoxy(x,y);
            x++;
            gotoxy2(x2,y2);
            x2--; 
		}
		
        start_x2=x;
        start_x=x2;

        while (y>start_y2-step_y) {
            gotoxy(x,y);
            y--;
            gotoxy2(x2,y2);
            y2++; 
		}
		
         start_y2=y;

        while (x <start_x2+step_x) {
            gotoxy(x,y);
            x++;
            gotoxy2(x2,y2);
            x2--; 
		}
        
		start_x2=x;
        start_x=x2;

        f++;
    }
	
    while (y<=start_y2+step_y) {
		gotoxy(x,y);
		y++;
		gotoxy2(x2,y2);
		y2--; 
	} 
}