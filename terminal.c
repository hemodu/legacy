#include <stdio.h>
#include <unistd.h>
#include <string.h>

void clearScreen()
{
        const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12 );
}


int main(){

    char cmd[20];

    clearScreen();
    
    while(1){

        scanf("%s", cmd);
        printf("Escrito: %s\n", cmd);        
        printf("Código ASCII Caracter:  %c %c %c %c %c %c %c %c %c %c\n", cmd[0], cmd[1], cmd[2], cmd[3], cmd[4], cmd[5], cmd[6], cmd[7], cmd[8], cmd[9]);
        printf("Código ASCII Decimal:  %d %d %d %d %d %d %d %d %d %d\n", cmd[0], cmd[1], cmd[2], cmd[3], cmd[4], cmd[5], cmd[6], cmd[7], cmd[8], cmd[9]);
        printf("Código ASCII Hexadecimal:  %X %X %X %X %X %X %X %X %X %X\n", cmd[0], cmd[1], cmd[2], cmd[3], cmd[4], cmd[5], cmd[6], cmd[7], cmd[8], cmd[9]);
        printf("Código ASCII Octal:  %o %o %o %o %o %o %o %o %o %o\n", cmd[0], cmd[1], cmd[2], cmd[3], cmd[4], cmd[5], cmd[6], cmd[7], cmd[8], cmd[9]);

        if(strcmp(cmd,"clear")==0){
            clearScreen();
        }

    }




}