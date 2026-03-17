#include "Terminal.h"
#include <stdio.h>
#include <stdlib.h>

int read_int() {
    char buffer[100];

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return 0;
    }

    char *endptr;
    int value = strtol(buffer, &endptr, 10);

    // Optional validation
    if (endptr == buffer) {
        printf("Invalid number.\n");
    }

    return value;
}

char read_char() {
    char buffer[100];

    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        return '\0';
    }

    return buffer[0]; // first character only
}

//place assumed to have children
void placePrint(place* p){
    printf("You are currently in a %s\nWhere do you wish to go to?\n", p->name);

    for (int i=0; i<p->children; i++){
        printf("[%d]The %s?", (i+1), p->paths[i]->name);
    }

}

place* placeSwitch(place* p){
    char confirm = '0';
    int path;

    while (confirm != 'y' && confirm != 'Y'){
        path = read_int();

        if (path > p->children && path > 0){
            printf("invalid number\n");
            continue;
        }

        printf("Are you sure?[y/n]\n");
        confirm = read_char();
        
    }

    return p->paths[path - 1];
    
}