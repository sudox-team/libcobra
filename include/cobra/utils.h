#ifndef COBRA_UTILS_H
#define COBRA_UTILS_H

#include <stdint.h>
#ifdef COBRA_UTILS_PRIVATE
#include <stdio.h>
#endif

void cobra_utils_flip_array(uint8_t *array, int length);
void cobra_utils_print_array(uint8_t *array, int length);

#endif
