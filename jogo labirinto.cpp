#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
int cima,baixo,direita,esquerda;

/*função gotoxy*/
void gotoxy(int x, int y){
	COORD pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*função labirinto*/
void mapa_labirinto(int *linha_inicial, int *coluna_inicial, int labirinto[30][30]){
	gotoxy(0,0);
	printf("\n\n\n\n");
	printf("                         ");
	for(int i=0; i<15; i++){
		for(int j=0; j<30; j++){
			if(i==*linha_inicial && j==*coluna_inicial){
				printf("!");
				cima=labirinto[i-1][j];
				baixo=labirinto[i+1][j];
				esquerda=labirinto[i][j-1];
				direita=labirinto[i][j+1];
			}
			else{
				if(labirinto[i][j]==0)
					printf("%c", 219);
				if(labirinto[i][j]==1 || labirinto[i][j]==2)
					printf(" ");
				}
			}
		printf("\n");
		printf("                         ");
		}
}

/*função main*/
int main(){
/*labirinto 1*/
	int labirinto1[30][30]{
		0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,0,
		0,1,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,1,0,
		0,1,0,1,1,1,0,1,1,1,0,0,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,0,1,0,
		0,1,0,1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,
		0,1,1,1,0,1,1,1,0,1,1,0,1,0,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,0,
		0,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,
		0,1,1,1,1,1,0,1,1,1,1,0,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,0,1,0,
		0,1,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,
		0,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0,1,1,1,0,
		0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,
		0,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,
		0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
		};
/*Labirinto 2*/
	int labirinto2[30][30]={
		0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,
		0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,
		0,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,0,1,1,1,0,
		0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
		0,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,0,
		0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,
		0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,
		0,1,1,1,0,1,1,1,0,1,0,1,1,1,1,1,1,0,1,0,1,1,0,1,1,1,1,0,1,0,
		0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,
		0,1,0,1,1,1,0,1,0,1,1,1,0,1,0,1,1,0,1,1,1,1,0,1,1,1,1,1,1,0,
		0,1,0,0,1,0,0,1,0,0,0,1,0,1,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,
		0,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,1,1,1,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0
	};
/*Labirinto 3*/
	int labirinto3[30][30]={
		0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,1,1,0,1,0,1,1,1,1,0,
		0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1,1,0,1,0,1,1,1,0,1,1,0,
		0,1,0,1,1,1,1,0,1,1,1,0,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,
		0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,1,1,0,1,1,1,1,1,1,0,
		0,1,0,1,1,0,1,1,1,0,1,1,1,0,1,1,0,1,1,1,0,1,0,0,0,1,0,0,0,0,
		0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0,1,1,1,1,1,0,1,1,0,
		0,1,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,
		0,0,1,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,
		0,1,1,0,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,
		0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,1,1,1,0,
		0,1,0,1,1,1,0,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,
		0,1,0,1,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,1,0,1,0,
		0,1,1,1,0,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,0,1,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0
	};
	char jogar_novamente;
	for(int i=0; i<25; i++){
		for(int j=0; j<80; j++){
			if(i==0||i==24||j==0||j==79)
				printf("%c", 219);
			else
				printf(" ");
			}
		}
	gotoxy(0,0);
	gotoxy(1,1);
	printf("%26cBem Vindo(a) ao labirinto!!", ' ');
	gotoxy(1,2);
	printf("%10cAbaixo estao os comandos que voce precisa saber para jogar:", ' ');
	gotoxy(1,4);
	printf("%31c%c%c%c%c%c%c%c", ' ', 218,196,196,196,196,196,191);
	gotoxy(1,5);
	printf("%31c|     |", ' ');
	gotoxy(1,6);
	printf("%31c|  W  |", ' ');
	gotoxy(1,7);
	printf("%31c|     |", ' ');
	gotoxy(1,8);
	printf("%25c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c", ' ', 218, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 197, 196, 196, 196, 196, 196, 191, 218, 196, 196, 196, 196, 196, 191);
	gotoxy(1,9);
	printf("%25c|     |     |     |   |     |", ' ');
	gotoxy(1,10);
	printf("%25c|  A  |  S  |  D  |   |  X  |", ' ');
	gotoxy(1,11);
	printf("%25c|     |     |     |   |     |", ' ');
	gotoxy(1,12);
	printf("%25c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c", ' ', 192, 196, 196, 196, 196, 196, 193, 196,196,196,196,196, 193, 196,196,196,196,196, 217, 192, 196,196,196,196,196, 217);
	gotoxy(1,14);
	printf("%4cW = Move o personagem para cima", ' ');
	gotoxy(1,16);
	printf("%4cS = Move o personagem para baixo", ' ');
	gotoxy(1,18);
	printf("%4cD = Move o personagem para a direita", ' ');
	gotoxy(1,20);
	printf("%4cA = Move o personagem para a esquerda%13cX = Finaliza o jogo", ' ', ' ');
	gotoxy(1,22);
	printf("%21cPressione qualquer tecla para continuar", ' ');
	gotoxy(1,23);
	printf("%41c", ' ');
	
	getch(); 
	do{
		jogar_novamente='1';
		int linha_inicial=0, coluna_inicial=6, venceu=0, mapa=1;
		char comando;
		system("cls");
		do{
			switch(mapa){
				case 1:
					mapa_labirinto(&linha_inicial, &coluna_inicial, labirinto1);
					break;
				case 2:
					mapa_labirinto(&linha_inicial, &coluna_inicial, labirinto2);
					break;
				case 3:
					mapa_labirinto(&linha_inicial, &coluna_inicial, labirinto3);
					break;
			}
			gotoxy(40,24);
			if(venceu==0){
			do{
			comando = getch();
			}while(comando!='a' && comando!='s' && comando!='d' && comando!='w' && comando!='A' && comando!='S' && comando!='D' && comando!='W' && comando!='x' && comando!='X');
			if(comando=='a'|| comando=='A')
				if(esquerda!=0){
					coluna_inicial--;
					if(baixo==2)
						venceu=0;
				}
			if(comando=='s'|| comando=='S')
				if(baixo!=0){
					linha_inicial++;
					if(baixo==2)
						venceu=1;
				}
			if(comando=='d'|| comando=='D')
				if(direita!=0){
					coluna_inicial++;
					if(direita==2)
						venceu=1;
				}
			if(comando=='w' || comando=='W')
				if(cima!=0){
					linha_inicial--;
					if(cima==2)
						venceu=1;
				}
			if(comando=='x' || comando=='X'){
				system("cls");
				gotoxy(35,10);
				printf("Fim do jogo");
				gotoxy(38,21);
				return 0;
				}
			}
			else{
				mapa++;
				linha_inicial=0;
				coluna_inicial=6;
				venceu=0;
				system("cls");
			}
		}while(mapa!=4);
		gotoxy(28,10);
		printf("Parabens, voce venceu!!");
		gotoxy(29,11);			
		printf("Jogar novamente?(S/N)\n");
		gotoxy(38,24);
		do{
		jogar_novamente = getch();
		}while(jogar_novamente!='s' && jogar_novamente!='S' && jogar_novamente!='n' && jogar_novamente!='N');
		
	}while(jogar_novamente!='n' && jogar_novamente!='N');
	system("cls");
	gotoxy(35,10);
	printf("Fim do jogo");
	gotoxy(38,21);
}
