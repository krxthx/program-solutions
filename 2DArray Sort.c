// Sort a 2D Array with 2 for loops only
#include <stdio.h>

int main()
{
    int v=0;
    int a[3][3]={2,1,3,6,1,3,9,8,7};
    
    // int a[3][3];
    //   for(int i=0;i<9;i++){
    //             scanf("%d ",&a[0][i]);
    // }
    
    
    for(int i=0;i<9;i++){
        for(int j=i+1; j<9; j++){
            if(a[0][i]>a[0][j]){
                v = a[0][i];
                a[0][i] = a[0][j];
                a[0][j] = v;
            }
        }
    }
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
    }
    
}
