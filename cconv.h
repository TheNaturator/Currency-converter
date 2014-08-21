#ifndef CCONV_H
#define CCONV_H

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

class cConv
{
public:
    cConv();
    ~cConv();
    void parse(int number, int n, vector<int> &result);
    void conv(vector<int> konwOut);
    vector<int> out;
    double number;
    double doublenumber2;
    int number2;
    vector<int> konwOut;
    string text;
private:

};

#endif // CCONV_H
