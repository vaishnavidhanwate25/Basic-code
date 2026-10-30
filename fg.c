#include<stdio.h>
int main(){
int a,b,c;
printf("enter the values:");
scanf("a is:%d\n b is:%d\n cis:%d",&a,&b,&c);
if(a>=b && a>=c){
printf("a is greater");
}
elseif(b>=a && b>=c){
printf("b is greater");
}
else{
printf("c is greater");
}
}
