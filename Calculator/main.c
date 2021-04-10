#include "stdio.h"
#include "sub.h"


int main(){

  int res;
  float resf;
  printf("\nMain function");
  res = sub_int(10, 2);
  printf("\nSubtraction integer done - %d", res);
  resf = sub_float(20.22f, 1.12f);
  printf("\nSubtraction float done - %f", resf);
}
