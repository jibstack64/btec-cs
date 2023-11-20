#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv) {

  if (argc < 2) {
    printf("Please provide numbers to sort.\n");
    return 1;
  }

  int count = argc - 1;
  int numbers[count];
  for (int i = 0; i < count; i++) {
    numbers[i] = atoi(argv[i + 1]);
  }

  bool swapped = true;
  while (swapped) {
    swapped = false;
    for (int i = 1; i < count; i++) {
      if (numbers[i - 1] > numbers[i]) {
        int temp = numbers[i - 1];
        numbers[i - 1] = numbers[i];
        numbers[i] = temp;

        swapped = true;
      }
    }
    count--;
  }

  printf("Sorted array: ");
  for (int i = 0; i < argc - 1; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}