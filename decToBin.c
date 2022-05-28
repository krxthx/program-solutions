// Decimal to Binary
#include<stdio.h>
int main()
{
 int num;
 scanf("%d",&num);
 printf("%d",decToBin(num));
 return 0;
}
int decToBin(n){
  if(n==0) return 0;
  else return (n%2)+(10*decToBin(n/2));
}
