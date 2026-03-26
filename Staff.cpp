#include "Staff.h"
#include "AccessCard.h"
#include <iostream>
using namespace std;

//constructor 

   Staff::Staff(string name, int memberID, double salary, AccessCard card)
    : UniversityMember(name, memberID), salary(salary), card(card)
    {
        
    }
//displaying the role 
void  Staff::displayRole(){
    cout<<"Role: Staff"<<endl;
}
//displaying card
void Staff:: displayCard(){
cout<<"accesscard: "<<card.getCardID()<<endl;
}
//getter for salary

double Staff:: getSalary(){
return salary;
}