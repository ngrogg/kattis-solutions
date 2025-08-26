/* Vidsnuningur
 * My solution to the problem Vidsnuningur
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define maximum length of 1000 based on program constraints
#define MAX_LENGTH 1000

// Function Definition
void runProgram(){
        // Define array
        char inputArray[MAX_LENGTH];

        // Read input and stop at newline
        if (fgets(inputArray, sizeof(inputArray),stdin) != NULL) {
                // Variable to store size of string
                size_t length = strlen(inputArray);

                // Remove newline from inputArray if present
                if (length > 0 && inputArray[length -1] == '\n') {
                        inputArray[length - 1] = '\0';
                        length--;
                }

                // Reverse string
                for (size_t x = 0, y = length -1; x < y; x++, y--) {
                        char tempVar = inputArray[x];
                        inputArray[x] = inputArray[y];
                        inputArray[y] = tempVar;
                }
        }

        // Output reversed string
        printf("%s\n",inputArray);
}

int main(int argc, char *argv[]) {
        runProgram();
        return 0;
}
