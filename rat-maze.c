
#include <stdio.h>
int n;
int process(int a[n][n], int b[n][n], int i, int j){
    if(i==n-1 &&j==n-1){
        b[i][j]=1;
        return 1;
    }
    else{
        if(i>=0 && j<=0 && i<n && j<n && a[i][j]==1){
            b[i][j]=1;
            if(process(a,b,i+1,j)) 
            return 1;
            if(process(a,b,i,j+1))
            return 1;
            
            b[i][j]=0;
            return 0;
        }
        return 0;
    }
}
int main() {
    scanf("%d",&n);
    int a[n][n],a[n][n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[0][i]);
        b[0][i] = 0;
    }
    process(a,b,)
    return 0;
}
