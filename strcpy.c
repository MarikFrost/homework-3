#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Написаная функция lib_strcpy, берет строку и копирует ее*/
char * lib_strcpy(char * str, char * str1){
    int i = 0;
    while (str1[i]) {
       str[i] = str1[i];
        i++;
    } 
    return str;
}



 /*Функция сравнивает выполнение lib_strcpy и strpcy */
int compare (char * new_string, char * old_string, char * string){
    int i = 0;
    char * a = strcpy(new_string, string);
    char * b = lib_strcpy(old_string, string);
    while (a[i]){
        if (a[i] != b[i]) {
            printf("Ошибка\n");
            return 0;
        }
        i++;
    }
    printf("Функции одинаковые\n");
}



int main(){
    char * string = "Hello word";                           //строка
    char *strcpy_string = malloc(sizeof(int));              // память под strcpy
    char *Lib_strcpy_string = malloc(sizeof(int));          // память под lib_strcpy

    compare(strcpy_string, Lib_strcpy_string, string);     // Вызываем функцию стравнивания

    free(strcpy_string);     //освобождаем память
    free(Lib_strcpy_string);  // освобождаем память
  return 0;
}