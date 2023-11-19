#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int i;
    int average= 0;
    
    int grade[5];
    for (i=0; i<5; i++) {
        printf("input value [%i] = ", i);
        scanf("%d", &grade[i]);
        }
    for (i=0;i<5;i++) {
        printf("grade[%i] = %i\n", i, *(grade+i));
        average = average + *(grade+i);
        }
        
        printf("average: %i\n", average/5);  
    
    
    
  system("PAUSE");	
  return 0;
  
}
