#include "Structs.h"
#include <stdlib.h>
#include <string.h>

place* placeBuild(char* name){
    place* p = (place *)malloc(sizeof(place) + strlen(name) + 1);
    p->paths = malloc(sizeof(place*)*5);
    strcpy(p->name, name);
    p->nameLength = strlen(name);
    p->children = 0;

    return p;

}

void placeUnite(place* parent, place* child){
    parent->paths[parent->children] = child;
    parent->children++;
}

