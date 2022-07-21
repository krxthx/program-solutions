#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char b[30];
    scanf("%s",b);
    for(int i=0;i<b[i]!=0;i+=2){
       for(int j=0;j<((int)b[i+1]-48);j++){
           printf("%c",b[i]);
       }
    }
    return 0;
}

// ip: a1b2m3
// op: abbmmm
