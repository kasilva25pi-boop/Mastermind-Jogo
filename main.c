#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_SENHA 4
#define MIN_DIGITO 1
#define MAX_DIGITO 6

int main() {
    int senha_secreta[TAM_SENHA];
    int palpite[TAM_SENHA];
    int jogadas = 0;
    int ganhas = 0;


    srand(time(NULL));

    
    for (int i = 0; i < TAM_SENHA; i++) {
        senha_secreta[i] = (rand() % (MAX_DIGITO - MIN_DIGITO + 1)) + MIN_DIGITO;
    }

    printf("=== BEM-VINDO AO MASTERMIND ===\n");
    printf("Tente adivinhar a senha de %d digitos (valores de %d a %d).\n\n", TAM_SENHA, MIN_DIGITO, MAX_DIGITO);

    while (!ganhas) {
        int corretos_posicao = 0;
        int corretos_cor = 0;
        int usado_senha[TAM_SENHA] = {0}; 
        int usado_palpite[TAM_SENHA] = {0};

        jogadas++;
        printf("Jogada %d - Introduza o seu palpite (%d digitos separados por espacos): ", jogadas, TAM_SENHA);
        
        
        for (int i = 0; i < TAM_SENHA; i++) {
            scanf("%d", &palpite[i]);
        }

        
        for (int i = 0; i < TAM_SENHA; i++) {
            if (palpite[i] == senha_secreta[i]) {
                corretos_posicao++;
                usado_senha[i] = 1;
                usado_palpite[i] = 1;
            }
        }

        
        for (int i = 0; i < TAM_SENHA; i++) {
            if (usado_palpite[i]) continue; 

            for (int j = 0; j < TAM_SENHA; j++) {
                if (!usado_senha[j] && palpite[i] == senha_secreta[j]) {
                    corretos_cor++;
                    usado_senha[j] = 1; 
                    break;
                }
            }
        }

        
        printf("-> Resposta: %d na posicao correta | %d no lugar errado\n\n", corretos_posicao, corretos_cor);

       
        if (corretos_posicao == TAM_SENHA) {
            ganhas = 1;
        }
    }

    printf("== PARABENS! Acertou na senha secreta em %d jogadas! ==\n", jogadas);
    return 0;
}

