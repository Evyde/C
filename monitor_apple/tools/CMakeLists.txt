set(LIB_SRC init_d.c)
add_library(libinit_d ${LIB_SRC})
set_target_properties(libinit_d PROPERTIES OUTPUT_NAME "init_d")
