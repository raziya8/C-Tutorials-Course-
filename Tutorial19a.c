#include <stdio.h>
int sum(int a , int b);
int main ()
{ 
    
    int a , b, c;
    a = 1;
    b = 87;
    c = sum(a,b);
    printf("this sum is %d\n" ,c );
    return 0;
}
 int sum(int a , int b)
   { return a + b;
  }