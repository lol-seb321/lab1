#pragma once
#include <stdio.h>

// structure
struct Student {

	int student_ID;
	float avg;
	int g1, g2, g3;

};


// function prototypes

struct Student getMaxAverageStudent(struct Student* s, int n);

void readData(struct Student* students, int* c);
