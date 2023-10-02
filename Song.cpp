
#include <iostream>
#include <string>
#include "Song.h"
using namespace std;

Song::Song(const string& _name, const string& _artist, int _views, int _duration)
    : name(_name), artist(_artist), views(_views), duration(_duration) {}