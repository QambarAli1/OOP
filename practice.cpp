#include <iostream>
using namespace std;
class Student{
    public:
        string name;
        int rollNo;
        double gpa;
        Student (string stdName, int stdRollno, double stdGpa){
            name = stdName;
            rollNo = stdRollno;
            gpa = stdGpa;
            cout<<"Student Name : "<<stdName<<endl;
            cout<<"Student Roll No : "<<stdRollno<<endl;
            cout<<"Student GPA : "<<stdGpa<<endl;
        };
        bool Eligible(){
            if ( gpa >= 3.0){
                return true;
            }else{
                return false;
            };
        };
};
int main(){
    Student Student1("Qambar",57,3.90);
    cout<<Student1.Eligible()<<endl;
    return 0;
};