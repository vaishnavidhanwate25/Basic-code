#include<stdio.h>
#include<string.h>
 int main(){
   //challange 1
   printf("* \n");
    printf("* * \n");
    printf("* * *\n");
    printf("* * * *\n");
printf("Right hand pyramid\n");
   printf("* * * *\n");
   printf("* * * \n");
   printf("* * \n");
   printf("* \n");
printf("reverse right hand pyramid\n");
 printf("      *\n");
 printf("    * *\n");
 printf("  * * *\n");
 printf("* * * *\n");
   printf("reverse left hand pyramid\n");
   //challange 3
   char name[20];
   printf(" enter your name:");
   fgets(name,sizeof(name),stdin);
   printf(" welcome %s to KG coding\n",name);
   //using loop
  int rows=10;
   for(int i=1;i<=rows;i++){
      for(int j=1;j<=i;j++){
        printf(j==i?"😊\n":"😊");
      }
   }
