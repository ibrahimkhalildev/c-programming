#include "stdio.h"
#include "stdbool.h"

struct food
{
    char name[100];
    double prince;
    double tax;
    int f_code;
};
struct food input_foods()
{
    struct food single_food;
    printf("Enter Food name, Price, Food Code: ");
    scanf(" %s %lf %d", single_food.name, &single_food.prince, &single_food.f_code);
    single_food.tax = single_food.prince * .05;
    return single_food;
};

void display_food(struct food f[], int sz)
{
    printf("\n_________________________\n");
    for (int i = 0; i < sz; i++)
    {
        printf("\n_________________________\n");
        printf("Food Name: %s\n", f[i].name);
        printf("Price: %0.2lf\n", f[i].prince);
        printf("Tax: %0.2lf\n", f[i].tax);
        printf("Code: %d\n", f[i].f_code);
        printf("\n_________________________\n");
    }
    printf("\n_________________________\n");
}

bool check_food_code(struct food f[], int sz, int code)
{
    bool chk = false;
    for (int i = 0; i < sz; i++)
    {
        if (f[i].f_code == code)
        {
            chk = true;
            break;
        }
    }
    return chk;
}

void display_orderd_food(struct food f[], int sz, int ordered_food[], int order_size)
{
    double total_price = 0;
    for (int i = 0; i < order_size; i++)
    {
        int food_code = ordered_food[i];

        struct food current_food;

        for (int k = 0; k < sz; k++)
        {
            if (f[k].f_code == food_code)
            {
                current_food = f[k];
            }
        }
        printf("Food Name = %s, food Price = %0.2lf\n", current_food.name, current_food.prince);
        total_price+= current_food.prince;
    }
    printf("__________________________\n");
    printf("Total Price = %0.2lf", total_price);
}
int main(void)
{
    printf("How many Dishes have you = ");
    int n;
    scanf("%d", &n);
    struct food food_items[n];

    for (int i = 0; i < n; i++)
    {
        food_items[i] = input_foods();
    }

    display_food(food_items, n);

    int ordered_food[100];
    int idx = 0;

    printf("Order your food by entre Food Code or enter 0 for exit: ");

    int food_code;
    while (scanf("%d", &food_code))
    {
        if (food_code == 0)
            break;
        display_food(food_items, n);

        while (check_food_code(food_items, n, food_code) == false)
        {
            printf("Invalid Food Code, Please try again!\n");
            printf("Order your food by entre Food Code or enter 0 for exit: ");
            scanf("%d", &food_code);

            if (food_code == 0)
                break;
        }
        if (food_code == 0)
            break;
        if (check_food_code(food_items, n, food_code) == true)
        {
            ordered_food[idx] = food_code;
            idx++;
        }
        printf("Order your food by entre Food Code or enter 0 for exit: ");
    }
    display_orderd_food(food_items, n, ordered_food, idx);
    return 0;
}
