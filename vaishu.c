#include<stdio.h>
//count factor of number

int main(){ 
int n,count=0;
printf("value of n:");
scanf("\n%d",&n);
printf("factor of n is:");
for( int i=1;i<=n;i++){
   if(n%i==0){
  printf("\n%d",i);
count++;
   }
}g
printf("\nthe total no of factor:%d",count);
if(count==2){
printf("\nthe number is prime number");
}
else{
  printf("\nthe number is not a prime number");  
}
    return 0;
}
