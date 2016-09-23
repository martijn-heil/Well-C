#ifndef WELL_LOCATION_H
#define WELL_LOCATION_H

struct well_location {
    int x;
    int y;
    int z;
};

    #ifdef WELL_LOCATION_SHORT_NAMES || WELL_SHORT NAMES

        #define location well_location

    #endif

#endif
