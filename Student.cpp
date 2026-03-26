#include "Student.h"
#include <iostream>
using namespace std;

//constructor 
Student::Student(string name,int memberID,double cgpa):UniversityMember(name,memberID){
    this->cgpa=cgpa;
}

//getter for cgpa 
double Student::getCGPA(){
    return cgpa;
}

//updateCgpa 
void  Student::updateCGPA(double newCGPA){
if(newCGPA>0.0){
    cgpa=newCGPA;
}
else{
    cout<<"CGPA cannot be negative"<<endl;
}
}

void Student::displayRole() {
  cout<<"Role: Student"<<endl;}