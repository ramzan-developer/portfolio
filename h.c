#include<stdio.h>
int main() {
    int i,n1=0,n2=1,n3;
    for(i=1;i<=10;i++){
        n3=n1+n2;
        n1=n2;
        n2=n3;
         printf("%d ,",n3);
    }
  return 0;
}