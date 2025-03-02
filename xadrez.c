#include <stdio.h>

void movimentos_pecas(char nome_peca[11], int tipo, int qtd_movimentos){

    //Cada peça tem um tipo 1 = Torre, 2 = Bispo, 3 = Rainha, 4 = Cavalo
    //Esses tipos são definidos pela entrada do usuário ao escolher a peça.
    
    if (tipo == 1){
        for (int i = 1; i < qtd_movimentos + 1; i++){
            if (i == 1){
                printf("%s se moveu uma casa à direita.\n", nome_peca);
            } else {
                printf("%s se moveu outra casa à direita.\n", nome_peca);
            }
            if (i == qtd_movimentos) {
                printf("%s se moveu %d casas\n", nome_peca, qtd_movimentos);
            }
        }
    } else if (tipo == 2){
        int i = 1;
        do {
            i++;
            printf("%s se moveu uma casa para cima.\n", nome_peca);
            printf("%s se moveu uma casa à direita.\n", nome_peca);  
        } while(i != qtd_movimentos);
        printf("%s se moveu %d casas na diagonal.\n", nome_peca, qtd_movimentos);
    } else if (tipo == 3){
        //Rainha pode-se mover em todas as posições. Ela irá se mover em 8 casas à esquerda.
        for(int i = 1; i < qtd_movimentos + 1; i++){
            i == 1 ? printf("%s se moveu uma casa à esquerda.\n", nome_peca) : printf("%s se moveu outra casa à esquerda.\n", nome_peca);

            if (i == qtd_movimentos) {
                printf("%s se moveu %d casas à esquerda.\n", nome_peca, qtd_movimentos);
            }
        }
    } else { //Else porque sobrou somente o tipo 4.
        //Cavalo pode-se mover em "L".
        for (int i = 1; i < qtd_movimentos + 1; i++) {
            i == 1 ? printf("%s se moveu uma casa para baixo.\n", nome_peca) : printf("%s se moveu outra casa para baixo.\n", nome_peca);

            for(int j = 1; j < i; j++){
                printf("%s se moveu uma casa à direita.\n", nome_peca);
                printf("%s se moveu em 'L' %d casas para baixo e %d casa à direita.\n", nome_peca, qtd_movimentos, j);
            }

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
            movimentos_pecas(torre, escolha_peca, 5);
            break;
            case 2:
            movimentos_pecas(bispo, escolha_peca, 5);
            break;
            case 3:
            movimentos_pecas(rainha, escolha_peca, 8);
            break;
            case 4:
            movimentos_pecas(cavalo, escolha_peca, 2); 
            break;
        }

    } while(escolha_peca != 5);

    return 0;

}