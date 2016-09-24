#ifndef WELL_SERVER_H
#define WELL_SERVER_H

#include <stdbool.h>
#include <uuid/uuid.h>
#include "well/world.h"
#include "well/player.h"
#include "well/offline_player.h"


char *well_server_get_motd(void);

/*
 * Shut the server down, without restarting.
 *
 * kick_message may be NULL.
 */
void well_server_shutdown(char *kick_message);

/*
 * Restart the server.
 *
 * kick_message may be NULl.
 */
void well_server_restart(char *kick_message);

/*
 * Reload the server and plugins.
 *
 * message *may* always be NULL. If announce is true and message is NULL,
 * the default message will be announced in chat.
 */
void well_server_reload(bool announce, char *message);


char                      **well_server_get_ip_bans             (void); // array of strings.
bool                        well_server_is_online_mode          (void);
bool                        well_server_is_whitelisted          (void);
void                        well_server_set_whitelisted         (bool value);
void                        well_server_get_idle_timeout        (void);
void                        well_server_set_idle_timeout        (int value);
enum well_gamemode          well_server_get_default_gamemode    (void);
void                        well_server_set_default_gamemode    (enum well_gamemode gm);
struct well_world          *well_server_get_worlds              (void);
struct well_world          *well_server_get_worldn              (char *name);
struct well_world          *well_server_get_worldu              (uuid_t uuid);
struct well_player         *well_server_get_playern             (char *name);
struct well_player         *well_server_get_playeru             (uuid_t uuid);
struct well_offline_player *well_server_get_offline_playern     (char *name);
struct well_offline_player *well_server_get_offline_playeru     (uuid_t uuid);


    #if defined(WELL_SERVER_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define server_reload                   well_server_reload
        #define server_restart                  well_server_restart
        #define server_shutdown                 well_server_shutdown
        #define server_get_motd                 well_server_get_motd
        #define server_get_ip_bans              well_server_get_ip_bans
        #define server_is_online_mode           well_server_is_online_mode
        #define server_is_whitelisted           well_server_is_whitelisted
        #define server_set_whitelisted          well_server_set_whitelisted
        #define server_get_idle_timeout         well_server_get_idle_timeout
        #define server_set_idle_timeout         well_server_set_idle_timeout
        #define server_get_default_gamemode     well_server_get_default_gamemode
        #define server_set_default_gamemode     well_server_set_default_gamemode
        #define server_get_worlds               well_server_get_worlds
        #define server_get_worldn               well_server_get_worldn
        #define server_get_worldu               well_server_get_worldu
        #define server_get_playern              well_server_get_playern
        #define server_get_playeru              well_server_get_playeru
        #define server_get_offline_playern      well_server_get_offline_playern
        #define server_get_offline_playeru      well_server_get_offline_playeru

    #endif

#endif
