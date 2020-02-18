
#include <stdio.h>

void main()
{
    int n,r,c;
    
    printf("Enter number of rows:");
    scanf("%d", &n);
    
    for(r=1;r<=n;r++){
        for(c=65;c<n+65;c++){
            printf("%4c",c);
        }
        printf("\n");
    }
    
}
