#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
    private:
        string name;
        int rollNo;
        int totalMarks;

    public:
        // Constructors
        Student();
        Student(const string& name, const int rollNo, const int totalMarks);

        // Getters
        string getName() const;
        int getRollNo() const;
        int getTotalMarks() const;
        double percentage() const;
        static void computeAverages(const Student& s1, const Student& s2, double& averageMarks, double& averagePercent);
};

#endif