

#include <stdio.h>

int main()
{
    int v=0;
    int a[3][3]={1,4,3,2,1,5,9,8,7};
    
    // int a[3][3];
    //   for(int i=0;i<=8;i++){
    //             scanf("%d ",&a[0][i]);
    // }
    
    
    for(int i=0;i<3;i++){
        for(int j=0; j<2; j++){
            for(int k=j+1;k<3;k++){
                if(a[i][j]>a[i][k]) {
                    v = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = v;
                }
            }
        }
    }
    
    for(int i=0;i<9;i++){
        printf("%d ",a[0][i]);
        if((i+1)%3==0)
            printf("\n");
    }
}


