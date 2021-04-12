#include "stdio.h"
#include "add.h"
#include "sub.h"


int main(){


  int res1, res2, res3;
  float resf1, resf2;
  printf("\nMain function");

  /*Addition int*/
  res3 = add_int(5,6);
  printf("\nAddition integer done - %d", res3);

  /*Addition float*/
  resf1 = add_float(5.5,6.6);
  printf("\nAddition floating point done - %f", resf1);

  res2 = sub_int(10, 2);
  printf("\nSubtraction integer done - %d", res2);

  resf2 = sub_float(20.22f, 1.12f);
  printf("\nSubtraction float done - %f", resf2);

}
