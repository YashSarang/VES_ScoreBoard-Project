/*Write an application which helps teachers in VESIT in efficiently and easily releasing IA scores to the students of respective class / course.*/
/*The Code isn't complete yet, I will keep it updating in the future*/


#include<stdio.h>
#include<conio.h>


//STRUCTURES
struct students
{
    char Name[20];
    int RollNo;
    char Div[5];
    struct subject
    {
        char name[20];
        int marks;
    }sub[5];
}student;

struct teachers
{
    char Name[20];
    char UserID[10];
    char Password[10];
    char Department[5];
}teacher;

struct classroom
{
    char Division[5];
    int students;
    //struct student[students]          {Nested structure to store all the info of students}
};

//Functions
/*
void input()
{                   development in progress
}
*/
void main()                         //basic working code as of now, will be updated later
{
    clrscr();
    printf("Welcome to VES_ScoreBoard");
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
