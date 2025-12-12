#include "Student.h"
#include "GradeReport.h"
#include <iostream>
using namespace std;

int main() {
    Student s1("Alice Johnson", 101, 420);
    Student s2("Bob Singh", 102, 385);

    GradeReport report("ESE 224 - Midterm Results", "2025-09-06\n");

    report.printHeader();
    report.printRow(s1);
    report.printRow(s2);

    double averageMarks, averagePercent;
    Student::computeAverages(s1, s2, averageMarks, averagePercent);

    report.printFooter(averageMarks, averagePercent);

    return 0;
}