#include <stdio.h>

int main()
{
    int marks[9];
    int i;

    // Taking input
    for(i = 0; i < 9; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nGrades:\n");

    // Calculating grade
    for(i = 0; i < 9; i++)
    {
        printf("Subject %d: ", i + 1);

        if(marks[i] > 100 || marks[i] < 0)
            printf("Invalid\n");
        else if(marks[i] >= 90)
            printf("A+\n");
        else if(marks[i] >= 80)
            printf("A\n");
        else if(marks[i] >= 70)
            printf("B+\n");
        else if(marks[i] >= 60)
            printf("B\n");
        else if(marks[i] >= 50)
            printf("C+\n");
        else if(marks[i] >= 40)
            printf("C\n");
        else if(marks[i] >= 30)
            printf("D+\n");
        else if(marks[i] >= 20)
            printf("D\n");
        else if(marks[i] >= 10)
            printf("E\n");
        else
            printf("F\n");
    }

    return 0;
}