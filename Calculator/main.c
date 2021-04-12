#include "stdio.h"
#include "add.h"
#include "sub.h"


int main(){

  int res1, res2, res3;
  float resf;
  printf("\nMain function");


  /*Subtraction */
  res1 = sub(10, 2);
  printf("\nSubtraction done - %d", res1);

  /*Addition int*/
  res3 = add_int(5,6);
  printf("\nAddition integer done - %d", res3);

  /*Addition float*/
  resf = add_float(5.5,6.6);
  printf("\nAddition floating point done - %f", resf);

  printf("\nEnd of Main function");
}
