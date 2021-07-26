#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isascii (int symbol){
   if(symbol > 0 && symbol < 177){
        return 1;
    } else {
        return 0;
    }
}


void compare (int symbol){
    if (isascii(symbol) && lib_isascii(symbol)) {
        printf("Результат функций одинаковый, символ в таблице ascii\n");
    } else if (isascii(symbol) == 0 && lib_isascii(symbol) == 0){
        printf("Результат функций одинаковый, символ не находится в диапазоне ascii\n");
    } else {
        printf("Error\n");
    }
}


int main() {
    char symbol = '*';
    compare(symbol);
    return 0;
}