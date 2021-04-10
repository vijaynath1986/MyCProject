#include "stdio.h"
#include "add.h"


int main(){

  int res1, res2, res3;
  printf("\nMain function");


  /*Subtraction */
  res1 = sub(10, 2);
  printf("\nSubtraction done - %d", res1);

  /*Addition int*/
  res3 = add_int(5,6);
  printf("\nAddition integer done - %d", res3);

  /*Addition float*/
  res2 = add_float(5.5,6.6);
  printf("\nAddition floating point done - %d", res2);

}
