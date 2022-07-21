#include <stdio.h>

int main()
{
    int h,r,wsum=0;
    printf("\nn = ");
    scanf("%d",&h);
    int a[h];
    printf("\nWeights\n");
    for(int i=0;i<h;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<h;i++){
        wsum=0;
        for(int j=i+1;j<h;j++){
            wsum+=a[j];
    }
    printf("%d ",wsum);
    }
    return 0;
}
