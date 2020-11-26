/** pex3main.c
* ===========================================================
 * Name: Preston Semenuk, 28 Oct 20
 * Section: T6
 * Project: Pex 3
 * Documentation: In line
* ===========================================================
*/
#ifndef PEX3_FUNCTS_H
#define PEX3_FUNCTS_H
#define SEQLENGTH 340

// define DNA struct type for later use
typedef struct Weapon_struct {
    char name[20];
    int damage;
    int defense;
} Weapon;

typedef struct User_struct {
    int health;
    char weapon[20];
    int gold;
} User;

typedef struct Monster_struct {
    char name[20];
    int attack;
    int health;
    int location;
} Monster;

int modDownload(char fileName[], Weapon* weaponStruct);

char displayOptions(int state, int location);

#endif //PEX3_FUNCTS_H