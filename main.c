#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Coordinate
{
    float x;
    float y;
};

int main()
{
    struct Coordinate point;
    float t;

    printf("X\t\tY\n");
    printf("==========\t==========\n");

    // Calculate ellipse coordinates from t=0 to t=10
    for (t = 0.0; t < 10.0; t += 0.1)
    {
        point.x = 20 - 6 * cos(t);
        point.y = 15 + 2 * sin(t);
        printf("%f\t %f\n", point.x, point.y);
    }

    return 0;
}
