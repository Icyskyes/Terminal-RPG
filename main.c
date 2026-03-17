#include "Structs.h"
#include "Terminal.h"

int main(){
    place* current;
    place* forest = placeBuild("forest");
    place* village = placeBuild("village");

    placeUnite(village, forest);

    current = village;

    while(1){
        placePrint(current);
        current = placeSwitch(current);
    }
    return 0;
}