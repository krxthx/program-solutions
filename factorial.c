// Problem Statement:
// Write a program to find the factorial of the number using recursion


#include<stdio.h>
int factorial(n){
  if((n==0)||(n==1))
  return 1;
  else return n*factorial(n-1);
}
int main()
{
 int num;
 scanf("%d",&num);
 printf("%llu",factorial(num));
 return 0;
}
