#include <iostream>
using namespace std;
class Student
{
    public:
    int rno;
    char name[30];
    float mark;
    
        void readData()
        {
            cout << "Enter the Roll No: ";
            cin >> rno;
            cout << "Enter the Name: ";
            cin >> name;
            cout << "Enter the Total Mark: ";
            cin >> mark;
        }
        void writeData()
        {
            cout <<"\n===============\nStudent Details\n===============\n";
            cout << "Roll No: "<< rno << endl;
            cout << "Name: "<< name << endl;
            cout << "Mark: "<< mark << endl;
        }
};