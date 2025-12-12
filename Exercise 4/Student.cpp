#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Default constructor
Student::Student() : name(""), rollNo(0), totalMarks(0){}

// Parameterized constructor
Student::Student(const string& studentName, const int rollNumber, int marks)
    : name(studentName), rollNo(rollNumber), totalMarks(marks){
}

string Student::getName() const { return name; }
int Student::getRollNo() const { return rollNo; }
int Student::getTotalMarks() const { return totalMarks; }
double Student::percentage() const { return (totalMarks / 500.0) * 100.0; }
void Student::computeAverages(const Student& s1, const Student& s2, double& averageMarks, double& averagePercent) {
    averageMarks = ((s1.getTotalMarks() + s2.getTotalMarks()) / 2);
    averagePercent = ((s1.percentage() + s2.percentage()) / 2);
}