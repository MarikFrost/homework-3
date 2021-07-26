#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void string_to_lower (char * string){  //первод строки в верхний регистр с помощью стандартной функции toupper
    int i = 0;
    char * b = malloc(strlen(string));
    while (string[i]){
        b[i] = tolower(string[i]);
        i++;
    }
    printf("Первод строки %s", string);
    printf("в нижний регистр с помощью стандартной функции tolower.\n");
    printf("Результат: %s\n\n", b);
    free (b);
}



void my_string_to_lower (char * string){  // перевод строки в верхний регистр без помощи стандартных функций
    int i = 0;
    char * b = malloc(strlen(string));
    while(string[i]) {
        if(string[i] > 64 && string[i] < 91) {
            b[i] = string[i] + 32;
        } else {
            b[i] = string[i];
        }    
        i++;
    }
    b[i] = '\0';
    printf("Первод строки %s", string);
    printf("в нижний регистр без помощи стандартных функций.\n");
    printf("Результат: %s\n", b);
    free(b);
}


int main() {
    char * string = "Kemel keYS";

    string_to_lower(string);
    my_string_to_lower(string);
    return 0;
}

