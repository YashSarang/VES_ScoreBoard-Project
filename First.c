/*Write an application which helps teachers in VESIT in efficiently and easily releasing IA scores to the students of respective class / course.*/
/*The Code isn't complete yet, I will keep it updating in the future*/


#include<stdio.h>
#include<conio.h>

struct classroom
{
    char Division[5];
    int students;
    //struct student[students]
};
void main()
{
    int classes,i,j;
    printf("\nEnter the number of classes : ");
    scanf("%d",&classes);
    getch();
    struct classroom division[classes];
    for (i=0;i<classes;i++)
    {
        printf("\nEnter the name of the class/division : ");
        scanf("%s",division[i].Division);
        printf("\nEnter the number of students in the class/division : ");
        scanf("%d",&division[i].students);
    }
    for (j=0;j<classes;j++)
    {
        printf("\nName of the class/division : %s",division[j].Division);
        printf("\nNumber of students in the class/division : %d",division[j].students);
    }
    getch();
}
