#ifndef WELL_PLAYER_H
#define WELL_PLAYER_H

#include <stdbool.h>
#include <sys/socket.h>
#include <uuid/uuid.h>
#include "well/location.h"

struct well_player {
    uuid_t uuid;
};

// Player methods.
struct sockaddr        *well_player_get_address             (struct well_player *self);
struct well_location   *well_player_get_bed_spawn_location  (struct well_player *self);
void                    well_player_set_bed_spawn_location  (struct well_player *self);
bool                    well_player_get_allow_flight        (struct well_player *self);
void                    well_player_set_allow_flight        (struct well_player *self, bool value);
float                   well_player_get_fly_speed           (struct well_player *self);
void                    well_player_set_fly_speed           (struct well_player *self, float value);
float                   well_player_get_walk_speed          (struct well_player *self);
void                    well_player_set_walk_speed          (struct well_player *self, float value);
struct well_location   *well_player_get_compass_direction   (struct well_player *self);
void                    well_player_set_compass_direction   (struct well_player *self, struct well_location *to);
bool                    well_player_is_sneaking             (struct well_player *self);
void                    well_player_set_sneaking            (struct well_player *self, bool value);
bool                    well_player_is_sprinting            (struct well_player *self);
void                    well_player_set_sprinting           (struct well_player *self, bool value);
bool                    well_player_can_see                 (struct well_player *self, struct well_player *other);
void                    well_player_do_chat                 (struct well_player *self, char *msg);
void                    well_player_hide_player             (struct well_player *self, struct well_player *other);
void                    well_player_show_player             (struct well_player *self, struct well_player *other);
void                    well_player_hide_from               (struct well_player *self, struct well_player *other);
void                    well_player_show_for                (struct well_player *self, struct well_player *other);
void                    well_player_update_inventory        (struct well_player *self);
void                    well_player_request_resource_pack   (struct well_player *self, char *url);



    #if defined(WELL_PLAYER_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        // structs
        #define player well_player

        // functions
        #define player_get_bed_spawn_location       well_player_get_bed_spawn_location
        #define player_set_bed_spawn_location       well_player_set_bed_spawn_location
        #define player_get_allow_flight             well_player_get_allow_flight
        #define player_set_allow_flight             well_player_set_allow_flight
        #define player_get_fly_speed                well_player_get_fly_speed
        #define player_set_fly_speed                well_player_set_fly_speed
        #define player_get_walk_speed               well_player_get_walk_speed
        #define player_set_walk_speed               well_player_set_walk_speed
        #define player_get_compass_direction        well_player_get_compass_direction
        #define player_set_compass_direction        well_player_set_compass_direction
        #define player_is_sneaking                  well_player_is_sneaking
        #define player_set_sneaking                 well_player_set_sneaking
        #define player_is_sprinting                 well_player_is_sprinting
        #define player_set_sprinting                well_player_set_sprinting
        #define player_can_see                      well_player_can_see
        #define player_do_chat                      well_player_do_chat
        #define player_hide_player                  well_player_hide_player
        #define player_show_player                  well_player_show_player
        #define player_hide_from                    well_player_hide_from
        #define player_show_for                     well_player_show_for
        #define player_update_inventory             well_player_update_inventory
        #define player_request_resource_pack        well_player_request_resource_pack

    #endif

#endif
