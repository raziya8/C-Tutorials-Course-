#include <stdio.h>
int sum(int a , int b);
void printstar(int n)
{
    for (int i =0 ; i <n; i++)
    {
       printf("%c\n", '*');
       }
       
        printf("%c\n", '*');
    
}



int takenumber()

    {
        int i ;
        printf("Enter a number  is");
        scanf (" %d",&i);
        return i;
    }

int main ()
{ 
    
    int a , b, c;
    a = 1;
    b = 87;
   // c = sum(a,b);
    c =  takenumber();
   // printstar(7);
 
   // printf("this sum is %d\n" ,c );
    printf("The number entered  is  %d\n" ,c );
    return 0;
}
 int sum(int a , int b)
   { return a + b;
  }