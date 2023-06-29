/* source file for ptr11c15
 *
 * Use pointers to find the lenth of a string.
 *
 * Example program from Kochan, Stephen, "Programming in C 3rd ed."
 *
*/

/* includes */

#include <stdio.h>


/* defines */



/* function declarations */

int stringLength(const char *string);


/* main */


int main(int argc, char *argv[]){
    printf("%i ", stringLength("string length test"));
    printf("%i ", stringLength(""));
    printf("%i \n", stringLength("complete"));

    return(0);
}


/* function definitions */

int stringLength(const char *string){
    const char *cptr = string;

    while(*cptr)
        ++cptr;

    return(cptr - string);              /* cptr - string */
}



