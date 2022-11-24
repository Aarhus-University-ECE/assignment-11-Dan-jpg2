#include "sumn.h"

#include<stdio.h>
#include <assert.h>

int sumn (int n)
{
    //Pre-condition
    assert(n > 0);

    //Post-condition
    if(n == 1)
    {
        return (2*1-1);
    }
        else if(n > 1);
        {
            return (2*n-1)+sumn(n-1);
        }
}