#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, m, r, v;
    float q;
    a = 7;
    b = 5;
    c = a + b;        // Add
    d = a - b;        // Subtract
    m = a * b;        // Multiply
    q = (float)a / b; // Divide
    r = a % b;        // Remainder (Bhag shes);
    float w = 52.25484;
    v = pow(a, b); // Power
    float s;
    s = sqrt(a); // Squire Root

    printf("Summation = %d\nDifferences = %d\nMultiply = %d\nDivision = %f\nReminder = %d\n", c, d, m, q, r);
    printf("%f", q);
    printf("\nFloat = %f", w);
    printf("\nPower = %d", v);
    printf("\nSquire Root = %f", s);
    return 0;
}
