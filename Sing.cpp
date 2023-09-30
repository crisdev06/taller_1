
#include <iostream>
using namespace std;

class Sing
{
private:
    string name;
    string singer;
    int view;
    int time;

public:
    Sing(string name, string singer, int view, int time)
    {
        this->name = name;
        this->singer = singer;
        this->view = view;
        this->time = time;
    }
};
