#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct Node {
  struct Node* next;
  int data;
} node_t;

node_t* new_linked_list(int headData)
{
  node_t* head = NULL;
  head = (node_t*)malloc(sizeof(node_t));
  if (head == NULL) return head;
  head->data = headData;
  head->next = NULL;
  return head;
}

node_t* push(node_t* relativeHead, int nodeData)
{
  node_t* node = NULL;
  node = (node_t*)malloc(sizeof(node_t));
  if (node == NULL) return node;
  
  relativeHead->next = node;
  node->data = nodeData;
  node->next = NULL;
  return node;
}

int pop(node_t** head)
{
  int retval = -1;
  node_t* next_node = NULL;
  if (*head == NULL) return -1;
  
  next_node= (*head)->next;
  retval = (*head)->data;
  free(*head);
  *head = next_node;

  return retval;  
}

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
      int firstNum = currLine[0];
      i = 0; 
      memset(currLine, ' ', 26); 
    } 
    if (ch == EOF) break;
  }


  fclose(inputFp);
  printf("Safe reports: %d\n", safeCounter);
  return EXIT_SUCCESS;
}
