#include<stdio.h>
#include <stdlib.h>

// char[] readFile()

int intToChar(char* stringNumber) {
  return atoi(stringNumber);
}

int validateNumber(int n1, int n2) {
  return n2 > n1 ? 1 : 0;
}

void showNumbers(int* list, int size) {
  int result=0;
  for(int i = 0; i < size-1; i++) {
    result += validateNumber(list[i], list[i+1]);
  }
  printf("%i\n",result);
}

int main() {
  FILE* input_file = fopen("input.txt", "r");
  if(!input_file)
    exit(EXIT_FAILURE);

  char *contents = NULL;
  size_t len = 0;
  int lines = 0;
  int*  numbers=(int*) malloc(sizeof(int)*1);
  while(getline(&contents, &len, input_file) != -1) {
    numbers[lines++] = atoi(contents);
    numbers = realloc(numbers, sizeof(int)*lines);
    printf("%s\n", contents);
  }
  showNumbers(numbers, lines);
  return 0;
}
