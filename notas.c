#include <stdio.h>

int main()
{
    float ae, tps, asae, pe, np, pf, mf;
    
    printf("Insira a nota da avaliacao escrita:\n");
    scanf("%f", &ae);
    printf("Insira a nota dos trabalhos praticos:\n");
    scanf("%f", &tps);
    printf("Insira a nota de atividades em sala de aula, extraclasse:\n");
    scanf("%f", &asae);
    printf("Insira a pontuacao extra:\n");
    scanf("%f", &pe);

    np = (ae + tps + asae + pe);

    printf("A Nota Parcial e: %f\n", np);

    if (np>=60)
        printf("ALUNO APROVADO\n");
    else   
        printf("ALUNO NAO APROVADO\n");
        
        printf("Insira a nota da prova final:\n");        
        scanf("%f", &pf);
        mf = ((np+pf)/2);        
        
        printf("A media final do aluno e: %f\n", mf);


}