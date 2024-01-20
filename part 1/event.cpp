//==============================================
// Name:           Shisir Bastakoti
// Student Number: 1395758221
// Email:          sbastakoti@myseneca.ca
// Section:        NHH
// Date:           2024-1-20
// Workshop:       Workshop1
//==============================================
// event.cpp
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#include <iostream>
#include "event.h"
#include <iomanip>
using namespace seneca;


 namespace seneca{
     size_t g_sysClock=0;

Event::~Event(){
    if (description!=nullptr){
delete[] this->description;
this->description=nullptr;
    }

}
Event::Event(){}
    

Event::Event(const Event &e){

*this=e;


}


Event& Event::operator=(const Event &e){
    if (this!=&e){
        this->eventStart=e.eventStart;
    
    if (this->description != nullptr) {
        delete[] this->description;
        this->description = nullptr;
    }
    if (e.description!=nullptr && e.description[0]!='\0'){
        this->description= new char[strlen(e.description)+1];
        strcpy(this->description,e.description);
    }}  
    return *this;
    } 
void Event::display(){
      static size_t _counter = 1;
      unsigned int hh = 0u, mm = 0u, ss = 0u;

    hh = eventStart / 3600;
    mm = eventStart / 60 % 60;
    ss = eventStart % 60;
    std::cout << std::setw(2) <<std::setfill(' ')<<_counter++<<". ";
 // 1. 00:02:55 => Computer starts 

if(description != nullptr && description[0]!='\0'){
 std::cout << std::setw(2) << std::setfill('0') << hh << ":" << std::setw(2) << mm << ":" << std::setw(2) << ss << " => " << description     << std::endl;
}
else{
      std::cout << "| No Event |" << std::endl;

} 

}

 void Event::set(char* str){
        if (description != nullptr) {
      delete[] description;
      description = nullptr;
    }
if(str!=nullptr && str[0]!='\0'  ){
  description = new char[strlen(str) + 1];
      strcpy(description, str);
      eventStart= ::g_sysClock;
 
}
else {  
       this->eventStart=0;


}




}

 }
