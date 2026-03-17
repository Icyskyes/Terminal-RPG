//Base of the project
#include <stdio.h>

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
