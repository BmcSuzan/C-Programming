#include<stdio.h>
int main() {
 int i,num, start=13;
 printf("Enter the nth term: ");
 scanf("%d",&num);
 for(i=1;i<=num;i++){
    printf("%d\t",start);
    if(i%2==0){
        start=start/2;
    }
    else{
        start= (3*start) +1;
    }
 }
return 0;
}