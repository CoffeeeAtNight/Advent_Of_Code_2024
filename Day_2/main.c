#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  FILE* inputFp;
  
  int safeCounter = 0;
  char currLine[26] = "";
  int i = 0;

  // Read file into buffer
  inputFp = fopen("../aoc-2.txt", "r");

  

  for (;;) {
    int ch = fgetc(inputFp);
    sprintf(currLine,"%c", ch);
    printf("Current report: %s\n", currLine);
   
    
    i++;
    if (ch == '\n') {
      int firstNum = currLine[0] // TODO
      i = 0; 
      memset(currLine, ' ', 26); 
    } 
    if (ch == EOF) break;
  }


  fclose(inputFp);
  printf("Safe reports: %d\n", safeCounter);
  return EXIT_SUCCESS;
}
