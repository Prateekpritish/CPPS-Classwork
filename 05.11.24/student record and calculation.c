#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
};

int main() {
    struct Student student;
    float total = 0, average;

  
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    
    printf("Enter name: ");
    scanf(" %[^\n]%*c", student.name); 
  printf("Enter marks for 3 subjects:\n");
  
  for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        total += student.marks[i];
    }

    
    average = total / 3;

    
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

}
