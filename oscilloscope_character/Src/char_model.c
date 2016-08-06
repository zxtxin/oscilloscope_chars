#include "char_model.h"
typedef struct
{
    char_model_t letter_lower_case[26];
    char_model_t letter_upper_case[26];
    char_model_t number[10];
}char_database_t;
static const uint8_t lower_case_a[][2]={{3,9},{4,9},{5,9},{6,9},{2,8},{7,8},{4,7},{5,7},{6,7},{7,7},{3,6},{7,6},{2,5},{7,5},{2,4},{7,4},{3,3},{4,3},{5,3},{6,3},{7,3},{8,3},};
static const uint8_t lower_case_b[][2]={{1,13},{2,13},{2,12},{2,11},{2,10},{2,9},{4,9},{5,9},{2,8},{3,8},{6,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{2,4},{3,4},{6,4},{2,3},{4,3},{5,3},};
static const uint8_t lower_case_c[][2]={{4,9},{5,9},{6,9},{3,8},{7,8},{2,7},{2,6},{2,5},{3,4},{7,4},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_d[][2]={{6,13},{7,13},{7,12},{7,11},{7,10},{4,9},{5,9},{6,9},{7,9},{3,8},{7,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{3,4},{6,4},{7,4},{4,3},{5,3},{7,3},{8,3},};
static const uint8_t lower_case_e[][2]={{3,9},{4,9},{5,9},{6,9},{2,8},{7,8},{2,7},{3,7},{4,7},{5,7},{6,7},{7,7},{2,6},{2,5},{2,4},{7,4},{3,3},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_f[][2]={{5,13},{6,13},{7,13},{8,13},{4,12},{8,12},{4,11},{4,10},{2,9},{3,9},{4,9},{5,9},{6,9},{7,9},{4,8},{4,7},{4,6},{4,5},{4,4},{2,3},{3,3},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_g[][2]={{3,9},{4,9},{5,9},{6,9},{7,9},{2,8},{6,8},{2,7},{6,7},{3,6},{4,6},{5,6},{2,5},{3,4},{4,4},{5,4},{6,4},{2,3},{7,3},{2,2},{7,2},{3,1},{4,1},{5,1},{6,1},};
static const uint8_t lower_case_h[][2]={{1,13},{2,13},{2,12},{2,11},{2,10},{2,9},{4,9},{5,9},{6,9},{2,8},{3,8},{7,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{2,4},{7,4},{1,3},{2,3},{3,3},{6,3},{7,3},{8,3},};
static const uint8_t lower_case_i[][2]={{3,13},{4,13},{3,12},{4,12},{2,9},{3,9},{4,9},{4,8},{4,7},{4,6},{4,5},{4,4},{2,3},{3,3},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_j[][2]={{5,13},{6,13},{5,12},{6,12},{4,9},{5,9},{6,9},{6,8},{6,7},{6,6},{6,5},{6,4},{6,3},{2,2},{6,2},{2,1},{3,1},{4,1},{5,1},};
static const uint8_t lower_case_k[][2]={{1,13},{2,13},{2,12},{2,11},{2,10},{2,9},{5,9},{6,9},{7,9},{2,8},{5,8},{2,7},{4,7},{2,6},{3,6},{5,6},{2,5},{5,5},{2,4},{6,4},{1,3},{2,3},{3,3},{5,3},{6,3},{7,3},};
static const uint8_t lower_case_l[][2]={{2,13},{3,13},{4,13},{4,12},{4,11},{4,10},{4,9},{4,8},{4,7},{4,6},{4,5},{4,4},{2,3},{3,3},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_m[][2]={{1,9},{2,9},{3,9},{4,9},{5,9},{6,9},{7,9},{2,8},{5,8},{8,8},{2,7},{5,7},{8,7},{2,6},{5,6},{8,6},{2,5},{5,5},{8,5},{2,4},{5,4},{8,4},{1,3},{2,3},{3,3},{5,3},{6,3},{8,3},};
static const uint8_t lower_case_n[][2]={{1,9},{2,9},{4,9},{5,9},{6,9},{2,8},{3,8},{7,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{2,4},{7,4},{1,3},{2,3},{3,3},{6,3},{7,3},{8,3},};
static const uint8_t lower_case_o[][2]={{3,9},{4,9},{5,9},{6,9},{2,8},{7,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{2,4},{7,4},{3,3},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_p[][2]={{1,9},{2,9},{4,9},{5,9},{2,8},{3,8},{6,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{2,4},{6,4},{2,3},{3,3},{4,3},{5,3},{2,2},{1,1},{2,1},{3,1},};
static const uint8_t lower_case_q[][2]={{4,9},{5,9},{6,9},{7,9},{3,8},{7,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{3,4},{7,4},{4,3},{5,3},{6,3},{7,3},{7,2},{6,1},{7,1},{8,1},};
static const uint8_t lower_case_r[][2]={{1,9},{2,9},{3,9},{5,9},{6,9},{7,9},{3,8},{4,8},{7,8},{3,7},{3,6},{3,5},{3,4},{1,3},{2,3},{3,3},{4,3},{5,3},};
static const uint8_t lower_case_s[][2]={{3,9},{4,9},{5,9},{6,9},{7,9},{2,8},{7,8},{2,7},{3,6},{4,6},{5,6},{6,6},{7,5},{2,4},{7,4},{2,3},{3,3},{4,3},{5,3},{6,3},};
static const uint8_t lower_case_t[][2]={{4,11},{4,10},{2,9},{3,9},{4,9},{5,9},{6,9},{4,8},{4,7},{4,6},{4,5},{4,4},{5,3},{6,3},};
static const uint8_t lower_case_u[][2]={{1,9},{2,9},{6,9},{7,9},{2,8},{7,8},{2,7},{7,7},{2,6},{7,6},{2,5},{7,5},{2,4},{6,4},{7,4},{3,3},{4,3},{5,3},{7,3},{8,3},};
static const uint8_t lower_case_v[][2]={{1,9},{2,9},{3,9},{6,9},{7,9},{8,9},{2,8},{7,8},{3,7},{6,7},{3,6},{6,6},{3,5},{5,5},{4,4},{4,3},};
static const uint8_t lower_case_w[][2]={{1,9},{2,9},{4,9},{6,9},{7,9},{8,9},{1,8},{4,8},{7,8},{1,7},{4,7},{7,7},{1,6},{3,6},{5,6},{7,6},{1,5},{3,5},{5,5},{7,5},{2,4},{6,4},{2,3},{6,3},};
static const uint8_t lower_case_x[][2]={{2,9},{3,9},{5,9},{6,9},{7,9},{3,8},{6,8},{4,7},{5,7},{4,6},{5,6},{4,5},{5,5},{3,4},{6,4},{2,3},{3,3},{4,3},{6,3},{7,3},};
static const uint8_t lower_case_y[][2]={{1,9},{2,9},{3,9},{6,9},{7,9},{8,9},{2,8},{7,8},{3,7},{6,7},{3,6},{6,6},{3,5},{5,5},{4,4},{5,4},{4,3},{4,2},{1,1},{2,1},{3,1},};
static const uint8_t lower_case_z[][2]={{2,9},{3,9},{4,9},{5,9},{6,9},{7,9},{2,8},{6,8},{5,7},{4,6},{4,5},{3,4},{7,4},{2,3},{3,3},{4,3},{5,3},{6,3},{7,3},};
static const char_database_t char_database=
{
  .letter_lower_case = 
    {
        {&lower_case_a,sizeof(lower_case_a)/sizeof(lower_case_a[0])},
        {&lower_case_b,sizeof(lower_case_b)/sizeof(lower_case_b[0])},
        {&lower_case_c,sizeof(lower_case_c)/sizeof(lower_case_c[0])},
        {&lower_case_d,sizeof(lower_case_d)/sizeof(lower_case_d[0])},
        {&lower_case_e,sizeof(lower_case_e)/sizeof(lower_case_e[0])},
        {&lower_case_f,sizeof(lower_case_f)/sizeof(lower_case_f[0])},
        {&lower_case_g,sizeof(lower_case_g)/sizeof(lower_case_g[0])},
        {&lower_case_h,sizeof(lower_case_h)/sizeof(lower_case_h[0])},
        {&lower_case_i,sizeof(lower_case_i)/sizeof(lower_case_i[0])},
        {&lower_case_j,sizeof(lower_case_j)/sizeof(lower_case_j[0])},
        {&lower_case_k,sizeof(lower_case_k)/sizeof(lower_case_k[0])},
        {&lower_case_l,sizeof(lower_case_l)/sizeof(lower_case_l[0])},
        {&lower_case_m,sizeof(lower_case_m)/sizeof(lower_case_m[0])},
        {&lower_case_n,sizeof(lower_case_n)/sizeof(lower_case_n[0])},
        {&lower_case_o,sizeof(lower_case_o)/sizeof(lower_case_o[0])},
        {&lower_case_p,sizeof(lower_case_p)/sizeof(lower_case_p[0])},
        {&lower_case_q,sizeof(lower_case_q)/sizeof(lower_case_q[0])},
        {&lower_case_r,sizeof(lower_case_r)/sizeof(lower_case_r[0])},
        {&lower_case_s,sizeof(lower_case_s)/sizeof(lower_case_s[0])},
        {&lower_case_t,sizeof(lower_case_t)/sizeof(lower_case_t[0])},
        {&lower_case_u,sizeof(lower_case_u)/sizeof(lower_case_u[0])},
        {&lower_case_v,sizeof(lower_case_v)/sizeof(lower_case_v[0])},
        {&lower_case_w,sizeof(lower_case_w)/sizeof(lower_case_w[0])},
        {&lower_case_x,sizeof(lower_case_x)/sizeof(lower_case_x[0])},
        {&lower_case_y,sizeof(lower_case_y)/sizeof(lower_case_y[0])},
        {&lower_case_z,sizeof(lower_case_z)/sizeof(lower_case_z[0])}
    },
};
const char_model_t *get_char_model(uint8_t character)
{
    if(character>='a'&&character<='z')
    {
        return &char_database.letter_lower_case[character-'a'];
    }else
    {
        return NULL;
    }
}

