#include<stdio.h>


struct Book {
    char title[100];
    char author[100];
    int Year;
};


struct Library {
    struct Book books[100];  
    int Count;           
};

void displayLibrary(struct Library library) {
    printf("\nLibrary contains foolowing books:\n");
    for (int i = 0; i < library.Count; i++) {
        printf("  Title: %s\n", library.books[i].title);
        printf("  Author: %s\n", library.books[i].author);
        printf("  Publication Year: %d\n", library.books[i].Year);
    }
}

int main() {
    struct Library library;
    printf("Enter the number of books in the library: ");
    scanf("%d", &library.Count);


    for (int i = 0; i < library.Count; i++) {
        printf("Enter details for Book:\n");
        printf("  Title:\n author : \n published year: \n");
        scanf(" %s %s %d", library.books[i].title,library.books[i].author,&library.books[i].Year);  
        
    }


    displayLibrary(library);
}
