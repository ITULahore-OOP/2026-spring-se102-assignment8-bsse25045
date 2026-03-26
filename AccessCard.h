#ifndef ACCESSCARD_H
#define ACCESSCARD_H

#include <iostream>
using namespace std;
class AccessCard{
private:
string cardID;
int accessLevel;
public:
AccessCard(){
cardID="pending";
accessLevel=0;

}
 AccessCard(string cardID,int accessLevel  );
string getCardID();
int getAccessLevel();
void displayCardInfo();

};


#endif 