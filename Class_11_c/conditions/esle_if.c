// find you are child adult or old
#include <stdio.h>
int main()
{
int age;
printf("Enter your age: ");
scanf("%d",&age);
if(age >=5 && age<=15) //for post_child betwween 5-15
printf(" you are post_child");
 else if(age >=16 && age <=29)//for adult
 printf("you are adult");
else if(age >=30 && age <=100)// old
return 0;
}