#include "stdio.h"

#define BUFF_SIZE 40                  // size of inputStr
#define STOP_FLAG ':'                 // flag for condition

// simple tests here
#define TEST1 "qwe:qwe:qwe:wqe:"
#define TEST2 ":: sdL : sa : ::"
#define TEST3 "normal:test:here:yea"

/**********************************************************
* simple doubler for symbols between flag-character (ones)
*
* @param size       size of input string
* @param inputStr   input string
* @param flag       flag-character
**********************************************************/

void formatString (unsigned int size, unsigned char inputStr[size], unsigned char flag);

int main()
{
  formatString(BUFF_SIZE, TEST1, STOP_FLAG);
  formatString(BUFF_SIZE, TEST2, STOP_FLAG);
  formatString(BUFF_SIZE, TEST3, STOP_FLAG);
}

void formatString (unsigned int size, unsigned char inputStr[size], unsigned char flag)
{
  unsigned int  inputIter = 0;
  unsigned char outputStr[size * 2];
  unsigned int  outputIter = 0;


  while (inputIter < size) {
    outputStr[outputIter] = inputStr[inputIter];

    if (inputStr[inputIter] == flag) {
      inputIter++;
      outputIter++;
      break;
    } 

    inputIter++;
    outputIter++;
  }

  while (inputIter < size) {
    if (inputStr[inputIter] == flag) {
      break;
    }

    outputStr[outputIter] = inputStr[inputIter];
    outputStr[outputIter + 1] = inputStr[inputIter];

    inputIter++;
    outputIter+=2;
  }

  while (inputIter < size) {
    outputStr[outputIter] = inputStr[inputIter];

    inputIter++;
    outputIter++;
  }
  printf("Input:\n\t%s\n", inputStr);
  printf("Result:\n\t%s\n\n", outputStr);
}

// qwe:qwe:qwe:wqe:
