#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; ++i)
    {
        int basic_salary;
        scanf("%d", &basic_salary);

        double DA;
        double HRA;

        if (basic_salary < 1500)
        {
            HRA = (double)basic_salary * 0.1;
            DA = (double)basic_salary * 0.9;
        }
        else
        {
            HRA = 500;
            DA = (double)basic_salary * 0.98;
        }

        double gross_salary = (double)basic_salary + HRA + DA;

        printf("%.2f\n", gross_salary);
    }

    return 0;
}