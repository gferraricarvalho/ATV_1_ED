#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int novoAbs(int&);
float novoAbs(float&);

int main()
{
    int iNum1 = -3;
    cout << novoAbs(iNum1) << endl;
    
    iNum1 = 0;
    cout << novoAbs(iNum1) << endl;
    
    float fNum1 = -3.2;
    cout << novoAbs(fNum1) << endl;
    
    return 0;
}


float novoAbs(float& frefNum){
    if (frefNum < 0){
        return -frefNum;
    }
    else{
        return frefNum;
    }
}

int novoAbs(int& irefNum){
    if (irefNum < 0){
        return -irefNum;
    }
    else{
        return irefNum;
    }
}

