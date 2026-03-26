#include "Department.h"
#include <iostream>
using namespace std;
#include "UniversityMember.h"


//constructor 
Department::Department(string departmentName){
    this->departmentName=departmentName;
    memberCount=0;
}

//adding member 

   void Department::addMember(UniversityMember* member){
if(memberCount>=50){
    cout<<"not enough space to add memeber"<<endl;
}
else{
    members[memberCount]=member;
    memberCount++;
}
   }
   //displaying the roles in the department 

    void Department::displayAllRoles(){
        for(int i=0;i<memberCount;i++){
            members[i]->displayRole();
        }
    }