/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
//
int fib (int n, int p, int pp)
{
    //Pre-condition
    assert(n>=1);

    //Post-condition
    if(n == 1)
        return p;
    else if(n == 2)
        return pp;
    else 
        return fib(n-1, pp, p+pp);


}
//My code for testcases. Nothing wild, just to make it easier for myself
int fact_add(int n)
{
    int sum = 0;
    for (int i=0; i<n; n--)
    {
        sum+=n;
    }
    return sum;
}