#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *lib_strdup (char *first_string, char * second_string){
    second_string = malloc(strlen(first_string) + 1);
    int i = 0;
    while (first_string[i]) {
      second_string[i] = first_string[i];
      i++;
    }
    return second_string;
    free(second_string);
}

int compare (char * first_string, char * second_string){
    int i = 0;
    char * first_result = lib_strdup(first_string, second_string);
    char * second_result = strdup(first_string);
    while (first_result[i] || second_result[i]){
        if (first_result[i] != second_result[i]) {
            printf("Ошибка, результат отличается\n");
            return 0;
        }
        i++; 
    }
  printf("Результат одинаковый");
}


int main() {
  char *first_string = "Hello word";
  char *second_string;
//  printf("%s\n", lib_strdup(first_string, second_string));
compare(first_string, second_string);
  return 0;
}