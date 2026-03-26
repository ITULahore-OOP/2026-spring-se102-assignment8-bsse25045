#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;
#include "universitymember.h"
#include "accessCard.h"

class Staff: virtual public UniversityMember{
private:
double salary;
 AccessCard card;
 public:

Staff(string name, int memberID, double salary, AccessCard card);
double getSalary();
void displayRole() override ;
void displayCard();


};










#endif 