#include "utils.h"


vec2 mid(10,10);
vec2 edge(2,5);
//vec2 op;
float r = 8;

void setup() {
  Serial.begin(9600);
vec2 temp = mid * edge;
Serial.println(temp.x);
Serial.println(temp.y);

Serial.println(dot(mid,edge));

}
void loop() {

mid.x += 10;

for (int y = 0; y < 20; y++){
 
    for (int x = 0; x < 100; x++){ 
      vec2 scord(x,y);
      if (lenght(scord,mid)<=r){
     //Serial.print("*  ");
        }
      else {
      //Serial.print("   ");
      }
    }
  //Serial.println();
 }

for(int i = 0; i <= 20; i++){
        //Serial.println(" ");
    }


 
 
}
