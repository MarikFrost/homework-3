#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_tolower (int symbol){
   if(symbol > 64 && symbol < 91){
        return symbol + 32;
    } else { //возвращает то значение которое ввели, даже если это не число, так как это делает стандартная функция
        return symbol;
    }
}


void compare (int symbol){
    if (tolower(symbol) == lib_tolower(symbol)) {
        printf("Результат функций одинаковый\n");
    }
    else {
        printf("Ошибка, результат отличается\n");
    }
}


int main() {
    char symbol = '5';

    compare(symbol);
    return 0;
}