#include<stdio.h>
#include<string.h>

struct student 
    {
        char name[25];
        int age;
        char grade;
    };


void student_details(struct student s1[] , int count)
{
    int i;

    printf("student details are : \n");

    for(i=0;i<count;i++)
    {
      printf("Name of the student : %s\n",s1[i].name);
      printf("Age : %d\n",s1[i].age);
      printf("Grade : %c\n",s1[i].grade);
    }
}

int main()
{
    int total;
    int i;

    printf("enter the total number of students data you want to enter :\n");

    scanf("%d",&total);

    printf("Enter the details of the student:");

    struct student s1[total];

    for(i=0;i<total;i++)
    {
        scanf("%s %d %c",s1[i].name,&s1[i].age,&s1[i].grade);
    }

    student_details(s1 , total);

        
   

}