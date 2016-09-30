#ifndef WELL_PLUGIN_MANAGER_H
#define WELL_PLUGIN_MANAGER_H

#include "well/plugin.h"

typedef struct well_plugin_manager well_plugin_manager;

void well_plugin_manager_enable_all     (well_plugin_manager *self);
void well_plugin_manager_disable_all    (well_plugin_manager *self);
void well_plugin_manager_reload_all     (well_plugin_manager *self);
void well_plugin_manager_unload_all     (well_plugin_manager *self);

void well_plugin_manager_enable_plugin  (well_plugin_manager *self, well_plugin *plugin);
void well_plugin_manager_disable_plugin (well_plugin_manager *self, well_plugin *plugin);
void well_plugin_manager_reload_plugin  (well_plugin_manager *self, well_plugin *plugin);

void well_plugin_manager_load_plugin    (well_plugin_manager *self, const char *name);
void well_plugin_manager_unload_pugin   (well_plugin_manager *self, well_plugin *plugin);

void well_plugin_manager_call_event     (well_plugin_manager *self, void *event, char *type);
void well_plugin_manager_on_event       (well_plugin_manager *self, char *event_type, void (*event_handler)(void *event));


    #if defined(WELL_PLUGIN_MANAGER_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define plugin_manager_enable_all       well_plugin_manager_enable_all
        #define plugin_manager_disable_all      well_plugin_manager_disable_all
        #define plugin_manager_reload_all       well_plugin_manager_reload_all
        #define plugin_manager_unload_all       well_plugin_manager_unload_all
        #define plugin_manager_enable_plugin    well_plugin_manager_enable_plugin
        #define plugin_manager_disable_plugin   well_plugin_manager_disable_plugin
        #define plugin_manager_reload_plugin    well_plugin_manager_reload_plugin
        #define plugin_manager_load_plugin      well_plugin_manager_load_plugin
        #define plugin_manager_unload_pugin     well_plugin_manager_unload_pugin

    #endif

#endif
