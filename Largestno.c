#include <stdio.h>

void main() 

{
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        
            printf("%.2f is largest number.", n1);

    if (n2 >= n1 && n2 >= n3)
        
            printf("%.2f is largest number.", n2);

    if (n3 >= n1 && n3 >= n2)
        
            printf("%.2f is largest number.", n3);

}
