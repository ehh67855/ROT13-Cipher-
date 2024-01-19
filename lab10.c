#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
  Takes in a string as the input and outputs its corespinding ROT13 value to
  standard output. Uppercase and lowercase letters increase of decrease by 13 depending
  on their position in the alphebet. Non-letters are not changed.
 */
void convert(char c[]);
/*
  Takes in the command line arguments as an input and passes the second argument
  into the convert function.
 */
int main(int argc, char * argv[]) {
    convert(argv[1]);
}

void convert(char c[]) {
    for (int i = 0 ; i < strlen(c) ; i++) {
        bool letter = false;
        if (c[i] >= 'a' && c[i] <= 'z') { //lowercase letter
            letter = true;
            if (c[i] + 13 > 'z') {
                printf("%c", c[i] - 13);
            } else {
                printf("%c", c[i] + 13);
            }
        }
        if (c[i] >= 'A' && c[i] <= 'Z') { //uppercase letter
            letter = true;
            if (c[i] + 13 > 'Z') {
                printf("%c", c[i] - 13);
            } else {
                printf("%c", c[i] + 13);
            }
        }
        if (!letter) { //else
            printf("%c", c[i]);
        }
    }
    printf("\n");
}
