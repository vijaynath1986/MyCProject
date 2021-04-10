#include "stdio.h"
#include "sub.h"

#include "add.h"


int main(){

  int res1, res2;
  printf("\nMain function");

  res1 = sub(10, 2);
  printf("\nSubtraction done - %d", res1);


  res2 = add(5,6);
  printf("\nAddition done - %d", res2);

}
