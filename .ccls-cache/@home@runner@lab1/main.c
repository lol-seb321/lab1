// LAB 1 - COP 3502 - Spring 23
// Author Name: Sebastian Ferreira

/*
This program demonstrates an example of a structure, function and pointer to structure.
It reads data for N number of students id numbers and their scores for 3 courses. The
program reads those scores and output the same information and average score. Then it 
finds the maximum average the the student who obtained the max average.
*/ 

// Pre processor directives
#include "main.h"
#include <stdio.h>
#define MAX 500

// Structure for students

// To read the data into the struct
void readData(struct Student* students, int* c) {

	scanf("%d", c);
  
	for (int i = 0; i < *c; i++) {
		// Scan the input from the file
		scanf("%d %d %d %d", &students[i].student_ID, &students[i].g1, &students[i].g2, &students[i].g3);

		// Get the average for the students
		students[i].avg = (students[i].g1 + students[i].g2 + students[i].g3) / 3.0;

    printf("%f", students[i].avg);

		// Print the output 
		printf("%d %d %d %d %0.2f\n", students[i].student_ID, students[i].g1, students[i].g2, students[i].g3, students[i].avg);
	}
}

// To obtain the max average
struct Student getMaxAverageStudent(struct Student* s, int n) {

	int i, maxIDX = 0;
	float max = -1;

	// Loop through the students
	for (int i = 0; i < n; i++) {
		if (s[i].avg > max) {
			max = s[i].avg;
			maxIDX = i;
		}
	}

	return s[maxIDX];
	/*
	 If you find a new max bigger than the one in max update max idxand max

	for (int i = 0; i < n; i++) {
		if (max > maxIDX) {
			max = 
		}
	}

	// Outside the loop, you need to return the whole student instance so return s[maxIDX]
	*/

}

// Driver function
int main()
{
	// Struct array and allocating a VLA size of up to 500 students
	struct Student students[MAX];
	int i, n;

	readData(students, &n);

	struct Student max = getMaxAverageStudent(students, n);

	// Print statement at the end
	printf("Maximum Average is %0.2f and the student is %d", max.avg, max.student_ID);

	return 0;
}