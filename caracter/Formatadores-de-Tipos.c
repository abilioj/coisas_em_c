#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Formatadores de Tipos

    /*
    Formato Tipo da variável conversão realizada
        %c Caracteres char, short int, int, long int
        %d Inteiros int, short int, long int
        %e Ponto flutuante, notação científica float, double
        %f Ponto flutuante, notação decimal float, double
        %lf Ponto flutuante, notação decimal double
        %g O mais curto de %e ou %f float, double
        %o Saída em octal int, short int, long int, char
        %s String char *, char []
        %u Inteiro sem sinal unsigned int, unsigned short
        int, unsigned long int
        %x Saída em hexadecimal (0 a f) int, short int, long int, char
        %X Saída em hexadecimal (0 a F) int, short int, long int, char
        %ld Saída em decimal longo Usado quando long int e int  possuem tamanhos diferentes
    */

    printf("|%8.6d|\n", 820);
    printf("|%8.4d|\n", 820);
    printf("|%9d|\n", 820);
    printf("|%.8d|\n", 820);
    printf("|%08d|\n", 8200);
    printf("|%2.2f|\n", 1223.4432);
    printf("|%10.2|f\n", 1223.4432);
    printf("|%20f|\n", 1223.4432);
    printf("|%.2f|\n", 1223.4432);
    printf("|%10s|\n", "abcdefghijklmnopqrstuvxywz");
    printf("|%10.10s|\n", "abcdefghijklmnopqrstuvxywz");
    printf("|%10s|\n", "abcde");
}