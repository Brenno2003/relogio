#include<stdio.h>
#include<windows.h>
#include"tempo.h"

int main(){
	
int s = 0;
int m = 0;
int h = 0;
int a = 0;



printf("[1]Relogio\n");
printf("[2]Conometro\n");
printf("Escolha uma opcao: ");
scanf("%d", &a);
switch (a){
	case 1:
		relogio(s, m, h, a);
		break;
	case 2:
		conometro(s, m, h);
		break; 


}



}

