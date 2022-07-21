#include <stdio.h>
int main()
{
    int n,flag=1,temp=0;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        printf("Element %d=",i+1);
        scanf("%d",&a[i]);
    }
    int j=n-1;
    i=0;
     while(i<j){
        //  printf("\ni=%d j=%d",i,j);
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
     }
    printf("\nReverse without extra space\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
