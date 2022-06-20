#include <string>
using namespace std;
class Student
{
private:
    int am, maxg, ming, a ,g[2];
    string oe;
public:
    Student();
    Student(int am, int g[2], string oe);
    void SetData();
    void PrintData();
    int max_grade();
    int min_grade();
    int average_grade();
    int getAverage();
    void compareStudents(Student ss);
    void findOlder(Student ss);
    float findStudentsAvg(Student ss);

};
