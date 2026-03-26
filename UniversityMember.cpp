#include "UniversityMember.h"
#include <iostream>
using namespace std;

//CONSTRCUTOR 
UniversityMember::UniversityMember(string name,int memberID){
    this->name=name;
    this->memberID=memberID;
}
//DESTRUCTOR 
UniversityMember::~UniversityMember(){

}
//getter for name 
string UniversityMember:: getName(){
    return name;
}
//getter for memberID
int UniversityMember:: getMemberID(){
return memberID;}

