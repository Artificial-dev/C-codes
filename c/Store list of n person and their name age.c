#include <stdio.h>
#include <string.h>

// Define a struct for a person
struct person {
    char name[50];
    int age;
};

int main() {
    int n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);

    // Create an array of persons with n elements
    struct person people[n];

    // Read in the data for each person
    for (int i = 0; i < n; i++) {
        printf("Enter the name of person %d: ", i+1);
        scanf("%s", people[i].name);
        printf("Enter the age of person %d: ", i+1);
        scanf("%d", &people[i].age);
    }

    // Sort the array based on the person's age using bubble sort
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (people[j].age > people[j+1].age) {
                // Swap the positions of the two persons in the array
                struct person temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }

    // Print the sorted list of persons
    printf("\nList of persons sorted by age:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    return 0;
}
