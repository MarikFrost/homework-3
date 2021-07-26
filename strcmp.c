#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Написаная функция lib_strcmp, берет строку и копирует ее*/
int lib_strcmp(char * str, char * str1){
    int i = 0;
    int result;
    while (str[i] || str1[i])
    {
      if (str[i] > str1[i]){
        return result = 100;
      } else if (str[i] < str1[i]) {
        return result = -100;
      }
      i++;
    }
    return result = 0;
}


 /*Функция сравнивает выполнение lib_strcmp и strcmp */
void compare (char * new_string, char * old_string){
  if (lib_strcmp(new_string, old_string) > 0 && strcmp(new_string,old_string) > 0) {
    printf ("Символ первой строки больше, функции работают одинаково!!!\n");
  } else if (lib_strcmp(new_string, old_string) < 0 && strcmp(new_string,old_string) < 0){
    printf ("Символ второй строки больше, функции работают одинаково!!!\n");
  } else if (lib_strcmp(new_string, old_string) == 0 && strcmp(new_string,old_string) == 0){
    printf ("Строки идентичны, функции работают одинаково!!!\n");
  } else {
    printf("Error!!!\n");
  }
}


int main(){
  char * first_string = "Hello word";
  char * second_string = "Hello word";

  compare(first_string, second_string);
  return 0;
}