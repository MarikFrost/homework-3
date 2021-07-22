#include <unistd.h>
#include <stdio.h>
#include <string.h>

char * lib_strcpy( char * null_string, char * string) {                                    
  int i = 0;
  while (string[i])                            
    {
      null_string[i] = string[i];                               
      i++;                                                 
    }
  return null_string;
}



int main() {
  char * a = "Hello word";
  char b['0'];
  
  char *old = strcpy(b, a);         //функция strcpy
  printf("Вывод функции strcpy\n");
  printf("%s\n", old);

  char *new = lib_strcpy (b, a);     //функция lib_strcpy
  printf("\nВывод функции lib_strcpy:\n%s\n", new);

  if (old == new) {                   // сравнение результатов двух функций
    printf("\nСравнение strcpy и lib_strcpy прошло успешно\n");
  } else {
    printf("Сравнение закончилось ошибкой");
  }

  return 0;
}