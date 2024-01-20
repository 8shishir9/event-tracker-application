//==============================================
// Name:           Shisir Bastakoti
// Student Number: 1395758221
// Email:          sbastakoti@myseneca.ca
// Section:        NHH
// Date:           2024-1-20
// Workshop:       Workshop1
//==============================================
// event.h
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
#ifndef SENECA_EVENT_H
#define SENECA_EVENT_H
#include <cstring>
namespace seneca{
    extern size_t g_sysClock;
class Event{
    private:
        char* description=nullptr;
        size_t eventStart=0;
public:
Event();
~Event();
Event(const Event &e);
Event &operator=(const Event &e);
void display();
void set(char* str=nullptr);


};


}
#endif