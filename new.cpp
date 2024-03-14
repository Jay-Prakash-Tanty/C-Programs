#include <iostream>
using namespace std;

int main()
{
    int clas; 
    float pres;
    cout <<"Enter the numbers of classes held:";
    cin  >> clas;
    cout <<"Enter the number of classes attended:";
    cin >> pres;
    float f=(pres/clas)*100;
    cout <<"Percentage of class attended:" << f;
    if(f>=75){
    cout <<"\nstudent is allowed to sit in exam";}
    else{
    cout <<"\nStudent is not allowed to sit in exam";
    }
    return 0;
}