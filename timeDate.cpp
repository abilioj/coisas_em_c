#include <stdio.h>
#include <string.h>
#include <time.h> //necessário para usar localtime() e struct tm

  //ponteiro para struct que armazena data e hora  
  struct tm *data_hora_atual;     
  
  //variável do tipo time_t para armazenar o tempo em segundos  
  time_t segundos;

char * dia_da_semana(int dia){
  switch (dia)
  {
  case 1:
        return "segunda";      
    break;  
  case 2:
        return "terca";    
    break;  
  case 3:
        return "quarta";    
    break;  
  case 4:
        return "quinta";    
    break;  
  case 5:
        return "sexta";    
    break;  
  case 6:
        return "sábado";
    break;  
  case 7:
        return "domingo";
    break; 
  }
}

int main(void)
{
  
  //obtendo o tempo em segundos  
  time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
  data_hora_atual = localtime(&segundos);  
  
  //Acessando dados convertidos para a struct data_hora_atual  
  printf("\nDia..........: %d\n", data_hora_atual->tm_mday);  
  //para retornar o mês corretamente devemos adicionar +1  
  printf("\nMes..........: %d\n", data_hora_atual->tm_mon+1);
  //para retornar o ano corretamente devemos adicionar 1900  
  printf("\nAno..........: %d\n", data_hora_atual->tm_year+1900);  
  printf("\nDia do ano...: %d\n", data_hora_atual->tm_yday);  
  printf("\nDia da semana: %d (%s) \n\n", data_hora_atual->tm_wday, dia_da_semana(data_hora_atual->tm_wday));
    
  /* Obtendo os valores da struct data_hora_atual  
    e formatando a saída de dados no formato 
    hora: minuto: segundo
  */  
  printf("\nHora ........: %d:%d:%d \n\n",data_hora_atual->tm_hour, data_hora_atual->tm_min, data_hora_atual->tm_sec);
  
  /* Obtendo os valores da struct data_hora_atual  
     e formatando a saída de dados no formato dia/mes/ano 
  */  
  //dia do mês
  
  printf("\nData ........: %d/%d/%d \n\n", data_hora_atual->tm_mday, data_hora_atual->tm_mon+1, data_hora_atual->tm_year+1900);

  return 0;
}