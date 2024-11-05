#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee employees[100];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);
  
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nID\tName\t\tAge\tSalary\n");
    printf("------------------------------------\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("%d\t%s\t\t%d\t%.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }

}
