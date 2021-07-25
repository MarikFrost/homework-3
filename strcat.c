#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Написаная функция strcat, берет строку и копирует ее*/
char * lib_strcat(char * string_first, char * string_second){
  char *result = malloc(strlen(string_first) + strlen(string_second) + 1);
  int i = 0;
  while(string_first[i]) {
    result[i] = string_first[i];
    i++;
  }
  int a = 0;
  while(string_second[a]) {
    result[i] = string_second[a];
    a++;
    i++;
  }
  result[i] = '\0';
  return result;
  free(result);
}


 /*Функция сравнивает выполнение lib_strcat и strcat */
int compare (char * first_string, char * second_string){
    int i = 0;
    char * a = malloc(strlen(first_string) + strlen(second_string) + 1);

    strcat(strcpy(a, first_string), second_string);
    char * b = lib_strcat(first_string, second_string);

    while (a[i]){
        if (a[i] != b[i]) {
            printf("Ошибка, результат отличается\n");
            return 0;
        }
        i++;
    }
    printf("Функции одинаковые\n");
    free(a);
}



int main(){
  char * string_first = "Hello word ";
  char * string_second = "And you hello human";   

  compare(string_first,string_second);

  return 0;
}