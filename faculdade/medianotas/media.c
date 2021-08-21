#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define ARQ_IN1 "notas_icca.txt" //nome do arquivo de entrada
#define ARQ_OUT1 "medias_icca.txt" //nome do arquivo de saida
#define ARQ_IN2 "notas_gaal.txt" //nome do arquivo de entrada
#define ARQ_OUT2 "medias_gaal.txt" //nome do arquivo de saida

int main ()
{
    int materia;
    char linha, nome[50];
    float media, nota1, nota2, nota3, nota4;

    printf("Digite '1' para  inserir as notas de Introducao a Computacao ou '2' para inserir as notas de Introducao a Geometria:\n");
    scanf("%d", &materia);
    printf("A materia escolhida foi: %d\n", materia);

    if (materia == 1)
    {
    
    FILE *arquivo_in, *arquivo_out;
    
    arquivo_in = fopen(ARQ_IN1,"r");
    arquivo_out = fopen(ARQ_OUT1,"w");

        if( arquivo_in == NULL || arquivo_out == NULL)
            {
            printf("\n Arquivo %s ou %s não pode ser abertos \n\n", ARQ_IN1, ARQ_OUT1);
            return -1;
            }
        else
        {            
            linha = fscanf(arquivo_in,"%s %f %f %f %f", nome, &nota1, &nota2, &nota3, &nota4);
            while(linha != EOF)
            {
                printf("%s %.2f %.2f %.2f %.2f\n",nome, nota1, nota2, nota3, nota4);
                media = (nota1 + nota2 + nota3 +nota4);

                fprintf(arquivo_out, "%s %.2f\n", nome, media);
                linha = fscanf(arquivo_in,"%s %f %f %f %f", nome, &nota1, &nota2, &nota3, &nota4);
            }
        
            fclose(arquivo_in);
            fclose(arquivo_out);
        }

    }

    else if (materia == 2)
    {
        
    FILE *arquivo_in, *arquivo_out;
    
    arquivo_in = fopen(ARQ_IN2,"r");
    arquivo_out = fopen(ARQ_OUT2,"w");

        if( arquivo_in == NULL || arquivo_out == NULL)
            {
            printf("\n Arquivo %s ou %s não pode ser abertos \n\n", ARQ_IN2, ARQ_OUT2);
            return -1;
            }
        else
        {            
            linha = fscanf(arquivo_in,"%s %f %f %f %f", nome, &nota1, &nota2, &nota3, &nota4);
            while(linha != EOF)
            {
                printf("%s %.2f %.2f %.2f %.2f\n",nome, nota1, nota2, nota3, nota4);
                media = (nota1 + nota2 + nota3 +nota4);

                fprintf(arquivo_out, "%s %.2f\n", nome, media);
                linha = fscanf(arquivo_in,"%s %f %f %f %f", nome, &nota1, &nota2, &nota3, &nota4);
            }
        
            fclose(arquivo_in);
            fclose(arquivo_out);
        }

    }
}
   