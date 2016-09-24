#ifndef WELL_LOCATION_H
#define WELL_LOCATION_H

struct well_location {
    int x;
    int y;
    int z;
};

    #if defined(WELL_LOCATION_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define location well_location

    #endif

#endif
