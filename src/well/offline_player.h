#ifndef WELL_OFFLINE_PLAYER_H
#define WELL_OFFLINE_PLAYER_H

#include <uuid/uuid.h>

struct well_offline_player {
    uuid_t uuid;
};

    #ifdef WELL_OFFLINE_PLAYER_SHORT_NAMES || WELL_SHORT_NAMES

        #define offline_player well_offline_player

    #endif

#endif
