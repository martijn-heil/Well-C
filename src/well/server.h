#ifndef WELL_SERVER_H
#define WELL_SERVER_H

#include <stdbool.h>
#include <uuid/uuid.h>
#include "well/world.h"
#include "well/player.h"
#include "well/offline_player.h"


char *well_server_get_motd();

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


char                      **well_server_get_ip_bans             (); // array of strings.
bool                        well_server_is_online_mode          ();
bool                        well_server_is_whitelisted          ();
void                        well_server_set_whitelisted         (bool value);
void                        well_server_get_idle_timeout        ();
void                        well_server_set_idle_timeout        (int value);
enum well_gamemode          well_server_get_default_gamemode    ();
void                        well_server_set_default_gamemode    (enum well_gamemode gm);
struct well_world          *well_server_get_worlds              ();
struct well_world          *well_server_get_worldn              (char *name);
struct well_world          *well_server_get_worldu              (uuid_t uuid);
struct well_player         *well_server_get_playern             (char *name);
struct well_player         *well_server_get_playeru             (uuid_t uuid);
struct well_offline_player *well_server_get_offline_playern     (char *name);
struct well_offline_player *well_server_get_offline_playeru     (uuid_t uuid);


    #ifdef WELL_SERVER_SHORT_NAMES || WELL_SHORT_NAMES



    #endif

#endif
