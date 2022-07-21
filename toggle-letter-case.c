#include <stdio.h>
int main()
{
    char var[50];
    scanf("%[^\n]s",var);
    for(int i=0;var[i]!=0;i++){
      if((var[i]>=97) && (var[i]<=122))  
        var[i]-=32;
      else if((var[i]>=65) && (var[i]<=90))  
        var[i]+=32;
    }
    printf("%s",var);
    return 0;
}


// ip: hElLo WoRLD
// op: HeLlO wOrld
