#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee
{
    int employee_id;
    char employee_name[50];
    int employee_salaray;
};

struct employee e[5];

int main()
{
    for (int i = 1; i < 6; i++)
    {
        if (i == 1)
        {
            printf("For %dst employee: \n", i);
        }
        else if (i == 2)
        {
            printf("For %dnd employee: \n", i);
        }
        else if (i == 3)
        {
            printf("For %drd employee: \n", i);
        }
        else
        {
            printf("For %dth employee: \n", i);
        }

        printf("Enter your employee id: ");
        scanf("%d", &e[i].employee_id);
        getchar(); // For taking "enter" input
        printf("Enter your name: ");
        fgets(e[i].employee_name, 50, stdin);

        printf("Employee id is %d\n", e[i].employee_id);
        printf("Employee name is %s\n", e[i].employee_name);
    }

    return 0;
}