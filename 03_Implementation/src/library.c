#include<library.h>
void gotoxy (int x, int y)
{
coord.X = x; coord.Y = y; // X and Y coordinates
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main()
{
k=Password(password);
if(k==1)
{
mainmenu();
}
else
{
printf("login unsuccessfull");
main();


}
//getch();

