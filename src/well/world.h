#ifndef WELL_WORLD_H
#define WELL_WORLD_H

#include <uuid/uuid.h>

struct well_world {
    uuid_t uuid;
};

    #if defined(WELL_WORLD_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define world well_world

    #endif

#endif
