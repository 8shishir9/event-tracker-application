#include <iostream>
#include "event.h"
using namespace seneca;



Event::Event(const Event &e){




};


Event& Event::operator=(const Event &e){




};
void Event::display(){
    static int COUNTER[2]={0,0};
    COUNTER[0]++;

if(description[0]!='\0'){
std::cout<<COUNTER[0]<<hhmmss(eventStart)<<" => "<< description<< std::endl;

}
else{
std::cout<<COUNTER[0]<<". | No Event |"<<std::endl;
}

};

 void Event::set(char* str=nullptr){
if(str!=nullptr && str[0]!='\0'  )
{  strncpy(description,str,strlen(description)-1);
        description[sizeof(description)-1]='\0';

 
}
else {   description[0]='\0';

}




};
 char* Event::hhmmss(int eventStart){
static char buffer[9];
 int hours = eventStart / 3600;
    int minutes = (eventStart % 3600) / 60;
    int seconds = eventStart % 60;
    snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d", hours, minutes, seconds);
return buffer;

 
 }

;