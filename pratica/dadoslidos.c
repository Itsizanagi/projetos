#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[100];
    float height;

}Person;

int main(){
    Person person;
    printf("Enter your name: ");
    fgets(person.name, sizeof(person.name), stdin);

    printf("Enter your age: ");
    scanf("%d", &person.age);

    printf("Enter your height: ");
    scanf("%f", &person.height);


    printf("Name: %s", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);


    return 0;
}