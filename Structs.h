//Base of the project
#include <stdio.h>

typedef struct attack{
    int flag;

    int base_power;
    float accuracy;

    char name[];
} attack;

typedef struct armour{
    int flag;

    int defence;
    int health;

    char name[];
} armour;

typedef struct weapon{
    int flag;

    int power;
    int special;

    char name[];

} weapon;

typedef struct entity{
    int level;
    int health;
    int maxhealth;
    int strength;
    int magic;
    int defence;
    int speed;

    int weapon;
    int armour;
    int status;
    
    int moves[4];
} entity;

typedef struct event{
    int flag;
    int textLength;
    int followUps[4];
    char text[];

} event;

typedef struct place{
    int nameLength;
    struct place **paths;
    int children;
    int events[5];
    char name[];
} place;




place* placeBuild(char* name);

void placeUnite(place* parent, place* child);

event* eventBuild();
