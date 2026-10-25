/* Zephyr 3.5 has no zephyr/version.h. Device info only needs the string. */
#include <zephyr/kernel_version.h>

#ifndef KERNEL_VERSION_STRING
#define KERNEL_VERSION_STRING "3.5.0"
#endif
