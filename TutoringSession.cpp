#include "TutoringSession.h"
#include <iostream>
using namespace std;

//CONSTRUCTOR 
TutoringSession::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student){
    this->sessionID=sessionID;
    this->durationMinutes=durationMinutes;
this->ta=ta;
this->student=student;
}
double TutoringSession::getDuration(){
 return durationMinutes;
}
//DISPLAYSESSION
void TutoringSession:: displaySession(){
    cout<<"SessionID: "<<sessionID<<endl;
    cout<<"DurationMinutes: "<<durationMinutes<<endl;
    cout<<"StudentName:  "<<student->getName()<<endl;
    ta->displayCard();
}
//OPERATOR OVERLOADING 
TutoringSession TutoringSession:: operator+(const TutoringSession& other){
return TutoringSession(sessionID,durationMinutes+other.durationMinutes,ta,student);
}

//OPERATOR OVERLOADING 
bool operator>(TutoringSession s1, TutoringSession s2){
 return s1.getDuration()>s2.getDuration();
}
