#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Написаная функция lib_strcpy*/
char * lib_strcpy(char * str, const char * str1){
    int i = 0;
    while (str1[i]) {
       str[i] = str1[i];
        i++;
    } 
    return str;
}




int main(){
    char * strOne = "Hello word";                           
    char * new_string = malloc(strlen(strOne) +1);   
    printf("Результат первый!\n Функция lib_strcpy: %s\n\n", lib_strcpy(new_string, strOne));
    free(new_string);
    
    char * strTwo = "Hello, with that spelling, was used in publications in the US as early as the 18 October 1826 edition of the Norwich Courier of Norwich, Connecticut.";                           
    new_string = malloc(strlen(strTwo) + 1);   
    printf("Результат второй!\n Функция lib_strcpy: %s\n\n", lib_strcpy(new_string, strTwo));
    free(new_string);


    char * strThree = "******33333********";                           
    new_string = malloc(strlen(strThree) + 1);   
    printf("Результат третий!\n Функция lib_strcpy: %s\n\n", lib_strcpy(new_string, strThree));
    free(new_string);

    
  return 0;
  
}