#ifndef WELL_PLAYER_H
#define WELL_PLAYER_H

#include <stdbool.h>
#include <sys/socket.h>
#include <uuid/uuid.h>
#include "well/location.h"
#include "well/gamemode.h"

typedef struct well_player well_player;

// Player methods.
struct sockaddr        *well_player_get_address             (well_player *self);
well_location          *well_player_get_bed_spawn_location  (well_player *self);
void                    well_player_set_bed_spawn_location  (well_player *self);
bool                    well_player_get_allow_flight        (well_player *self);
void                    well_player_set_allow_flight        (well_player *self, bool value);
float                   well_player_get_fly_speed           (well_player *self);
void                    well_player_set_fly_speed           (well_player *self, float value);
float                   well_player_get_walk_speed          (well_player *self);
void                    well_player_set_walk_speed          (well_player *self, float value);
well_location          *well_player_get_compass_direction   (well_player *self);
void                    well_player_set_compass_direction   (well_player *self, well_location *to);
bool                    well_player_is_sneaking             (well_player *self);
void                    well_player_set_sneaking            (well_player *self, bool value);
bool                    well_player_is_sprinting            (well_player *self);
void                    well_player_set_sprinting           (well_player *self, bool value);
bool                    well_player_can_see                 (well_player *self, well_player *other);
void                    well_player_do_chat                 (well_player *self, char *msg);
void                    well_player_hide_player             (well_player *self, well_player *other);
void                    well_player_show_player             (well_player *self, well_player *other);
void                    well_player_hide_from               (well_player *self, well_player *other);
void                    well_player_show_for                (well_player *self, well_player *other);
void                    well_player_update_inventory        (well_player *self);
void                    well_player_request_resource_pack   (well_player *self, char *url);

// humanoid.
enum well_gamemode      well_player_get_gamemode            (well_player *self);
void                    well_player_set_gamemode            (well_player *self, enum well_gamemode gm);
// TODO enderchest.
int                     well_player_get_sleep_ticks         (well_player *self);
bool                    well_player_is_sleeping             (well_player *self);
bool                    well_player_is_blocking             (well_player *self);
bool                    well_player_is_hand_raised          (well_player *self);
int                     well_player_required_xp_to_lvl      (well_player *self);
char                   *well_player_get_name                (well_player *self); // Note names can be changed, use UUID's for identification and storage.
void                    well_player_close_inventory         (well_player *self);
bool                    well_player_is_gliding              (well_player *self, bool value);
void                    well_player_set_gliding             (well_player *self);
bool                    well_player_is_collidable           (well_player *self);
void                    well_player_set_collidable          (well_player *self, bool value);
bool                    well_player_is_leashed              (well_player *self);
void                    well_player_set_leashed             (well_player *self, bool value);
bool                    well_player_has_ai                  (well_player *self);
void                    well_player_set_ai                  (well_player *self, bool value);
bool                    well_player_can_pickup_items        (well_player *self);
void                    well_player_set_can_pickup_items    (well_player *self, bool value);
unsigned int            well_player_get_maximum_air         (well_player *self);
void                    well_player_set_maximum_air         (well_player *self, unsigned int value);
unsigned int            well_player_get_remaining_air       (well_player *self);
void                    well_player_set_remaining_air       (well_player *self, unsigned int value);
double                  well_player_get_eye_heigth          (well_player *self);
bool                    well_player_has_line_of_sight_to    (well_player *self);



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
