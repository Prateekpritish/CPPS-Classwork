#include<stdio.h>
#include<string.h>

struct student 
    {
        char name[25];
        int age;
        char grade;
    };

void student_details(struct student);

int main()
{
    
    struct student s1 = {"Pritish Sarkar",23,'A'};

    student_details(s1);

}

void student_details(struct student s)
{
    printf("Name of the student : %s\n",s.name);
    printf("Age : %d\n",s.age);
    printf("Grade : %c\n",s.grade);
}
