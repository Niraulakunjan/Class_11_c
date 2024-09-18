#include<stdio.h>
int main(){    
int i=0;  
int marks[5];   
printf("Enter marks"); 
for(i=0;i<5;i++){   // 0 1 2 3 4 5
scanf("%d \n",&marks[i]);  
}
for(i=0;i<5;i++){   // 0 1 2 3 4 5
printf("Entered marks are");
printf("%d \n",marks[i]);  
}
return 0;
}  