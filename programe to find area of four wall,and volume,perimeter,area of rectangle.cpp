#include<stdio.h>
 int main(){
 	int l,b,h,aofw,perimeter,areaofrectangle,volume;
 	printf("Enter length breath and height:\n");
	 scanf("%d%d%d",&l,&b,&h);
	 aofw=2*(l+b)*h;
	 perimeter=2*(l+b);
	 areaofrectangle=l*b;
	 volume=l*b*h;
	 printf("the area of four wall is %d\n",aofw);
	 printf("perimeter of room is %d\n",perimeter);
	 printf("area of rectangle is %d\n",areaofrectangle);
	 printf("volume of room is %d\n",volume);	 
	 return 0;
 }
