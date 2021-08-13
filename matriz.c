#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define ALUNOS 3
#define NOTAS 3 //ajustar pesos_nota

void clearScreen()
{
        const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12 );
}

float calcAverage(float *notas_aluno)
{
    float media=0;
    float pesos_nota[NOTAS];
    int i;

    pesos_nota[0]=0.3;
    pesos_nota[1]=0.3;
    pesos_nota[2]=0.4;

    for(i=0; i<NOTAS; i++)
    {
        media += pesos_nota[i]*notas_aluno[i]; // media = media + pesos_nota[i]*notas_aluno[i]
    }
    return media;

    
}

int main(){
    
    float medias[ALUNOS];
    float notas[ALUNOS][NOTAS]; // matriz float de #ALUNOS linhas e #NOTAS colunas
    int i,j;

    clearScreen();
    
            
        for(i=0; i<ALUNOS; i++)
        {
            printf("Editando as notas do aluno %d\n", i+1);

            for(j=0; j<NOTAS; j++)
            {
                printf("Digite a nota %dª:", j+1);
                scanf("%f", &notas[i][j]);
            }

            medias[i] = calcAverage(notas[i]);
            printf("Média do Aluno %d é %f\n\n", i+1, medias[i]);

        }

        
}