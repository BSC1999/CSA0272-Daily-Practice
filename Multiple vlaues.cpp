#include <stdio.h>
struct greaterSmaller {
    int greater, smaller;
};
 
typedef struct greaterSmaller Struct;
 
Struct findGreaterSmaller(int a, int b)
{
    Struct s;
    if (a > b) {
        s.greater = a;
        s.smaller = b;
    }
    else {
        s.greater = b;
        s.smaller = a;
    }
 
    return s;
}
 
int main()
{
    int x, y;
    Struct result;
 
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);

    result = findGreaterSmaller(x, y);
    printf("\nThe greater number is %d and the"
           "smaller number is %d",
           result.greater, result.smaller);
 
    return 0;
}

