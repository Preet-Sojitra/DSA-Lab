// Implement following nested structure in C
/* Organisaion
        - organisation_id
        - organisation_name
        - employee
            - employee_id
            - employee_name
            - employee_salary
*/

#include <stdio.h>
#include <string.h>

struct organisation
{
    int organisation_id;
    char organisation_name[50];

    struct employee
    {
        int employee_id;
        char employee_name[50];
        int employee_salary;
    } e[2];
};

struct organisation org[2];

#include <stdio.h>
int main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter organisation %d id: ", i + 1);
        scanf("%d", &org[i].organisation_id);
        getchar();
        printf("Organisation Name: ");
        fgets(org[i].organisation_name, 50, stdin);
        printf("Enter its employees details:\n");
        for (int j = 0; j < 2; j++)
        {
            printf("Details of %d employee\n", j + 1);
            printf("ID: ");
            scanf("%d", &org[i].e[j].employee_id);
            getchar();
            printf("Name: ");
            fgets(org[i].e[j].employee_name, 50, stdin);
            printf("Salary: ");
            scanf("%d", &org[i].e[j].employee_salary);
        }
    }

    printf("/**********************/");
    for (int i = 0; i < 2; i++)
    {
        printf("\nOrganisation %d id is: %d\n", i + 1, org[i].organisation_id);
        printf("Organisation %d name is: %s\n", i + 1, org[i].organisation_name);
        printf("Its Employees details are: \n");
        for (int j = 0; j < 2; j++)
        {
            printf("Employee %d's details are: ", j + 1);
            printf("ID is: %d\n", org[i].e[j].employee_id);
            printf("Name is: %s\n", org[i].e[j].employee_name);
            printf("Salary is: %d\n", org[i].e[j].employee_salary);
        }
    }
    return 0;
}
