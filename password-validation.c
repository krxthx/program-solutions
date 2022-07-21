#include <stdio.h>
int main()
{
    char var[50],flag=0;
    int len=0,cap=0,small=0,num=0,spl=0;
    scanf("%[^\n]s",var);
    for(len=0;var[len];len++);
   
    if(len>=8) { 
        for(int i=0;var[i]!=0;i++){
          if((var[i]>=97) && (var[i]<=122))  
            cap++;
          else if((var[i]>=65) && (var[i]<=90))  
            small++;
          else if((var[i]>=48) && (var[i]<=57))  
            num++;
          else
            spl++;
        }
        if((cap>=1) && (small>=1) && (spl>=1) && (num>=1))
            flag=1;
    }
    (flag==0)?printf("Invalid"):printf("Valid");
    return 0;
}


// ip: krithiiKA@2002
// op: Valid

// ip: krithika
// op: Invalid
