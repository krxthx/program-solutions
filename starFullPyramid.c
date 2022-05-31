#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++,printf("\n")){
        for(int j=1; j<=(2*n-1); j++){ //2n-1 formula
            if(j<=n-i)
            printf(" ");
            else if(j<n+i)
            printf("*");
        }
    }
    
}
