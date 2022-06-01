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

void derefrenPoin(void){
    //de-referencing pointer
    int x = 5;
    int* y = &x;
    cout<<"value of x = "<<x<<endl;
    cout<<"address of y = "<<y<<endl;
    cout<<"value of y = "<<*y<<endl;
}

//complex no overloading
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(){
            real=0;
            imag=0;
        };
        Complex(int r, int i){
            real=r;
            imag=i;
        }
        void print(){
            cout<<  real << " + "<< imag << " i "<<endl;
        };
        Complex operator +(Complex c){
            Complex temp;
            temp.real = real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        };

};

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

    // char* x = "C++";
    // cout<<"string x is "<<x<<endl;
    // cout<<"derefrenced char pointer is "<<*x<<endl;
    // x++;
    // cout<<"string after inc is "<<x<<endl;
    // cout<<"derefrenced char pointer is "<<*x<<endl;


    // int num = 1;
    // do{
    //     cout<<"num "<<num<<endl;
    //     num++;
    // }
    // while( num<=10);


//complex no overloading
    // Complex c1(3,3);
    // Complex c2(4,4);
    // Complex c3 = c1+c2;
    // c1.print();
    // c2.print();
    // c3.print();

};