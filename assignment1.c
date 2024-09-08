//********************************************************
// assignment1.c
// Author: Margaret Kraemer
// Class: COP 3223, Professor Parra
// Purpose: This program asks the user for 4 number inputs, the first two will be (x1,y1) and will be
// coordinates to the center of a circle. The next two inputs will be (x2,y2), and they will mark a
// point on the circumfrance of the circle. With this information the program will find height, width, 
// distance between the two points, area, and perimeter of the circle.
// Output: (to the command line) A breif Message
// //********************************************************


// Header file for input output functions
#include <stdio.h>
#include <math.h>

// main function - where we will print the message
int main() {

    variables();
        // asking user for informaton to fill variavles
        printf("Enter your x1 %d\n",x1);
        scanf( "%d", &x1); 
        x1= input

        // asking user for informaton to fill variavles
        printf("Enter your y1 %d\n",y1);
        scanf( "%d", &y1); 
        y1=input

        // asking user for informaton to fill variavles
        printf("Enter your x2 %d\n",x2);
        scanf( "%d", &x2); 
        x2=input

        // asking user for informaton to fill variavles
        printf("Enter your y2 %d\n",y2);
        scanf( "%d", &y2); 
        y2=input

    width()
        double calculate_width(double x1, double y1, double x2, double y2) {
            // Calculate the radius
            double radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            // Calculate the diameter
            return 2 * radius;

    height()
        double calculate_height(double x1, double y1, double x2, double y2) {
            double height = y2 - y1;
            if (height < 0) {
                 height = -height;
        }
        return height;
        }
    distance()
        double calculate_distance(double x1, double y1, double x2, double y2) {
            // Calculate the difference in x and y coordinates
            double dx = x2 - x1;
            double dy = y2 - y1;
    
            // Calculate the distance using the Euclidean distance formula
            return sqrt(dx * dx + dy * dy);
        }

    area()
        double calculate_area(double x1, double y1, double x2, double y2) {
            // Calculate the radius using the distance formula
            double radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            // Calculate the area of the circle
            return M_PI * radius * radius;
        }
    permimeter()
        double calculate_perimeter(double x1, double y1, double x2, double y2) {
            // Calculate the radius using the distance formula
            double radius = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            // Calculate the perimeter (circumference) of the circle
            return 2 * PI * radius;
        }




    
return 0;
}