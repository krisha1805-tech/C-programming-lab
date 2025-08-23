//find out net salary where net salary=gross salary+allowances-deductions. If gross salary>10000, allowances are 10%, deductions are 3%. If gross salary>5000, allowances are 7%, deductions are 2%

#include <stdio.h>
int main()
{
    float gross_salary, allowances, deductions, net_salary;
    printf("Enter the gross salary: ");
    scanf("%f", &gross_salary);
    if (gross_salary > 10000)
    {
        allowances = gross_salary * 0.10;
        deductions = gross_salary * 0.03;
    }
    else if (gross_salary > 5000)
    {
        allowances = gross_salary * 0.07;
        deductions = gross_salary * 0.02;
    }
    net_salary = gross_salary + allowances - deductions;
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Allowances: %.2f\n", allowances);
    printf("Deductions: %.2f\n", deductions);
    printf("Net Salary: %.2f\n", net_salary);
    return 0;
}
