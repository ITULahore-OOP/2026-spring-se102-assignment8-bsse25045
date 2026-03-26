#include "Department.h"
#include "AccessCard.h"
#include "Staff.h"
#include "Student.h"
#include "TeachingAssistant.h"
#include "TutoringSession.h"
#include "UniversityMember.h"

#include <iostream>
using namespace std;



int main(){





    AccessCard myCard("AB23", 2);

    //  Setting up  objects 
    Student* s1 = new Student("Ali", 1001, 3.9);
    TeachingAssistant* ta1 = new TeachingAssistant("Sara", 2002, 3.8, 1500.0, myCard, 10);

    //  Setup Aggregation (Department)
    Department se("Software Engineering");
    se.addMember(s1);
    se.addMember(ta1);


    se.displayAllRoles(); 


    TutoringSession sess1(101, 45.0, ta1, s1);
    TutoringSession sess2(102, 30.0, ta1, s1);
    
    TutoringSession combined = sess1 + sess2;
   cout << "Combined Session Duration: " << combined.getDuration() << " mins" <<endl;

    delete s1;
    delete ta1;









    return 0;
}