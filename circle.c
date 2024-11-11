
/* circle.c
 * Teal Hoffman
 * EE 160
 * 10/14/24
 * This is one of the three files for hw 17. This one will have all the user defined functions
 */

#include "circle.h"

double Area(double input) {
    return PI*(input*input);
}

double Circumference(double input) {
    return 2*PI*input;
}
