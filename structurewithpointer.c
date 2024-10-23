#include <stdio.h>

struct Student {
    char name[50];
    int age;
    char grade;
};


void display(struct Student *s) {
    printf("Student Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->age);
    printf("grade: %c\n", s->grade);
}

int main() {
    struct Student s1;

    printf("Enter name: ");
    scanf("%s", s1.name);  
    printf("Enter age: ");
    scanf("%d", &s1.age);
    getchar();       
    printf("Enter grade: ");
    scanf("%c", &s1.grade);

    display(&s1);

    return 0;
}
