#ifndef WELL_WELL_H
#define WELL_WELL_H

#include "well/plugin_manager.h"

well_plugin_manager    *well_get_plugin_manager();
char                   *well_get_root_directory_path();


    // Highly preferred to not use this for this specific header file,
    // without the "well" part it gets pretty non-obvious.
    #if defined(WELL_WELL_SHORT_NAMES) || defined(WELL_SHORT_NAMES)

        #define get_plugin_manager          well_get_plugin_manager
        #define get_root_directory_path     well_get_root_directory_path

    #endif

#endif
