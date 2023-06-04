// C++ program to calculate the average marks of two students 2 
#include <iostream>
using namespace std;
class Student 
{
    public:
        double marks;
    // constructor to initialize marks
     Student (double m) 
     {
        marks = m;
    }
    
 }; // class body ends
 // function that has objects as parameters

void calculateAverage (Student s1, Student s2) 
    {
        double average = (s1.marks + s2.marks) / 2; 

        // calculate the average of marks of s1 and 52

        cout << "Average Marks = " << average << endl;
    }

int main() 
{
    Student student1(76.0), student2(96.0); // pass the objects as arguments 
    calculateAverage (student1, student2);
    return 0;
}