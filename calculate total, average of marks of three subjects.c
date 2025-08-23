//calculate total, average of marks of three subjects. Give following grades to the student. If average >= 70, distinction, >= 60, first, >= 50, second, >= 35, third class, otherwise fail. If student secures ,35 marks in any subject then declare student fail

#include <stdio.h>
int main()
{
    int m1, m2, m3;
    int total;
    float average;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    if (m1 < 35 || m2 < 35 || m3 < 35)
    {
        printf("Result: FAIL\n");
    }
    else
    {
        total = m1 + m2 + m3;
        average = total / 3;
        printf("Total Marks = %d\n", total);
        printf("Average Marks = %.2f\n", average);
        if (average >= 70)
        {
            printf("Grade: Distinction\n");
        }
        else if (average >= 60)
        {
            printf("Grade: First Class\n");
        }
        else if (average >= 50)
        {
            printf("Grade: Second Class\n");
        }
        else if (average >= 35)
        {
            printf("Grade: Third Class\n");
        }
        else
        {
            printf("Result: FAIL\n");
        }
    }
    return 0;
}
