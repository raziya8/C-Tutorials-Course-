#include <stdio.h>
int main()
 {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    // %c displays the actual character
    printf("ASCII value of %c = %d\n", c, c);
    return 0;
}
