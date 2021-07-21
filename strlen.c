#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t lib_strlen(char *count_string) {
    int i = 0;
    while (count_string[i]) {
        i++;
    }
    return i;
}


int main() {
    char *string = "Hello word";
    printf("Длина строки через strlen: %ld\n", strlen(string));


    printf("\nДлина строки через lib_strlen: %ld\n", lib_strlen(string));


    if(strlen(string) == lib_strlen(string)){
        printf("\nРезультат функции strlen и lib_strlen идентичен\n");
    }else {
        printf("\nРезультат функций отличается\n");
    }


    return 0;
}