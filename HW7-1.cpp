#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
int mid1,mid2;
float final;
char name[50];
} Student;

float result(Student s);

int main() {
int passGrade = 50;
int mid1,mid2;
float final;
char name[50];
printf("Enter the name of the student: ");
scanf("%s", name);

printf("Enter 1st midterm grade: ");
scanf("%d", &mid1);

printf("Enter 2nd midterm grade: ");
scanf("%d", &mid2);

printf("Enter final grade: ");
scanf("%f", &final);

Student s;
s.mid1 = mid1;
s.mid2 = mid2;
s.final = final;
strcpy(s.name, name);
/*It couldn't work directly 
I found strcpy function 
I equated the name in the main function 
to the name in the struct*/
float grade = result(s);
printf("The student's final grade is: %.1f\n", grade);

if (passGrade <= grade) {
	printf("The student passed.\n");

} 
else {
   printf("The student failed.\n");
}

return 0;
}

float result(Student s) {
float grade = 0.3 * (s.mid1 + s.mid2) + 0.4 * s.final;
return grade;
}

