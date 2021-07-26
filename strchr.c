#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int lib_strchr (char *first_string, int symbol){
    int i = 0;
    while (first_string[i]){
        if(symbol == first_string[i]) {
            return i+1;
        } else if (symbol == '\0'){
            i = (strlen(first_string) + 1);
            return i;
        } 
        i++;
    }
    return 0;
}

int compare (char * first_string, int symbol){
    char * a = strchr(first_string, symbol); // результат функции strchr 
    int c = a - first_string + 1;  // берем порядковый номкр

    int b = lib_strchr(first_string, symbol);
    
    if (b == c) {
        printf("Функции сработали одинаково\n");
    } else {
        printf("Error");
    }

    /* Моя функция выводит 0 в случае если символ отсутствует в строке, стандартная Null
        не знаю как их можно сравнить. 

        Если в своей я выведу Null, то тогда не смогу узнать порядковый номер. 
        Тут не знаю как сделать*/
}


int main() {
  char *first_string = "Hello word, i am glad";
  int symbol = '\0';

  compare(first_string, symbol);

  return 0;
}