#include "GradeReport.h"
#include <iostream>
#include <iomanip>
using namespace std;

GradeReport::GradeReport() : title("Grade Report"), asOf("") {}

GradeReport::GradeReport(const string& title1, const string& var) : title(title1), asOf(var) {}

void GradeReport::printHeader() const {
    cout << left << setw(25) << title
        << right << setw(20) << asOf << endl;
    cout << left << setw(15) << "ID"
        << setw(20) << "Name"
        << right << setw(10) << "Marks"
        << setw(12) << "Percent" << endl;
    cout << string(57, '-') << endl;
}

void GradeReport::printRow(const Student& s) const {
    cout << left << setw(15) << s.getRollNo()
        << setw(20) << s.getName()
        << right << setw(10) << fixed << setprecision(2) << s.getTotalMarks()
        << setw(11) << fixed << setprecision(2) << s.percentage() << "%" << endl;
}

void GradeReport::printFooter(double averageMarks, double averagePercent) const {
    cout << string(57, '-') << endl; 
    cout << left << setw(35) << "Averages:"
        << right << setw(10) << fixed << setprecision(2) << averageMarks
        << setw(11) << fixed << setprecision(2) << averagePercent << "%" << endl;
}