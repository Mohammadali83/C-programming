#include<stdio.h>
int main()
{
    int age;
    printf ("enter age");
    scanf("%d",&age);
    if(age>=8){
	
          printf("eligible");}
    else
         {
          printf("not eligible");
          printf("%d years to wait", 18-age);
         }
}
