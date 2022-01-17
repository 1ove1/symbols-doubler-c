#include "stdio.h"

#define BUFF_SIZE 40                  // size of inputStr
#define STOP_FLAG ':'                 // flag for condition


int main()
{
  unsigned char inputStr[BUFF_SIZE];
  unsigned int  inputIter = 0;
  unsigned char outputStr[BUFF_SIZE * 2];
  unsigned int  outputIter = 0;

  printf("Enter string (max length %d): ", BUFF_SIZE);
  scanf("%s", inputStr);


  while (inputIter < BUFF_SIZE) {
    outputStr[outputIter] = inputStr[inputIter];

    if (inputStr[inputIter] == STOP_FLAG) {
      inputIter++;
      outputIter++;
      break;
    } 

    inputIter++;
    outputIter++;
  }

  while (inputIter < BUFF_SIZE) {
    if (inputStr[inputIter] == STOP_FLAG) {
      break;
    }

    outputStr[outputIter] = inputStr[inputIter];
    outputStr[outputIter + 1] = inputStr[inputIter];

    inputIter++;
    outputIter+=2;
  }

  while (inputIter < BUFF_SIZE) {
    outputStr[outputIter] = inputStr[inputIter];

    inputIter++;
    outputIter++;
  }
  printf("Input:\n\t%s\n", inputStr);
  printf("Result:\n\t%s\n\n", outputStr);
}