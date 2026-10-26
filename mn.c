#include<stdio.h>
#include<string.h>
int main(){
    //challange 4
 int a=5,b=4;
   printf("the value of a is:%d\n",a);
    printf("the value of b is:%d\n",b);
    //challange 6
    char first[11];
    char last[10];
    int age;
    printf("enter first name:");
   fgets(first,11,stdin);
   printf("first name is:%s",first);
    printf("enter last name:");
   fgets(last,10,stdin);
   printf("last name is:%s",last);
    printf("enter age:");
    scanf("%d",&age);
     printf("you are %d year old",age);    
       //  for calculate area of square challange 7
         int side;
         printf("enter side:\n");
         scanf("%d",&side);
         printf("area of square is:%d",side*side);
       // challange 8 area of circle
        float pi=3.14,rad;
         printf("enter radius:\n");
        scanf("%f",&rad);
         printf("area of circle is:%f",pi*rad*rad);
       // challange 9 circumference of circle
        const float pi=3.14159;
              float rad;
         printf("enter radius:\n");
        scanf("%f",&rad);
         printf("circumference of circle is:%f",2*pi*rad);
         return 0;

}
