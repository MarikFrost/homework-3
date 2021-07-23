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

void compare(char * lib_string, char * string) {
    if (strlen(string) == lib_strlen(lib_string)){
        printf ("Функции одинаковые\n");
    }else {
        printf("Ошибка\n");
    }
}



int main() {
    char * lib_string = "Hello word";
    char * string = "Hello word";
    compare(lib_string, string);
    return 0;
}