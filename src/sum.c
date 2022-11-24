#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
//Sumtail using tail recurssion 
int sumtail (int n, int total)
{
  //Pre-condition
  assert(n >= 1);

  //Post-Condition
  if (n > 1)
    return sumtail(n-1,total+n);
  else
    return (total + 1);
}

/* Sum integers 1 to n */
//sumwhile using a while loop
int sumwhile (int n)
{
  //Precondition
  assert(n > 0);
  
  int i = 0; // "counter"
  
  //Post-condition
  //Loop runs as long as n has a value greater than zero and n will be added to the total value "i" each itteration of loop.
  while (n>=1) {
    i +=n;
    n--;
  }
  return i;
}

