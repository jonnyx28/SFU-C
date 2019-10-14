#include <stdio.h>
#include <math.h>
int main(void) {
float y = 0;
float x = 0;
float a = 0.9;

printf("%s","Type x: " );
scanf("%g",&x);

printf("%s","Type y: " );
scanf("%g",&y);
	
  if (x>1) y=a*log(x)+sqrt(abs(x));
  if (x<=1) y=2*a*cos(x)+3*x*x;
  


  printf("%s","Result: ");
  printf("%g\n", y );
  {
  return 0;
}}
