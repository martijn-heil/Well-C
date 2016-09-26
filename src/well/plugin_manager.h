#ifndef WELL_PLUGIN_MANAGER_H
#define WELL_PLUGIN_MANAGER_H

#include "well/plugin.h"

typedef struct well_plugin_manager well_plugin_manager;

void well_plugin_manager_enable_all     (well_plugin_manager *self);
void well_plugin_manager_disable_all    (well_plugin_manager *self);
void well_plugin_manager_reload_all     (well_plugin_manager *self);
void well_plugin_manager_unload_all     (well_plugin_manager *self);

void well_plugin_manager_enable         (well_plugin_manager *self, well_plugin *plugin);
void well_plugin_manager_disable        (well_plugin_manager *self, well_plugin *plugin);
void well_plugin_manager_reload         (well_plugin_manager *self, well_plugin *plugin);

void well_plugin_manager_load           (well_plugin_manager *self, const char *name);
void well_plugin_manager_unload         (well_plugin_manager *self, well_plugin *plugin);

//void well_plugin_manager_call_event     (well_plugin_manager *self, ) // TODO


#endif
