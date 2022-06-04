

#include <stdio.h>

int main()
{
    int ang,v=0;
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    
    int b[3][3];
    scanf("%d",&ang);
    ang/=90;
    for(int k=1;k<=ang;k++,v=0){
        for(int i=0;i<3;i++){
            for(int j=2;j>=0;j--){
                b[0][v]=a[j][i];
                v++;
            }
        }
        for(int i=0;i<9;i++){
            a[0][i]=b[0][i];
        }
    }
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
    }
    
}
