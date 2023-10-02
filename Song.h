#ifndef SONG_H
#define SONG_H
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


class Song
{

public:
    string name;
    string artist;
    int views;
    int duration;

    Song(const string& _name, const string& _artist, int _views, int _duration);

};
#endif