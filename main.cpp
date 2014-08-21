#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include "cconv.h"

using namespace std;


int main(int argc, char** argv)  {

    string strNumber;
    string strCurrency;

    cConv oConv;
    if (argc == 3) {
        strNumber = (*(argv+1));
        strCurrency = (*(argv+2));
    } else if (argc == 2) {
        strNumber = (*(argv+1));
        cout << "Insert a currency: " << endl;
        cin >> strCurrency;
    } else {
        cout << "Insert a number: " << endl;
        cin >> strNumber;
        cout << "Insert a currency: " << endl;
        cin >> strCurrency;
    }

    float pos = strNumber.find(".");

    if(pos!=string::npos) {
        oConv.number = atof((strNumber.substr(0,pos)).c_str());
        oConv.doublenumber2 = atof((strNumber.substr(pos)).c_str());
        oConv.number2 = static_cast<int>(oConv.doublenumber2*100);
    }

    oConv.number = atoi(strNumber.c_str());

    oConv.parse(oConv.number, 1000, oConv.out);

    oConv.conv(oConv.out);

    cout << strCurrency.substr(0,3);

   if(pos!=string::npos) {

            cout << " ";
            oConv.text= "";
            oConv.out.clear();

            oConv.parse(oConv.number2, 1000, oConv.out);
            oConv.conv(oConv.out);
   }
   cout << endl;
}
