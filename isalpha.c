#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int lib_isalpha (int symbol){
   if((symbol > 65 && symbol < 90) || (symbol > 97 && symbol < 122)){
        return 1;
    } else {
        return 0;
    }
}


int compare (int symbol){
    if (isalpha(symbol) && lib_isalpha(symbol)) {
        printf("Результат функций одинаковый, символ является буквой алфавита (верхнего или нижнего регистра\n");
    } else if (isalpha(symbol) == 0 && lib_isalpha(symbol) == 0){
         printf("Результат функций одинаковый, символ не является буквой\n");
    } else {
        printf("Error\n");
    }
}


int main() {
    char symbol = 'l';
    compare(symbol);
}