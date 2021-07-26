#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_toupper (int symbol){
   if(symbol > 96 && symbol < 123){
        return symbol - 32;
    } else {   //возвращает то значение которое ввели, даже если это не буква, так как это делает стандартная функция
        return symbol;
    }
}


void compare (int symbol){
    if (toupper(symbol) == lib_toupper(symbol)) {
        printf("Результат функций одинаковый\n");
    }
    else {
        printf("Ошибка, результат отличается\n");
    }
}


int main() {
    char symbol = 'z';
    compare(symbol);
    return 0;
}