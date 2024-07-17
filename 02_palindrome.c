#include<stdio.h>
int main() {
 int num,orginalNum,rem,result;
 printf("Enter a number : ");
 scanf("%d",&num);
orginalNum = num;
while(num !=0){
    rem = num %10;
    result = (result*10)+ rem;
    num = num/10;
}
if(result == orginalNum){
printf("It is palindrome number");
}
else {
    printf("it is not a palindrome number");
}
return 0;
}