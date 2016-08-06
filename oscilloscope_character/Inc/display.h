#ifndef DISPLAY_H_
#define DISPLAY_H_
#include <stdint.h>
typedef void (*d2a_fn)(uint8_t x_voltage,uint8_t y_voltage);
void display_init(d2a_fn fn);
void display(uint8_t *char_array,uint8_t x,uint8_t y,uint8_t scale);
#endif
