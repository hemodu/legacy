#include <stdio.h>
#include <math.h>

                         // Este programa Lê um arquivo de entrada com a posicao de coisas em referencial polar e deve gerar um arquivo de saida em referencial cartesiano.

#define ARQ_IN "base_in.txt" //nome do arquivo de entrada
#define ARQ_OUT "base_out.txt" //nome do arquivo de saida

double converte(int angulo)
{
    return angulo * M_PI / 180;
}

int main()
{

    FILE *arquivo_in, *arquivo_out;

    char linha, nome[50];
    int modulo, ang_grau;
    double x, y;
    int count;

    arquivo_in = fopen(ARQ_IN,"r");
    arquivo_out = fopen(ARQ_OUT,"w");

    if( arquivo_in == NULL || arquivo_out == NULL)
    {
        printf("\n Arquivo %s ou %s não pode ser abertos \n\n", ARQ_IN, ARQ_OUT);
        return -1;
    }
    else
    {
        count=0;
        linha = fscanf(arquivo_in,"%s %d %d", nome, &modulo, &ang_grau);
        while(linha != EOF)
        {
            //printf("90 em rad= %lf\n", sin(converte(90)));
            count++;//count=count+1
            printf("%s %d %d\n",nome, modulo,ang_grau);
            x = modulo * cos(converte(ang_grau));
            y = modulo * sin(converte(ang_grau));

            fprintf(arquivo_out, "%s %lf %lf\n", nome, x, y);
            linha = fscanf(arquivo_in,"%s %d %d", nome, &modulo, &ang_grau);
        }

        printf("Foram convertidos %d registros\n\n", count);

        fclose(arquivo_in);
        fclose(arquivo_out);
    }

    

}
