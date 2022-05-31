All Permutations of a string

#include <stdio.h>
#include <string.h>

void swap(char a[], int i, int j)
{
char temp;
temp = a[i];
a[i] = a[j];
a[j] = temp;
}

void permute(char a[], int l, int r)
{
if (l == r){
printf("%s\n", a);}
else
{
for (int i = l; i <= r; i++)
{  
swap(a,l,i);
permute(a, l+1, r);
swap(a,l,i);
}
}
}

int main()
{
char str[] = "ABC";
int n = strlen(str);
permute(str, 0, n-1);
return 0;
}
