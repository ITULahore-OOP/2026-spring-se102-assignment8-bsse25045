#include "TeachingAssistant.h"
#include <iostream>
using namespace std;



//CONSTRUCTOR 
TeachingAssistant::TeachingAssistant(std::string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours)
    : UniversityMember(name, memberID), // Must initialize virtual base here
      Student(name, memberID, cgpa),
      Staff(name, memberID, salary, card) 
{
    this->workingHours = workingHours;
}
//DISPLAYING ROLE 
void  TeachingAssistant::displayRole(){
    cout<<"Role: Teaching Assistant "<<endl;
}

//GRADING ASSIGNMENT LETTERGRADE
void TeachingAssistant::gradeAssignment(int score){
cout<<"numeric score: "<<score<<"/100"<<endl;
}
//GRADE ASSIGNMENT FOR LETTERGRADE 
void TeachingAssistant:: gradeAssignment(string letterGrade){
cout<<"letter grade: "<<letterGrade<<endl;

}

