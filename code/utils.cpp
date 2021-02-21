#include "utils.h"
#include <math.h>
float vec2::dot(vec2 in1, vec2 in2){
  float temp = in1.x*in2.x + in1.y*in2.y;
  return temp;
  }

float lenght(vec2 var1, vec2 var2){
    return sqrt(pow((var2.x - var1.x),2) + pow((var2.y - var1.y),2));

 };
