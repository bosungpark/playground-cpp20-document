// math.h
#ifndef MATH_H
#define MATH_H

double square(double x);  // An abbreviated function template

const double lambda{ 1.303577269034296391257 };   // Conway’s constant

// without 'export' Module-local function (not exported)
bool isOdd(int x);

int getOddity(int x);

#endif