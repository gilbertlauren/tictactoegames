#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include <MMsystem.h>

void gotoxy(int x, int y)
{
 
 COORD coord;
 
 coord.X = x;
 
 coord.Y = y;
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 
}
void loading(){
	system("cls");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++);
    printf("%c",177);}
}
void loading2(){
	system("cls");
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("please wait...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++);
    printf("%c",177);}
}
void text(){
  loading2();
  system("cls");
  printf("======================================================================================================\n");
  printf("			  _______ _        _______           _______         \n");
  printf("			 |__   __(_)      |__   __|         |__   __|        \n");
  printf("			    | |   _  ___     | | __ _  ___     | | ___   ___ \n");
  printf("			    | |  | |/ __|    | |/ _` |/ __|    | |/ _ \\ / _ \\\n");
  printf("			    | |  | | (__     | | (_| | (__     | | (_) |  __/\n");
  printf("			    |_|  |_|\\___|    |_|\\__,_|\\___|    |_|\\___/ \\___|\n");
  printf("			                                                     \n");
  printf("					Dibuat oleh:\n");
  printf(".____                             .___               ___________.__    .__                     \n");
  printf("|    |    ____ _____    ____    __| _/______  ____   \\__    ___/|  |__ |__| ___________ ___.__.\n");
  printf("|    |  _/ __ \\\\__  \\  /    \\  / __ |\\_  __ \\/  _ \\    |    |   |  |  \\|  |/ __ \\_  __ <   |  |\n");
  printf("|    |__\\  ___/ / __ \\|   |  \\/ /_/ | |  | \\(  <_> )   |    |   |   Y  \\  \\  ___/|  | \\/\\___  |\n");
  printf("|_______ \\___  >____  /___|  /\\____ | |__|   \\____/    |____|   |___|  /__|\\___  >__|   / ____|\n");
  printf("        \\/   \\/     \\/     \\/      \\/                                \\/        \\/       \\/     \n");
  printf("     				 _______       ___      .__   __. \n");
  printf("     				|       \\     /   \\     |  \\ |  | \n");
  printf("     				|  .--.  |   /  ^  \\    |   \\|  | \n");
  printf("     				|  |  |  |  /  /_\\  \\   |  . `  | \n");
  printf("     				|  '--'  | /  _____  \\  |  |\\   | \n");
  printf("     				|_______/ /__/     \\__\\ |__| \\__| \n");
  printf("     		                                  \n");
  printf("  ________.__.__ ___.                  __    .____                                        \n");
  printf(" /  _____/|__|  |\\_ |__   ____________/  |_  |    |   _____   __ _________   ____   ____  \n");
  printf("/   \\  ___|  |  | | __ \\_/ __ \\_  __ \\   __\\ |    |   \\__  \\ |  |  \\_  __ \\_/ __ \\ /    \\ \n");
  printf("\\    \\_\\  \\  |  |_| \\_\\ \\  ___/|  | \\/|  |   |    |___ / __ \\|  |  /|  | \\/\\  ___/|   |  \\\n");
  printf(" \\______  /__|____/___  /\\___  >__|   |__|   |_______ (____  /____/ |__|    \\___  >___|  /\n");
  printf("        \\/            \\/     \\/                      \\/    \\/                   \\/     \\/ \n");
  printf("======================================================================================================");
  printf("\n");
  
  
  
  
  printf("\nMasukan perintah yang ingin dilakukan: \n");
  printf("[1] Tic Tac Toe Games\n[2] Petunjuk\n[3] Exit\n");
}

void errorHandling(){
  printf("\nInput yang and masukan tidak valid");
  Sleep(1000);
  loading();
  system("cls");
  main();
}

int main(){
  PlaySound(TEXT("D:\\proyek akhir\\a2002011001-e02.wav"),NULL,SND_ASYNC|SND_LOOP);
  int input;
  text();
  printf("Masukkan input: ");
  scanf(" %d", &input);
  switch(input){
    case 1: {
      loading();
      char jalan1[] = "tictactoe.exe";
      char jalan2[BUFSIZ];
      PlaySound(TEXT("D:\\proyek akhir\\Flower Garden - Yoshis Island.wav"),NULL,SND_ASYNC|SND_LOOP);
      system ("tictactoe.exe");
      strcpy (jalan2, "tictactoe.exe");
      strcat (jalan2, " -aparm -b");

      
  system("Pause");
  system("cls");
  return main();
 }
    case 2: {
      loading();
      system("cls");
      printf("Cara bermain Tic Tac Toe:\n");
      printf("\n1.Permainanan Tic Tac Toe ini berukuran 5 x 5 dan pemain dapat memilih ingin menggunakan X / O\n");
      printf("\n2.Untuk memenangkan permainan ini pemain harus menyelesaikan 5 baris / kolom berbentuk X / O seperti contoh dibawah ini\n\n");
      printf("|X|X|X|X|X|  |O|O|O|O|O|	 |X| | | | |   |O| | | | |	 |X| | | | |  |O| | | | |		\n");
      printf("| | | | | |  | | | | | |	 | |X| | | |   | |O| | | |	 |X| | | | |  |O| | | | |		\n");
      printf("| | | | | |  | | | | | |	 | | |X| | |   | | |O| | |	 |X| | | | |  |O| | | | |		\n");
      printf("| | | | | |  | | | | | |	 | | | |X| |   | | | |O| |	 |X| | | | |  |O| | | | |		\n");
      printf("| | | | | |  | | | | | |	 | | | | |X|   | | | | |O|	 |X| | | | |  |O| | | | |		\n");
      printf("\n3.Untuk memasukkan X / O kedalam papan, dapat menggunakan 2 pilihan yaitu: nomor urut atau format(kolom+baris)\n");
      printf("contoh:\n");
      printf("  A B C D E                                                         A B C D E\n");
      printf("1| | | | | |   Jika user memasukan input 13 atau sama dengan C3   1| | | | | |\n");
      printf("2| | | | | |   Maka hasilnya akan menjadi seperti ini             2| | | | | |\n");
      printf("3| | | | | |                                                      3| | |X| | |\n");
      printf("4| | | | | |                                                      4| | | | | |\n");
      printf("5| | | | | |                                                      5| | | | | |\n");
      printf("\n4.Jika semua papan sudah penuh dan tidak lagi terdapat ruang kosong, maka permainan dianggap seri\n");
      printf("\n5.Jika komputer mencapai 5 baris / kolom terlebih dahulu, maka anda kalah\n");
      printf("\n\nTekan 1 untuk kembali ke menu\n");
      scanf("%d", &input);
      if (input <= 1){
        system("cls");
        main();
      } else {
        errorHandling();
      }
      break;
      system("Pause");
      system("cls");
      return main();
    }
    case 3: {
      printf("Terima kasih!\nJika ada pertanyaan, hubungi:\nLeandro Thiery : leandro.7\nGilbert Lauren : gilbertlauren");
      return 0;
    }
  }
  return 0;
}
