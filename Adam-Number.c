
#include <stdio.h>
int reverse(int n);
int reverse(int n){
    int temp=n,rem=0,rev=0;
    while(n){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    return rev;
}

int main()
{
    int n;
    scanf("%d",&n);
    int rev = reverse(n);
    (reverse(rev*rev)==(n*n))?printf("Adam number"):printf("Not an Adam number");
    return 0;
}

// ip: 12
// op: Adam number

// ip: 15
// op: Not an Adam number
