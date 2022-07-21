#include <stdio.h>
int main ()
{
    char var[100];
    int freq[100],j=0;
    int max=0,res=0,count=0;
    printf ("Enter s=");
    scanf ("%s", var);
   for(int i=0;var[i];i++){
       if(var[i]=='1')
       count++;
       
       else if(var[i]=='.')
       {
           freq[j]=count;
           j++;
           count=0;
       }
   }
   for(int i=0;i<j;i++){
       if(freq[i]>max){
           max = freq[i];
           res = i;
       }
   }
   printf("%d",res+1);
   return 0;
}

// ip: 11000.11101.00100.10101.11111
// op: 5
