
/* hw17main.c
 * Teal Hoffman
 * EE 160
 * 10/14/24
 * This is the main function of the multiple files for hw17
 */

#include <stdio.h>
#include "circle.h"

int main()  {
        double radius;
        // Input radius
        printf("Please enter the radius in cm: ");
        scanf("%lf", &radius);

        printf("------------------------------------\n For a radius of %.2lf\n", radius);
        printf("The area would be %.2lf \n", Area(radius));
        printf("The circumference would be %.2lf \n", Circumference(radius));

        return 0;
}
