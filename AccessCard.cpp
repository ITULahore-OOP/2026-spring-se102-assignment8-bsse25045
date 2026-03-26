#include "AccessCard.h"
#include <iostream>
using namespace std;

//constructor 

AccessCard::AccessCard(string cardID,int accessLevel  ){
    this->cardID=cardID;  
    this->accessLevel=accessLevel;

}
//getter for accesscard
	string AccessCard:: getCardID(){
return cardID;
    }
    //getter for accesslevel
	int AccessCard::getAccessLevel(){
        return accessLevel;
    }

    //displayingcard information
void AccessCard::displayCardInfo(){
    cout<<"CardID: "<<cardID<<endl;
    cout<<"AccessLevel: "<<accessLevel<<endl;
}


