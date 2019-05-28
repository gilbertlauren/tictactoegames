#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int board[26] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
int turn = 1,flag = 0;
int player,comp, numb, lolx , loly, lol;

void menu();
void value(int n);
void start_game();
void check_draw();
void draw_board();
void player_first();
void put_X_O(char ch,int pos);
COORD coord= {0,0}; //set pojok kiri atas sebagai titik pusat kordinat, kebawah +y kekanan +x
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void main()
{
    system("cls");
    menu();
    getch();

}

void menu()
{
    int choice;
    system("cls");
    printf("\n--------MENU--------");
    printf("\n1 : Play with X");
    printf("\n2 : Play with O");
    printf("\n3 : Exit");
    printf("\nEnter your choice:>");
    scanf("%d",&choice);
    turn = 1;
    switch (choice)
    {
    case 1:
        player = 1;
        comp = 0;
        player_first();
        break;
    case 2:
        player = 0;
        comp = 1;
        start_game();
        break;
    case 3:
        exit(0);
    default:
        menu();
    }
}


int posswin(int p)
{
// p==1 then X   p==0  then  O
    int i;
    int check_val,pos;

    if(p == 1)
        check_val = 162;   
    else
        check_val = 1250;

    i = 1;
    while(i<=25)//row check
    {
        if((board[i] * board[i+1] * board[i+2] * board[i+3] * board[i+4] ) == check_val)
        {
            if(board[i] == 2)
                return i;
            if(board[i+1] == 2)
                return i+1;
            if(board[i+2] == 2)
                return i+2;
            if(board[1+3]==2)
             return i+3;
            if(board[i+4]==2)
             return i+4;
        }
        i+=5;
    }

    i = 1;
    while(i<=5)//column check
    {
        if(board[i] * board[i+5] * board[i+10] * board[i+15] * board[i+20]== check_val)
        {
            if(board[i] == 2)
                return i;
            if(board[i+5] == 2)
                return i+5;
            if(board[i+10] == 2)
                return i+10;
            if(board[i+15] == 2)
             return i+15;
            if(board[i+20] ==2)
             return i+20;
        }
        i++;
    }

    if(board[1] * board[7] * board[13] * board[19] *board[25]== check_val)
    {
        if(board[1] == 2)
            return 1;
        if(board[7] == 2)
            return 7;
        if(board[13] == 2)
            return 13;
        if(board[19]==2)
         return 19;
        if(board[25]==2)
         return 25;
    }

    if(board[5] * board[9] * board[13] * board[17] * board[21]== check_val)
    {
        if(board[5] == 2)
            return 5;
        if(board[9] == 2)
            return 13;
        if(board[13] == 2)
            return 13;
        if(board[17]==2)
         return 17;
        if (board[21]==2)
         return 21;
    }
    return 0;
}

void value(int n)
{
    if((turn % 2)==1)
        board[n] = 3;
    else
        board[n] = 5;
    turn++;
}

