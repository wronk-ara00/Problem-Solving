
#include <stdio.h>
#include <math.h>

int main() {

   float x1,x2,y1,y2,T;
   scanf("%f %f %f %f",&x1, &x2, &y1, &y2);
   T=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   printf("%.4f\n",T);
   return 0;
}
