#ifndef WELL_LOCATION_H
#define WELL_LOCATION_H

typedef struct well_location well_location;

int well_location_get_x(well_location *self);
int well_location_get_y(well_location *self);
int well_location_get_z(well_location *self);

    #if defined(WELL_LOCATION_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define location        well_location
        #define location_get_x  well_location_get_x
        #define location_get_y  well_location_get_y
        #define location_get_z  well_location_get_z

    #endif

#endif
