#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day, month, year;

}Birth;

typedef struct {
    Birth birth;
    int age;
    char name[100];
    float height;

}Person;

void printperson(Person pers) {
    puts("\tcompleted report!");
    printf("\tName: %s", pers.name);
    printf("\tAge: %d\n", pers.age);
    printf("\tHeight: %.2f\n", pers.height);
    printf("\tBirth: %d/%d/%d\n",pers.birth.day, pers.birth.month, pers.birth.year);
}

Person letperson() {
    Person person;

    printf("Enter your name: ");
    fgets(person.name, sizeof(person.name), stdin);

    printf("Enter your age: ");
    scanf("%d", &person.age);

    printf("Enter your height: ");
    scanf("%f", &person.height);

    printf("Enter your birth (d/m/a): ");
    scanf("%d%d%d", &person.birth.day, &person.birth.month, &person.birth.year);

    printf("Name: %s", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f\n", person.height);
    printf("Birth: %d/%d/%d\n", person.birth.day, person.birth.month, person.birth.year);

    return person;
}

int main(){

    Person person;
    person = letperson();
    printperson(person);



    return 0;
}