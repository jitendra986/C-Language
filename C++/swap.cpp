#include <stdio.h>

int main(void)
{
    int x = 28;
    int y = 50;

    print('x is X: \n',x);
    print('y is X: \n',y);

    // Swapping
      
    int temp = x;
    x=y;
    y=temp;



    print('x is now:\n',x);
    print('y is now:\n',y);
}