#include <stdio.h>

void movimentoTorre(int movimentos) {
    if (movimentos > 0) {
        printf("Torre se moveu à direita\n");
        movimentoTorre(movimentos - 1);
    }
}

void movimentoBispo(int movimentos) {
    do {

        printf("Bispo se moveu para cima\n");
        printf("Bispo se moveu à direita.\n");
        movimentos--;

    } while (movimentos != 0);
}

void movimentoRainha(int movimentos) {
    if (movimentos > 0) {
        printf("Rainha se moveu à esquerda.\n");
        movimentoRainha(movimentos - 1);
    }
}

void movimentoCavalo(int movimentos) {
    for(int i = 1; i < movimentos; i++) {
        printf("Cavalo se moveu para baixo.\n");

        int j = 1;
        while (j < i) {
            j++;
            printf("Cavalo se moveu à direita.\n");

        }
    }

}

int main(){
    /*Simução de movimentos de xadrez.*/

    int i = 0; // Valor inicial para cada peça.
    char torre[11] = "Torre"; //Mova-se à direita;
    char bispo[11] = "Bispo"; // Mova-se em diagonal;
    char rainha[11] = "Rainha"; //Mova-se em todas as posições;
    char cavalo[11] = "Cavalo"; //Mova-se em L.

    int escolha_peca;

    do {
        printf("\n1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair\n> ");
        scanf("%d", &escolha_peca);

        switch(escolha_peca){
            case 1:
            movimentoTorre(5);
            break;
            
            case 2:
            movimentoBispo(5);
            break;

            case 3:
            movimentoRainha(8);
            break;

            case 4:
            movimentoCavalo(3);
            break;
        }

    } while(escolha_peca != 5);

    return 0;

}