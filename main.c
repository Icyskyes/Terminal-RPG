#include "Structs.h"
#include "Terminal.h"
#include "Create.h"

int main(){
    place* current = placeCreate();

    while(1){
        placePrint(current);
        current = placeSwitch(current);
    }
    return 0;
}