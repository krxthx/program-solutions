// Print the  following pattern
//     1
//    212
//   32123
//  4321234
// 543212345

#include <stdio.h>

int main() {
    int n,val;
    scanf("%d",&n);
    for(int i=1; i<=n; i++,printf("\n")){
        val=i;
        for(int j=1; j<=(2*n-1); j++){ //2n-1 formula
            if(j<=n-i)
                printf(" ");
            else if(j<n+i){
                if(j<n)
                printf("%d",val--);
                else
                printf("%d",val++);
            }
                
        }
    }
    
}
