#include "utils.h"
#include "matrix_renderer.h"

vec2 mid(10,10);
vec2 edge(2,5);
const uint8_t nbRow = 2, nbCol = 3;
int_buffer test[nbRow][nbCol]={{int_buffer(1),int_buffer(2),int_buffer(3)},
{int_buffer(4),int_buffer(5),int_buffer(6)},
};
//vec2 op;
float r = 8;

void setup() {
  Serial.begin(9600);
vec2 temp = mid / edge;
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

byte buffer2d [5] [10];
 
 
}
