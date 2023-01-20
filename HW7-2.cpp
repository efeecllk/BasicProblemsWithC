#include <stdio.h>

int main() {
  FILE *file = fopen("Sample.txt", "r");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }
  int rows = 0,words = 0,special = 0;
  int lowercase = 0,uppercase = 0,x=0;
  while ((x = fgetc(file)) != EOF/*End Of File*/) {
    if (x == '\n') {
      rows++;
    }
    if (x == ' ' || x == '\n') {
      words++;
    }
    if (x >= 'a' && x <= 'z') {
      lowercase++;
    }
    if (x >= 'A' && x <= 'Z') {
      uppercase++;
    }
    if (!(x >= 'a' && x <= 'z') && !(x >= 'A' && x<= 'Z') && !(x>= '0' && x<= '9')) {
      special++;
    }
  }
  fclose(file);
  printf("The number of rows: %d\n", rows + 1);  
  printf("The number of words: %d\n", words + 1); 
  printf("The number of lowercase letters: %d\n", lowercase);
  printf("The number of uppercase letters: %d\n", uppercase);
  printf("The number of special characters: %d\n", special);
  return 0;
}

