#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if( access( "C:\\PE-1.txt", F_OK ) != -1 ) {
    // file exists
    if (containsLine() == 1) {
      int character;
      FILE *fp;
      fp = fopen("C:\\PE-1.txt", "r");
      if (fp) {
        while ((character = getc(fp)) != EOF) {
          putchar(character);
        }
        fclose(fp);
      }
    }
    else {
      FILE *fp;
      fp = fopen("C:\\PE-1.txt", "a");
      fprintf(fp, "\nI want to learn PE File Format!\n");
      fclose(fp);
    }
  }
  else {
    // file doesn't exist
    FILE *fp;

    fp = fopen("C:\\PE-1.txt", "w+");
    fprintf(fp, "I want to learn PE File Format!\n");
    fclose(fp);
  }
  return 0;
}

int containsLine() {
  char str[1000];
  FILE *fp;
  fp = fopen("C:\\PE-1.txt", "r");
  while (fgets(str, 1000, fp) != NULL) {
      if (strcmp(str, "I want to learn PE file format!\n") == 0) {
        return 1;
      }
  }
  fclose(fp);
  return 0;
}
