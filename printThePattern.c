//         1     
//       2 1 2    
//     3 2 1 2 3   
//   4 3 2 1 2 3 4  
// 5 4 3 2 1 2 3 4 5 
//   4 3 2 1 2 3 4  
//     3 2 1 2 3   
//       2 1 2    
//         1     
        
#include <stdio.h>

int main() {
    int n,val;
    scanf("%d",&n);
    for(int i=1; i<=n; i++,printf("\n")){
        val=i;
        for(int j=1; j<=(2*n-1); j++,printf(" ")){ //2n-1 formula
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
    for(int i=n-1;i>=1;i--,printf("\n")){
        val = i;
        for(int j=1;j<=(2*n-1);j++,printf(" ")){
            if(j<=n-i){
                printf(" ");
            }
            else if(j<n+i){
                if(j<n)
                printf("%d",val--);
                else
                printf("%d",val++);
            }
        }
    }
    
}
