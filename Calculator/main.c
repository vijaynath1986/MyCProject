#include "stdio.h"
#include "sub.h"

#include "add.h"


int main(){

  int res1, res2, res3;
  printf("\nMain function");

  res1 = sub(10, 2);
  printf("\nSubtraction done - %d", res1);

  res3 = add_int(5,6);
  printf("\nAddition integer done - %d", res3);

  res2 = add_float(5.5,6.6);
  printf("\nAddition floating point done - %d", res2);


}
