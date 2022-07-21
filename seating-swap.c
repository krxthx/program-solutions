#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int t;
    
    for(int i=0;i<n;i++){
        if((a[i]==0 && a[i+1]==1) || (a[i]==1 && a[i+1]==0)){
            t = a[i];
            a[i] = a[i+1];
            a[i+1] = t;
            i++;
        }
    }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}

// ip:
// 7
// 1 0 1 1 0 0 1
  
// op:
// 0 1 1 0 1 1 0 
