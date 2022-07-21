#include <stdio.h>
#include <string.h>

int main ()
{
  int n;
  printf("Enter n = ");
  scanf("%d",&n);
  int a[n];
  int b[10]={0};
 
  for(int i=0;i<n;i++){
      printf("Element %d = ",i+1);
      scanf("%d",&a[i]);
  }
 
  for(int i=0;i<n;i++){
      b[a[i]]++;
  }
   for(int i=0;i<=9;i++){
      printf("\n%d = ",i);
      printf("%d times",b[i]);
  }
  return 0;
}