void player_first()
{
    int pos;
 char code[20];
    check_draw();
    draw_board();
    gotoxy(30,26);
    printf("Your Turn :> ");
    scanf("%s",&code);
    system("cls");
    if ((strcmp(code, "a1") == 0)||(strcmp(code, "1")== 0)||(strcmp(code, "A1") == 0)){
     pos=1;
 }
 if ((strcmp(code, "b1") == 0)||(strcmp(code, "2")== 0)||(strcmp(code, "B1") == 0)){
     pos=2;
 }
 if ((strcmp(code, "c1") == 0)||(strcmp(code, "3")== 0)||(strcmp(code, "C1") == 0)){
     pos=3;
 }
 if ((strcmp(code, "d1") == 0)||(strcmp(code, "4")== 0)||(strcmp(code, "D1") == 0)){
     pos=4;
 }
 if ((strcmp(code, "e1") == 0)||(strcmp(code, "5")== 0)||(strcmp(code, "E1") == 0)){
     pos=5;
 }
 if ((strcmp(code, "a2") == 0)||(strcmp(code, "6")== 0)||(strcmp(code, "A2") == 0)){
     pos=6;
 }
 if ((strcmp(code, "b2") == 0)||(strcmp(code, "7")== 0)||(strcmp(code, "B2") == 0)){
     pos=7;
 }
 if ((strcmp(code, "c2") == 0)||(strcmp(code, "8")== 0)||(strcmp(code, "C2") == 0)){
     pos=8;
 }
 if ((strcmp(code, "d2") == 0)||(strcmp(code, "9")== 0)||(strcmp(code, "D2") == 0)){
     pos=9;
 }
 if ((strcmp(code, "e2") == 0)||(strcmp(code, "10")== 0)||(strcmp(code, "E2") == 0)){
     pos=10;
 }
 if ((strcmp(code, "a3") == 0)||(strcmp(code, "11")== 0)||(strcmp(code, "A3") == 0)){
     pos=11;
 }
 if ((strcmp(code, "b3") == 0)||(strcmp(code, "12")== 0)||(strcmp(code, "B3") == 0)){
     pos=12;
 }
 if ((strcmp(code, "c3") == 0)||(strcmp(code, "13")== 0)||(strcmp(code, "C3") == 0)){
     pos=13;
 }
 if ((strcmp(code, "d3") == 0)||(strcmp(code, "14")== 0)||(strcmp(code, "D3") == 0)){
     pos=14;
 }
 if ((strcmp(code, "e3") == 0)||(strcmp(code, "15")== 0)||(strcmp(code, "E3") == 0)){
     pos=15;
 }
 if ((strcmp(code, "a4") == 0)||(strcmp(code, "16")== 0)||(strcmp(code, "A4") == 0)){
     pos=16;
 }
 if ((strcmp(code, "b4") == 0)||(strcmp(code, "17")== 0)||(strcmp(code, "B4") == 0)){
     pos=17;
 }
 if ((strcmp(code, "c4") == 0)||(strcmp(code, "18")== 0)||(strcmp(code, "C4") == 0)){
     pos=18;
 }
 if ((strcmp(code, "d4") == 0)||(strcmp(code, "19")== 0)||(strcmp(code, "D4") == 0)){
     pos=19;
 }
 if ((strcmp(code, "e4") == 0)||(strcmp(code, "20")== 0)||(strcmp(code, "E4") == 0)){
     pos=20;
 }
 if ((strcmp(code, "a5") == 0)||(strcmp(code, "21")== 0)||(strcmp(code, "A5") == 0)){
     pos=21;
 }
 if ((strcmp(code, "b5") == 0)||(strcmp(code, "22")== 0)||(strcmp(code, "B5") == 0)){
     pos=22;
 }
 if ((strcmp(code, "c5") == 0)||(strcmp(code, "23")== 0)||(strcmp(code, "C5") == 0)){
     pos=23;
 }
 if ((strcmp(code, "d5") == 0)||(strcmp(code, "24")== 0)||(strcmp(code, "D5") == 0)){
     pos=24;
 }
 if ((strcmp(code, "e5") == 0)||(strcmp(code, "25")== 0)||(strcmp(code, "E5") == 0)){
     pos=25;
 }
 
 if(pos==0){
  player_first();
 }
 

    if(board[pos] != 2){
        player_first();
 }

    if(pos == posswin(player))
    {
        value(pos);
        draw_board();
        gotoxy(30,28);
        printf("Winner : Player ");
        getch();
        exit(0);
    }

    value(pos);
    draw_board();
    start_game();
}

void start_game()
{
// p==1 then X   p==0  then  O
time_t t;
int pol, counter;
check_draw();
counter=0;
srand((unsigned) time(&t));
pol=0;
    if(posswin(comp))
    {
        value(posswin(comp));
        flag = 1;
    }
    else if(posswin(player)){
        value(posswin(player));
    }
    else{
     while(counter<=0){
      pol=(1+(rand()%25));
      if(board[pol] !=2){
    counter=0;
      } else{
       value(pol);
       
       counter+=1;
   }
     }
 }
    draw_board();
    

    if(flag)
    {
        gotoxy(30,28);
        
        printf("Winner : Computer");
        getch();
        exit(0);
    }
    else
        player_first();
}

void check_draw()
{
    if(turn >= 26)
    {
        gotoxy(30,28);
        
        printf("Result : Draw");
        getch();
        exit(0);
    }
}

void draw_board()
{
    int j;

    for(j=8; j<24; j++)
    {
        gotoxy(21,j);
        printf("|       |       |       |       |       |");
    }
    gotoxy(22,8);
    printf("---------------------------------------");
    gotoxy(22,11);
    printf("---------------------------------------");
    gotoxy(22,14);
    printf("---------------------------------------");
    gotoxy(22,17);
    printf("---------------------------------------");
    gotoxy(22,20);
    printf("---------------------------------------");
    gotoxy(22,23);
    printf("---------------------------------------");

 gotoxy(25,7);
 printf("A");
 gotoxy(33,7);
 printf("B");
 gotoxy(41,7);
 printf("C");
 gotoxy(49,7);
 printf("D");
 gotoxy(57,7);
 printf("E");
 gotoxy(19,9);
 printf("1");
 gotoxy(19,12);
 printf("2");
 gotoxy(19,15);
 printf("3");
 gotoxy(19,18);
 printf("4");
 gotoxy(19,21);
 printf("5");

    for(j=1; j<26; j++)
    {
        if(board[j] == 3)
            put_X_O('X',j);
        else if(board[j] == 5)
            put_X_O('O',j);
    }
}

void put_X_O(char ch,int pos)
{
    int m;
    int x = 26, y = 9;

    m = pos;

    if(m > 5)
    {
        while(m > 5)
        {
            y += 3;
            m -= 5;
        }
    }
    if(pos % 5 == 0)
        x += 32;
    else
    {
        pos %= 5;
        pos--;
        while(pos>0)
        {
            x+=8;
            pos--;
        }
    }
    gotoxy(x,y);
    printf("%c",ch);
}
