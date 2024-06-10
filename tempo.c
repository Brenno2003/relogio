#include<stdio.h>
#include "tempo.h"
#include<windows.h>

int relogio(int s, int m, int h, int a){
		printf("Segundos: ");
		scanf("%d", &s);
		printf("Minutos: ");
		scanf("%d", &m);
		printf("Horas: ");
		scanf("%d", &h);
		printf("[1] O relogio vai ate 12\n");
		printf("[2] O relogio vai ate 24\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &a);
		switch (a){
			case 1:
				a = 12;
				break;
			case 2:
				a = 24;
				break;
		}
		
		for(h; h <= a; h++){
		
		for(m; m<60; m++){
		
		if(s<60){
			for(s; s<60; s++){
					if(h >= 10 && m >= 10 && s >= 10){
					printf("%d:%d:%d\n", h, m, s);
					}
					else if(h >= 10 && m >= 10 && s < 10){
						printf("%d:%d:0%d\n", h, m, s);
					}
					else if(h >= 10 && m < 10 && s < 10){
						printf("%d:%0d:0%d\n", h, m, s);
					}
					else if(h >= 10 && m < 10 && s >= 10){
						printf("%d:0%d:%d\n", h, m, s);
					}
					else if(h < 10 && m < 10 && s >= 10){
						printf("0%d:0%d:%d\n", h, m, s);
					}
					else if(h < 10 && m >= 10 && s >= 10){
						printf("0%d:%d:%d\n", h, m, s);
					}
					else if(h < 10 && m >= 10 && s < 10){
						printf("0%d:%d:%0d\n", h, m, s);
					}
					else{
						printf("0%d:0%d:0%d\n", h, m, s);
					}
					sleep(1000);
				}
				
			}
		
		s = s-59;
		
		}
		m = m -59;
		}
}

int conometro(int s, int m, int h){
	printf("Segundos: ");
	scanf("%d", &s);
	printf("Minutos: ");
	scanf("%d", &m);
	printf("Horas: ");
	scanf("%d", &h);
		for(h; h >= 0; h--){
			for(m; m >= 0; m--){
				if(s>=0){
					for(s; s>=0; s--){
						if(h >= 10 && m >= 10 && s >= 10){
							printf("%d:%d:%d\n", h, m, s);
							}
							else if(h >= 10 && m >= 10 && s < 10){
								printf("%d:%d:0%d\n", h, m, s);
							}
							else if(h >= 10 && m < 10 && s < 10){
								printf("%d:%0d:0%d\n", h, m, s);
							}
							else if(h >= 10 && m < 10 && s >= 10){
								printf("%d:0%d:%d\n", h, m, s);
							}
							else if(h < 10 && m < 10 && s >= 10){
								printf("0%d:0%d:%d\n", h, m, s);
							}
							else if(h < 10 && m >= 10 && s >= 10){
								printf("0%d:%d:%d\n", h, m, s);
							}
							else if(h < 10 && m >= 10 && s < 10){
								printf("0%d:%d:%0d\n", h, m, s);
							}
							else{
								printf("0%d:0%d:0%d\n", h, m, s);
							}
							sleep(1);
				
					}
						
				}
				
				s = 59;
				
				}
				m = 59;
				
				}
}
