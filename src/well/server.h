#ifndef SERVER_H
#define SERVER_H

#include <stdbool.h>

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


bool well_server_is_whitelisted();
void well_server_set_whitelisted(bool value);

void well_server_get_idle_timeout();
void well_server_set_idle_timeout();

enum well_gamemode well_server_get_default_gamemode();
void well_server_set_default_gamemode(enum well_gamemode gm);



#endif
