#include <stdlib.h>

#ifndef FUNCTIONS_UTILS
#define FUNCTIONS_UTILS
class int_buffer{
	int* content;
public:
	//int size2d;
 
	int_buffer(int size2d)
{
  
      if (size2d != 0) content = (int*) malloc(size2d);
      else content = NULL;
      if (content != NULL) {
        
        //for (int8_t anIndex = 0; anIndex < myArraySize; anIndex++) myArray[anIndex] = myArraySize;
      } else size2d = 0; // in case malloc failed
    
}
	~int_buffer(){
	  if (content != NULL) free(content);
      content = NULL;
      content = 0;
	}
	
	
	
	
	
	
};


#endif
