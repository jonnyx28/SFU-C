#include <stdio.h>
#include <math.h>
int main(void) {
float y = 0;
float x= 6.8;
float b = 0;

printf("%s","Type b: " );
scanf("%g",&b);
  if (b<=0) y=b*log10(pow(x,2));
  if (b>=10) y=b*log10(b*pow(x,2));
  if ((0<b)&&(b<10)) y=pow(b*x,2);

  printf("%s","Result: ");
  printf("%g\n", y );
  {
  return 0;
}}
