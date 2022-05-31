// String Palindrome Checking using Recursion
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char a[],int l,int r){
    if(l>=r) {return 1;}
    else if(a[l]==a[r]) {return palindrome(a,l+1,r-1);}
    return 0;
}

int main(){
char str[30];
scanf("%s",str);

int n = strlen(str);
bool res = palindrome(str,0,n-1);
res?printf("Palindrome"):printf("Not a Palindrome");
return 0;
}
