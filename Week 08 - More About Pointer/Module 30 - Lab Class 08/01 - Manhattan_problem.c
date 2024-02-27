#include <stdio.h>
struct point
{
    int x;
    int y;
};

int manhattan(struct point p1, struct point p2)
{
    int res = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return res;
}

int main()
{

    struct point p1;
    struct point p2;
    printf("input point 1 and 2 - Format Ex:(1,1) = \n");
    scanf("(%d,%d)\n", &p1.x, &p1.y);
    scanf("(%d,%d)", &p2.x, &p2.y);

    int ans = manhattan(p1, p2);

    printf("Manhattan Distance is %d\n", ans);

    return 0;
}
