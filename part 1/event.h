#ifndef SENECA_EVENT_H
#define SENECA_EVENT_H
#include <cstring>
namespace seneca{
    int g_sysClock;
class Event{
    private:
        char description[128];
        int eventStart;
public:
Event();
void display();
void set(char* description);
char* hhmmss(int eventStart);

};


}
#endif