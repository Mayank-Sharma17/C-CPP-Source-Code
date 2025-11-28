#include <stdio.h>

char grade(float arr[])
{
    float sum = 0;
    char g;

    for (int i = 0; i < 2; i++)
        sum += arr[i];

    if (sum >= 90)
        g = 'A';
    else if (sum >= 80)
        g = 'B';
    else if (sum >= 70)
        g = 'C';
    else if (sum >= 60)
        g = 'D';
    else if (sum >= 50)
        g = 'E';
    else
        g = 'F';

    return g;
}

struct student
{
    char name[20];
    int roll;
    float marks[2];
    char grade;
};

int main()
{
    struct student stu[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", stu[i].name);

        printf("Roll: ");
        scanf("%d", &stu[i].roll);

        printf("Marks in 2 subjects: ");
        scanf("%f %f", &stu[i].marks[0], &stu[i].marks[1]);

        stu[i].grade = grade(stu[i].marks);

        printf("------------------------------------------\n");
    }

    // printing the student detials
    for (int i = 0; i < 5; i++)
    {
        printf("Details of student %d:\n", i + 1);
        printf("Name: %s\n", stu[i].name);
        printf("Roll: %d\n", stu[i].roll);
        printf("Marks in 2 subjects: %f %f\n", stu[i].marks[0], stu[i].marks[1]);
        printf("Grade : %c\n", stu[i].grade);
        printf("------------------------------------------\n");
    }

    return 0;
}
