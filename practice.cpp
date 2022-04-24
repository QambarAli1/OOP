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

// Recursion Function
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
};

void derefrenPoin(){
    //de-referencing pointer
    int x = 5;
    int* y = &x;
    cout<<"value of x = "<<x<<endl;
    cout<<"address of y = "<<y<<endl;
    cout<<"value of y = "<<*y<<endl;
}

int main(){
    // Student Student1("Qambar",57,3.90);
    // cout<<Student1.Eligible()<<endl;

    // Recursion Function

    // int a;
    // cout<<"Enter a number "<<endl;
    // cin>>a;
    // cout<<"Factorial of "<< a << " is "<<factorial(a)<<endl;
    // return 0;


    // char car[10] = "car array";
    // char* pointerCar = car; //stores first char address
    // cout<<"Pointer Car Array = "<< &pointerCar <<endl;
    // *pointerCar = 'j'; //changes first char by using pointer
    // cout<<"Pointer Car Array = "<< pointerCar <<endl;


    // char a[5] =  "ali";
    // char b[5] = "aun";
    // char* addB = b;
    // char* c = "elia";
    // char* d = "ali";
    // // d="ali";
    // // b="xli"; // does not work
    // c=d; // this works
    // cout<<"a : "<<a<<endl;
    // cout<<"b : "<<b<<endl;
    // cout<<"c : "<<c<<endl;
    // cout<<"d : "<<d<<endl;

    
    // derefrenPoin();


    




};