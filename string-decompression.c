#include <stdio.h>
int main()
{
char b[100];
int c=0;
scanf("%s",b);
for(int i=0;i<b[i]!=0;i++) {
    if(b[i]==b[i+1])
        c++;
    else {
        printf("%c%d",b[i],c+1);
        c=0;
    }
}
return 0;
}

// ip: aaaaaaaaaaannnnnnnnnnnnnniiiiqqq.../
// op: a11n14i4q3.3/1
