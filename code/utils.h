  #ifndef FUNCTIONS_UTILS
  #define FUNCTIONS_UTILS


class vec2 {
  
public:
  float x, y;
  vec2()  {}
  vec2( float inx, float iny): x(inx) , y(iny) {}
  vec2 operator+ (const vec2& param){
    vec2 temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
  }
  vec2 operator- (const vec2& param){
    vec2 temp;
    temp.x = x - param.x;
    temp.y = y - param.y;
    return temp;
  }
  
   vec2 operator* (const vec2& param){
    vec2 temp;
    temp.x = x * param.x;
    temp.y = y * param.y;
    return temp;
  }
  // no error when dividing by O
  vec2 operator/ (const vec2& param){
	vec2 temp;
    temp.x = x / param.x;
    temp.y = y / param.y;
    return temp;
  }
    
};
float lenght(vec2 var1, vec2 var2);
float dot(vec2 in1, vec2 in2);   
#endif
