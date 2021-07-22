#include <unistd.h>
#include <stdio.h>
#include <string.h>



char *lib_strcat(char *first, const char *second) {
    int i = 0;
    int b = 0;
      while (second[i]){
        while(first[b]){
          b++;
        }
        first[b] = second[i];
        i++;   
    }
    return first;
}



int main() {
    char str[1024] = "Hello word";
    char str1[1024] = "And you hello";


   /*printf("Функция lib_strcat выводит значение: %s\n", lib_strcat(str, str1));
   printf("Функция strcat выводит значение: %s\n", strcat (str, str1));*/
  // Не могу понять, почему по отдельности каждая функция работает правильно. Но когда запускаешь вместе результат не одинаковый


  
    

   if (strcat (str, str1) == lib_strcat(str, str1)) {
      printf("Сравнение успешно\n");
    } else {
      printf("ошибка\n");
    }




  return 0;
}