#ifndef GRADEREPORT_H
#define GRADEREPORT_H

#include <string>
#include "Student.h"
using namespace std;

class GradeReport {
    private:
        string title;
        string asOf;

    public:
        GradeReport();
        GradeReport(const string& title, const string& asOf);

        void printHeader() const;
        void printRow(const Student& s) const;
        void printFooter(double averageMarks, double averagePercent) const;
};

#endif
