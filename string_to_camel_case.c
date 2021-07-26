#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void string_to_camel_case (char * string){  //первод строки kemel keys в строку KeMeL KeYs с помощью стандартной функции toupper
    int i = 0;
    int a = 0;
    char * b = malloc(strlen(string));
    strcpy(b, string);
    while (b[i]){
        b[i] = toupper(b[i]);
        i = i + 2;
    }
    printf("Первод строки %s", string);
    printf("в строку KeMeL KeYs.\n");
    printf("Результат: %s\n\n", b);
    free (b);
}



void my_string_to_lower (char * string){  //первод строки kemel keys в строку KeMeL KeYs без встроеных функций
    int i = 0;
    char * b = malloc(strlen(string));
    strcpy(b, string);
    while (b[i]){
        b[i] = b[i] - 32;
        i = i + 2;
    }
    printf("Первод строки %s", string);
    printf("в строку KeMeL KeYs.\n");
    printf("Результат: %s\n\n", b);
    free (b);
}


int main() {
    char * string = "kemel keys";

    string_to_camel_case(string);
    my_string_to_lower(string);
    return 0;
}