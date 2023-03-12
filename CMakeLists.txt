idf_component_register(
    SRCS "esp_stmems_lsm6dso.c" "include/driver/lsm6dso_reg.c"
    INCLUDE_DIRS "include"
    REQUIRES "esp_stmems"
)