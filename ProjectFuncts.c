/** pex3functs.c
* ===========================================================
 * Name: Preston Semenuk, 28 Oct 20
 * Section: T6
 * Project: Pex 3
 * Documentation: In line
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "ProjectFuncts.h"

/* int modDownload(char fileName[], Weapon* weaponStruct){
    int numLines = 1;
    FILE *in = fopen(fileName, "r");
    if (in == NULL) {
        printf("No package found\n");
    }

    else{
        fscanf(in, "%s %d %d", weaponStruct->name, &weaponStruct->damage, &weaponStruct->defense);
        printf("%s\n", weaponStruct->name);
        printf("%d\n", weaponStruct->damage);
        printf("%d\n", weaponStruct->defense);
    }

    fclose(in);

    return -10;
}*/

char displayOptions(int state, int location){
    //State == 0 means walking
    //State == 1 means battling
    char action;
    if (state == 0){
        if (location >= 21){ //Top
            if (location % 5 == 0){ //Top, Right most side
                printf("Enter a direction (S/W): ");
                scanf("%c", &action);
            }
            else if (location % 5 == 1){ //Top, Left most side
                printf("Enter a direction (E/S): ");
                scanf("%c", &action);
            }
            else{
                printf("Enter a direction (E/S/W): "); //Top middle 3
                scanf("%c", &action);
            }
        }
        else if (location <= 5){ //Bottom
            if (location % 5 == 0){ //Bottom, Right most side
                printf("Enter a direction (N/W): ");
                scanf("%c", &action);
            }
            else if (location % 5 == 1){ //Bottom, Left most side
                printf("Enter a direction (N/E): ");
                scanf("%c", &action);
            }
            else{
                printf("Enter a direction (N/E/W): "); //Bottom middle 3
                scanf("%c", &action);
            }
        }
        else { //middle 3 rows
            if (location % 5 == 0){ //Middle, Right most side
                printf("Enter a direction (N/S/W): ");
                scanf("%c", &action);
            }
            else if (location % 5 == 1){ //Middle, Left most side
                printf("Enter a direction (N/E/S): ");
                scanf("%c", &action);
            }
            else{
                printf("Enter a direction (N/E/S/W): "); //Bottom middle 3
                scanf("%c", &action);
            }
        }
    }

    if (state == 1){
        printf("(B)attle or (F)lee: ");
        scanf("%c", &action);
    }

    return action;
}