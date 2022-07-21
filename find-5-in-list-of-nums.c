#include <stdio.h>
#include <string.h>

int main ()
{
  int n,rem=0,temp=0,flag=0, std=0;
  printf("Enter n = ");
  scanf("%d",&n);
  int a[n];
 
  for(int i=0;i<n;i++){
      printf("Element %d = ",i+1);
      scanf("%d",&a[i]);
  }
 
 for(int i=0;i<n;i++){
     while(a[i]){
      rem = a[i]%10;
      if(rem==5){
          flag=1;
          printf("\nFound with student %d",i+1);
      }
      a[i]/=10;
     }
 }
  if(flag==0)
  printf("Not Found");
  return 0;
}
