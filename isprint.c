#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isprint(int symbol){
   if(symbol > 31 && symbol < 127){
        return 1;
    } else {   
        return 0;
    }
}


void compare (int symbol){
    if (isprint(symbol) > 0 && lib_isprint(symbol) > 0){
        printf("Результат функций одинаковый!!!\n");
        printf("Символ является печатным в таблице ASCII\n");
    }
    else if (isprint(symbol) == 0 && lib_isprint(symbol) == 0){
        printf("Результат функций одинаковый!!!\n");
        printf("Символ не является печатным в таблице ASCII\n");
    } else {
        printf("Ошибка, результат отличается\n");
    }
}


int main() {
    char symbol = '\0';
    compare(symbol);
    return 0;
}