// Problem Statement:
// Write a program to find the sum of digits of the given number using recursion.


#include<stdio.h>
int sumOfDigits(n){
  if(n==0)
  return 0;
  else
  return ((n%10)+sumOfDigits(n/10));
}
int main()
{
 int num;
 scanf("%d",&num);
 printf("%d",sumOfDigits(num));
 return 0;
}
