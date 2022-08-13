#include <stdio.h>
#include <string.h>

struct employee
{
    int employee_id;
    char employee_name[50];
    int employee_salaray;
};

struct employee employee;

int main()
{
    int id = employee.employee_id = 102145;
    int salary = employee.employee_salaray = 50000;
    strcpy(employee.employee_name, "Preet");

    printf("Employee id is %d\n", id);
    printf("Employee name is %s\n", employee.employee_name);
    printf("Employee salaray is %d\n", salary);

    return 0;
}