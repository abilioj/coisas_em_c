#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>
#include <string.h>
#include <locale.h>

int main(void)
{
  setlocale(LC_ALL, "");
  printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");
  
  system("pause");
  return 0;
}
