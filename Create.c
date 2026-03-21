#include "Create.h"

place* placeCreate(){
    place* forest = placeBuild("forest");
    place* village = placeBuild("village");

    placeUnite(village, forest);

    return village;
}

event** eventCreate(){

}
