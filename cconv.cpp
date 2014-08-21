#include "cconv.h"

cConv::cConv()   {

}


cConv::~cConv()  {

}


void cConv::parse(int number, int n, vector<int> &result)  {

    int tmp = 0;

    if(number >= n) {
        tmp = number % n;
        result.push_back(tmp);
        parse((number - tmp) / n, n, result);
    } else {
        result.push_back(number);
    }
}


void cConv::checkCents(string currency){

    if(currency=="PLN"){
        currencyOut = "Polish Złoty";
        centsOut = "groszy";
    }
    else if(currency=="EUR"){
        currencyOut = "Euro";
        centsOut = "cents";
    }
    else if(currency=="USD"){
        currencyOut = "US Dollars";
        centsOut = "cents";
    }
    else
        centsOut = "";
    }





void cConv::conv(vector<int> out){

    string tmptext = "";


for (unsigned int i=0; i < out.size(); ++i) {

        parse(out[i], 10, konwOut);

    if( konwOut.size() > 1 && konwOut[1] == 1) {
        switch(konwOut[0])  {
            case 0:
                tmptext = tmptext + "ten ";
                break;
            case 1:
                tmptext = tmptext + "eleven ";
                break;
            case 2:
                tmptext = tmptext + "twelve ";
                break;
            case 3:
                tmptext = tmptext + "thirteen ";
                break;
            case 4:
                tmptext = tmptext + "fourteen ";
                break;
            case 5:
                tmptext = tmptext + "fifteen ";
                break;
            case 6:
                tmptext = tmptext + "sixteen ";
                break;
            case 7:
                tmptext = tmptext + "seventeen ";
                break;
            case 8:
                tmptext = tmptext + "eighteen ";
                break;
            case 9:
                tmptext = tmptext + "nineteen ";
                break;
            default:
                break;
        }
    } else {
    switch(konwOut[0]) {
        case 1:
            tmptext = tmptext + "one ";
            break;
        case 2:
            tmptext = tmptext + "two ";
            break;
        case 3:
            tmptext = tmptext + "three ";
            break;
        case 4:
            tmptext = tmptext + "four ";
            break;
        case 5:
            tmptext = tmptext + "five ";
            break;
        case 6:
            tmptext = tmptext + "six ";
            break;
        case 7:
            tmptext = tmptext + "seven ";
            break;
        case 8:
            tmptext = tmptext + "eight ";
            break;
        case 9:
            tmptext = tmptext + "nine ";
            break;
        default:
            break;
    }

    if(konwOut.size() > 1) {
        if(konwOut[0]==0){
    switch(konwOut[1])
    {
    case 2:
        tmptext = "twenty " + tmptext;
        break;
    case 3:
        tmptext = "thirty " + tmptext;
        break;
    case 4:
        tmptext = "forty " + tmptext;
        break;
    case 5:
        tmptext = "fifty " + tmptext;
        break;
    case 6:
        tmptext = "sixty " + tmptext;
        break;
    case 7:
        tmptext = "seventy " + tmptext;
        break;
    case 8:
        tmptext = "eighty " + tmptext;
        break;
    case 9:
        tmptext = "ninety " + tmptext;
        break;
    default:
     break;
    }
        }
        else{
            switch(konwOut[1])
            {
            case 2:
                tmptext = "twenty-" + tmptext;
                break;
            case 3:
                tmptext = "thirty-" + tmptext;
                break;
            case 4:
                tmptext = "forty-" + tmptext;
                break;
            case 5:
                tmptext = "fifty-" + tmptext;
                break;
            case 6:
                tmptext = "sixty-" + tmptext;
                break;
            case 7:
                tmptext = "seventy-" + tmptext;
                break;
            case 8:
                tmptext = "eighty-" + tmptext;
                break;
            case 9:
                tmptext = "ninety-" + tmptext;
                break;
            default:
             break;
            }
        }
    }
}
    if(konwOut.size()>2){
    switch(konwOut[2])
    {
    case 1:
        tmptext = "one hundred " + tmptext;
        break;
    case 2:
        tmptext = "two hundred " + tmptext;
        break;
    case 3:
        tmptext = "three hundred " + tmptext;
        break;
    case 4:
        tmptext = "four hundred " + tmptext;
        break;
    case 5:
        tmptext = "five hundred " + tmptext;
        break;
    case 6:
        tmptext = "six hundred " + tmptext;
        break;
    case 7:
        tmptext = "seven hundred " + tmptext;
        break;
    case 8:
        tmptext = "eight hundred " + tmptext;
        break;
    case 9:
        tmptext = "nine hundred " + tmptext;
        break;
    default:
        break;
    }
    }

    switch(i){
    case 1:
        tmptext = tmptext + "thousand ";
        break;
    case 2:
        tmptext = tmptext + "million ";
        break;
    case 3:
        tmptext = tmptext + "billion ";
        break;
    case 4:
        tmptext = tmptext + "trillion ";
        break;
    default:
        break;

    }

    text = tmptext + text;
    tmptext = "";
    konwOut.clear();
}
        cout << text;
}
