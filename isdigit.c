#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isdigit (int symbol){
    if (symbol > 47 && symbol < 58) {
        return 1;
    } else {
        return 0;
    }
}


void compare (int symbol){
    if (isdigit(symbol) && lib_isdigit(symbol)) {
        printf("Результат функций одинаковый, символ является десятичной цифрой\n");
    } else if (isdigit(symbol) == 0 && lib_isdigit(symbol) == 0) {
       printf("Результат функций одинаковый, символ не является десятичной цифрой\n");
    } else {
         printf("Error\n");
    }
}


int main() {
    char c = '5';
    compare(c);

    return 0;
}