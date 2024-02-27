#include <stdio.h>

struct comp
{
    double real;
    double img;
};

void print_comp(struct comp c)
{
    printf("%0.1lf + %0.1lfi\n\n", c.real, c.img);
}

struct comp add_comp(struct comp a, struct comp b)
{
    printf("Additon of Complex:\n");
    struct comp ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;
    return ans;

}
struct comp multiply_comp(struct comp a, struct comp b)
{
    printf("Multiplication of Complex:\n");

    struct comp ans;
    ans.real = a.real * b.real - a.img * b.img;
    ans.img = a.real * b.img + b.real * a.img;
    return ans;

}
int main()
{
    struct comp c1 = {5.9, 3.1};
    struct comp c2 = {-2.5, 3.7};

    print_comp(add_comp(c1, c2));
    print_comp(multiply_comp(c1, c2));
    return 0;
}
