#include "display.h"
#include "char_model.h"
static d2a_fn set_voltage;
static void display_char(uint8_t character,uint8_t x,uint8_t y,uint8_t scale)
{
    uint8_t i;
    const char_model_t *ptr=get_char_model(character);
    const uint8_t (*coord)[2] = *ptr->coord;
    for(i=0;i<ptr->length;++i)
    {
        set_voltage(x+coord[i][0]*scale,y+coord[i][1]*scale);
    }
    
}
void display_init(d2a_fn fn)
{
    set_voltage = fn;
}
void display(uint8_t *char_array,uint8_t x,uint8_t y,uint8_t scale)
{
    uint8_t i;
    for(i=0;char_array[i]!=0;++i)
    {
        display_char(char_array[i],x,y,scale);
        x += scale*CHAR_WIDTH;
    }
}

