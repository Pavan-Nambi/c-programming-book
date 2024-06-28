#include <stdio.h>

int main() {
  int lower, upper, step;
  float fh, cels;
  upper = 500;
  lower = 0;
  step = 20;
  /*printf("%f\n", fh);*/
  while (fh <= upper) {
   /*5.0/9/0 is used becoz in c integer division truncates.. 5/9 wud be 0 */
   /*this is due to efficiency , integer division was quite fast in 1970s on 16 bit.. nums but nw a days modern comuters do 64 bit floating point operations at almost same speed so in modern langiages 5/9 gives floating rsult aka 0.whatever*/
    cels = (5.0 / 9.0) * (fh - 32.0);
    printf("%4.0f %6.1f\n",fh,cels);
    fh = fh + step;
  }
}

/*for and while loops -< indeterminate coz u shud read them closely to say if they r infinitely runnin or not*/
/*eg for determinate loops r foreach in php or for loop in python , here they run over a collection/range so collections cant be infinite...*/
