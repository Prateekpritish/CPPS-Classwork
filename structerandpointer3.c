#include <stdio.h>


struct Student {
    char name[50];
    int age;
    char grade;
};

int main() {
    struct Student students[10];  
    struct Student* ptr = students;  
    int n;  

    
    printf("Enter the number of students (up to 10): ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf(" %s", (ptr + i)->name);  

        printf("Age: ");
        scanf("%d", &(ptr + i)->age); 
        
        getchar(); 

        printf("Grade: ");
        scanf("%c", &(ptr + i)->grade);  
    }


    printf("\nDisplaying student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", (ptr + i)->name);  
        printf("Age: %d\n", (ptr + i)->age);    
        printf("Grade: %c\n", (ptr + i)->grade); 
    }

    return 0;
}
