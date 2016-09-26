#ifndef WELL_ENTITY_H
#define WELL_ENTITY_H

#include <stdbool.h>
#include <uuid/uuid.h>
#include "well/location.h"


typedef struct well_entity well_entity;

// TODO velocity.
well_location      *well_entity_get_location            (well_entity *self);
uuid_t             *well_entity_get_uuid                (well_entity *self);
bool                well_entity_is_valid                (well_entity *self);
char               *well_entity_get_custom_name         (well_entity *self);
void                well_entity_set_custom_name         (well_entity *self, char *value);
bool                well_entity_get_custom_name_visible (well_entity *self);
void                well_entity_set_custom_name_visible (well_entity *self, bool value);
float               well_entity_get_fall_distance       (well_entity *self);
void                well_entity_set_fall_distance       (well_entity *self, float value);
well_entity        *well_entity_get_passenger           (well_entity *self);
void                well_entity_set_passenger           (well_entity *self, well_entity *passenger);
bool                well_entity_is_glowing              (well_entity *self);
void                well_entity_set_glowing             (well_entity *self, bool value);
bool                well_entity_is_affected_by_gravity  (well_entity *self);
void                well_entity_set_affected_by_gravity (well_entity *self, bool value);
bool                well_entity_is_invulnerable         (well_entity *self);
void                well_entity_set_invulnerable        (well_entity *self, bool value);
bool                well_entity_is_silent               (well_entity *self, bool value);
void                well_entity_set_silent              (well_entity *self, bool value);
unsigned int        well_entity_get_age                 (well_entity *self);
void                well_entity_set_age                 (well_entity *self, unsigned int value);
void                well_entity_eject_passenger         (well_entity *self);
void                well_entity_leave_vehicle           (well_entity *self);
void                well_entity_remove                  (well_entity *self);

    #if defined(WELL_ENTITY_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define entity                          well_entity
        #define entity_get_location             well_entity_get_location
        #define entity_get_uuid                 well_entity_get_uuid
        #define entity_is_valid                 well_entity_is_valid
        #define entity_get_custom_name          well_entity_get_custom_name
        #define entity_set_custom_name          well_entity_set_custom_name
        #define entity_get_custom_name_visible  well_entity_get_custom_name_visible
        #define entity_set_custom_name_visible  well_entity_set_custom_name_visible
        #define entity_get_fall_distance        well_entity_get_fall_distance
        #define entity_set_fall_distance        well_entity_set_fall_distance
        #define entity_get_passenger            well_entity_get_passenger
        #define entity_get_passenger            well_entity_get_passenger
        #define entity_set_passenger            well_entity_set_passenger
        #define entity_is_glowing               well_entity_is_glowing
        #define entity_set_glowing              well_entity_set_glowing
        #define entity_is_affected_by_gravity   well_entity_is_affected_by_gravity
        #define entity_set_affected_by_gravity  well_entity_set_affected_by_gravity
        #define entity_is_invulnerable          well_entity_is_invulnerable
        #define entity_set_invulnerable         well_entity_set_invulnerable
        #define entity_is_silent                well_entity_is_silent
        #define entity_set_silent               well_entity_set_silent
        #define entity_get_age                  well_entity_get_age
        #define entity_set_age                  well_entity_set_age
        #define entity_eject_passenger          well_entity_eject_passenger
        #define entity_leave_vehicle            well_entity_leave_vehicle
        #define entity_remove                   well_entity_remove

    #endif

#endif
