/*program to prompt user to enter radius and height then calculate volume and surface area.
Name: Gabriel Dawn 
Reg No:PA106/G/28836/25
*/
#include<stdio.h>
#define pi 3.142
int main()

{
	float height,radius,surface_area,volume;
	printf("Enter height: ");
	scanf("%f",&height);
	printf("Enter radius: "); 
	scanf("%f",&radius);
	 // volume
	 volume =pi*radius*radius*height;
	 //surface_area
	 surface_area=pi*2*radius*radius*2*pi*radius*height;
	  printf("\n volume is :%f",volume);
	  printf("\n surface_area is:%f\n",surface_area);
	 return 0;
	
}