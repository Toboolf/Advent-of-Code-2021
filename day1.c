#include<stdio.h>

int validateNumber(int n1, int n2) {
  return n2 > n1 ? 1 : 0;
}

void showNumbers(int* list, int size) {
  printf("%i", list[0]);
  int result=0;
  for(int i = 0; i < size-1; i++) {
    printf("%i\n", list[i]);
    result += validateNumber(list[i], list[i+1]);

  }
  printf("%i\n",result);
}

int main() {
  int numbers[10] = {
    199,200,208,210,200,207,240,269,260,263
  };
  char strings[3][3] = {"199","200","208"};
  showNumbers(numbers, 10);
  return 0;
}
