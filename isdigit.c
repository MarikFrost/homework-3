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


int compare (int symbol){
    if (isdigit(symbol) > 0 && lib_isdigit(symbol) > 0) {
        printf("Результат функций одинаковый\n");
    } else {
        printf("Ошибка, функции работают иначе\n");
    }
}


int main() {
    char c = '5';
    compare(c);

    return 0;
}