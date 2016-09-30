#ifndef WELL_PLUGIN_H
#define WELL_PLUGIN_H

typedef struct well_plugin well_plugin;

enum well_plugin_state {
    LOADING,
    LOADED,

    ENABLING,
    ENABLED,

    DISABLING,
    DISABLED
};

enum well_plugin_state      well_plugin_get_state(well_plugin *self);
char                       *well_get_plugin_path(well_plugin *self);

    #if defined(WELL_PLUGIN_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define plugin_state        well_plugin_state
        #define plugin_get_state    well_plugin_get_state
        #define plugin              well_plugin

    #endif

#endif
