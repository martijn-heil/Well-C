#ifndef WELL_WORLD_H
#define WELL_WORLD_H

#include <uuid/uuid.h>

struct well_world {
    uuid_t uuid;
};

    #ifdef WELL_WORLD_SHORT_NAMES || WELL_SHORT_NAMES

        #define world well_world

    #endif

#endif
