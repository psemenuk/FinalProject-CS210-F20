/** pex3main.c
* ===========================================================
 * Name: Preston Semenuk, 28 Oct 20
 * Section: T6
 * Project: Pex 3
 * Documentation: Piper Gray helped me on understanding how the functions work together and some syntax errors on my part. 
 * Where she helped, I have documented in line
* ===========================================================
*/

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "ProjectFuncts.h"


int main() {

    printf("Hello World\n");
    //Weapon* weaponStruct;
    //modDownload("thisIsNotAFileName", weaponStruct);
    //modDownload("Jungle.txt", weaponStruct);
    //printf("%s", weaponStruct->name);
    printf("%c\n", displayOptions(0, 25));

    system("pause");
    return 0;
}