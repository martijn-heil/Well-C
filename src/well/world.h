#ifndef WELL_WORLD_H
#define WELL_WORLD_H

#include <uuid/uuid.h>

typedef struct well_world well_world;

    #if defined(WELL_WORLD_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define world well_world

    #endif

#endif
