#include <stdio.h>
#include <stdlib.h.>
#include <math.h>
#include <conio.h>

void judulProgram();
void mainMenu();
void tentangProgram();

int main(){
	judulProgram();


}

void judulProgram(){
	printf("/////////||=============================================================||\\\\\\\\\\\\\\\\\\\n");
	printf("\\\\\\\\\\\\\\\\\\|| Program Penghitung Emisi Karbon yang Diakibatkan Penggunaan ||/////////\n");
	printf("/////////||             Kendaraan Bermotor Sehari - Hari                ||\\\\\\\\\\\\\\\\\\\n");
	printf("\\\\\\\\\\\\\\\\\\||=============================================================||/////////\n\n");

	printf("                        Dibuat oleh kelompok 4 Progdas 1 :\n");
	printf("                        Faruq Sami Ramadhan\n");
	printf("                        Rafli Aditia\n");
	printf("                        Raihan Muhammad Ihsan\n");	
	printf("                        Shalahuddin Zidane Al-Ghifari\n\n");
	printf("Tekan Enter untuk Memulai Program");
	getch();
	system("cls");
	mainMenu();
}

void mainMenu(){
	int pilihan;
	printf("Main Menu :\n");
	printf("1. Penghitung Emisi Karbon\n");
	printf("2. Bantuan\n");
	printf("3. Tentang Program\n");
	printf("4. Judul Program\n");
	printf("5. Keluar dari Program\n\n");
	printf("Pilihan Anda : ");
	
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1 :
			break;
		case 2 :
			break;
		case 3 :
			system("cls");
			tentangProgram();
			break;
		case 4 :
			system("cls");
			judulProgram();
			break;
		case 5 :
			break;
		case 6 ... 9999999 :
			system("cls");
			printf("Error. Pilihlah menu yang disediakan!\n\n");
			mainMenu();
			break;
	}
}

void tentangProgram(){
	printf("Tentang program penghutung emisi karbon ini : \n");
	printf("Bumi kita. Bumi kita tercinta. Semakin hari, mau kita sadari atau tidak, bumi kita ini semakin panas.\n");
	printf("Tekan enter untuk kembali ke Main Menu");
	getch();
	system("cls");
	mainMenu();
}
