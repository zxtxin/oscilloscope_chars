#ifndef CHAR_MODEL_H_
#define CHAR_MODEL_H_
#include <stdint.h>
#include <stddef.h>
typedef struct
{
    const uint8_t (*coord)[][2];
    uint8_t length;
}char_model_t;
const char_model_t *get_char_model(uint8_t);
#define CHAR_WIDTH 8

#endif
