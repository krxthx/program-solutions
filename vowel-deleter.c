#include <stdio.h>

void vowel_deleter(char *p){
    int i,k,c=0;
    for(i=0;*(p+i)!=0;){
        if(*(p+i)=='a' || *(p+i)=='e' || *(p+i)=='i' || *(p+i)=='o' || *(p+i)=='u'){
            c++;
            if(c>3){
                for(k=i;*(p+k)!=0;k++){
                    *(p+k) = *(p+k+1);
                }
            }
            else{
                i++;
            }
        }else{
            i++;
        }
    }
}

int main()
{
    char str[30];
    char *p = str;
    scanf("%[^\n]s",str);
    vowel_deleter(p);
    for(int i=0;str[i]!=0;i++)
    printf("%c",*(p+i));
    return 0;
}


// ip: hello how are you
// op: hello how r y
