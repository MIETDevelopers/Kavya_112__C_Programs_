#include <stdio.h> // 
int main(){
    float side, area_Square, area_Circle,radius,length,breadth,area_Rectangle,perimeter_Rectangle,circumfernce,perimeter_Square;
    printf("Enter  of side of square\n");// Read the statment
    scanf("%f", &side);// output statment
    area_Square = side * side; // logic (formula) 
   perimeter_Square=4*side; // logic (formula)
	 printf("\nEnter the radius of Circle : ");
	scanf("%f", &radius);
	area_Circle = 3.14 * radius * radius;// logic (formula)
	circumfernce=2*(3.14*radius);// logic (formula)
	printf("\nEnter the Length of Rectangle : ");
   scanf("%f", &length);
  printf("\nEnter the Breadth of Rectangle : ");
   scanf("%f", &breadth);
 
   area_Rectangle = length * breadth;// logic (formula)
   
   perimeter_Rectangle=2*(length+breadth); // logic (formula)
   printf("Area of square : %f\n", area_Square);
   printf("perimeter of Square :%f\n",perimeter_Square);
	printf("\n Area of Circle : %f", area_Circle);
	printf("\nCircumferene of circle is : %f",circumfernce);
	 printf("\nArea of Rectangle : %f", area_Rectangle);
   printf("\nPerimeter of Rectangle : %f", perimeter_Rectangle);

	return 0;
}

