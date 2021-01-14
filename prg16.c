#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cm2inch(double cm) {
double inch;
inch = cm / 2.54;
return inch; }
int main() {

printf("%2f", cm2inch(5));
return 0;  }