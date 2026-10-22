#include<stdio.h>
int main()
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
return 0;
}
