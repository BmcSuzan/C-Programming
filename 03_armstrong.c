#include<stdio.h>
int main() {
 int num,orginalNum,rem,result;
 printf("Enter a number : ");
 scanf("%d",&num);
orginalNum = num;
while(num !=0){
    rem = num %10;
    result = result+ rem*rem*rem;
    num = num/10;
}
if(result == orginalNum){
printf("It is armstrong number");
}
else {
    printf("it is not a armstrong number");
}
return 0;
}