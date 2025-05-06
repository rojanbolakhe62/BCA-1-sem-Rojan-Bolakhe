//area of sphere
//#include<stdio.h>
//#define pi 3.14
  //  int main(){
    //    float r,surface_area,volume;
    //printf("enter the radius:");
    //scanf("%f",&r);
    //surface_area=4*pi*r*r;
    //volume=4.0/3.0*pi*r*r*r;
    //printf("the surface area  is %f\n",surface_area);
    //printf("the volume  is%f\n",volume);  
      //  return 0;
  //  }
    //area of cylinder
    //area of cylinder
#include<stdio.h>
#define pi 3.14
    int main(){
        float r,h,surface_area,volume;
    printf("enter the radius and height:\n");
    scanf("%f%f",&r,&h);
    surface_area=2*pi*r*(r+h);
    volume=pi*r*h;
    printf("the surface area is %.2f\n",surface_area);
    printf("the volume is %.2f\n",volume); //.2 is fixed
        
        
        
        return 0;
    }
    

