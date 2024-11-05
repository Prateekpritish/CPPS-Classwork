#include <stdio.h>

union Studentdetails {
    char grade;
    int studentID;
    float cgpa;
};

int main() {
    union Studentdetails details; 

    details.grade = 'A';
    printf("Student Grade: %c\n", details.grade);


    details.studentID = 12345;
    printf("Student ID: %d\n", details.studentID);

    details.cgpa = 3.75;
    printf("Student CGPA: %.2f\n", details.cgpa);


    printf("\nDemonstrating memory-efficient usage:\n");
    details.grade = 'B';
    printf("Updated Grade: %c\n", details.grade);
    printf("Memory now holds only the grade: %c\n", details.grade);
    

}

