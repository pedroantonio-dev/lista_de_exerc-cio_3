#include <stdio.h>
void eleicao(int c_1,int c_2,int c_3,int c_4,int nulo,int branco){
	int voto;
	do{
		printf("1 -> Candidato 1 \n2 -> Candidato 2\n3 -> Candidato 3\n4 -> Candidato 4\n5 - >nulo\n6 -> voto em branco\n0 -> sair\ndigite o voto : ");
		scanf("%d", &voto);
		switch(voto){
			case 1:
				c_1++;
				break;
			case 2:
				c_2++;
				break;
			case 3:
				c_3++;
				break;
			case 4:
				c_4++;
				break;
			case 5:
				nulo++;
				break;
			case 6:
				branco++;
				break;
			case 0:
				printf("\n--- Votacao Encerrada ---\n");
                break;
			default:
                printf("Codigo invalido! Voto nao computado.\n");			
		}
	}while(voto>0);
	printf("Candidato 1 -> %d votos\nCandidato 2 -> %d votos\nCandidato 3 -> %d votos\nCandidato 4 -> %d votos\nVotos Nulos->%d\nVotos em branco->%d",c_1,c_2,c_3,c_4,nulo,branco);
}
void main(){
	eleicao(0,0,0,0,0,0);
}
