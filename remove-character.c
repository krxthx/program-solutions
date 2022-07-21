#include <stdio.h>
int main ()
{
    char var[50];
    char ch[2];
    int f;
    printf ("Enter s=");
    scanf ("%s", var);
    printf ("\nEnter e=");
    scanf ("%s", ch);
    for(int i=0;var[i]!=0;i++){
      if(var[i]==ch[0])
      {
           var[i]=i+1;
      }
    }
    printf("\n%s",var);
    return 0;
}

// Enter s=krithika
// Enter e=k
// rithia
