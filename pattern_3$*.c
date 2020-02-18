#include <stdio.h>

void main()
{
    int n,r,c;
    
    printf("Enter number of rows:");
    scanf("%d", &n);
    
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            if((r+c)%2==0){
                printf("$");
            }
            else{
                printf("*");
                }
                
        }
        printf("\n");
        
    }

}
