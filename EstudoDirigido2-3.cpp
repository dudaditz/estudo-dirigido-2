#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int SOMA2(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int main(){

int num1, num2, num3;


cin >> num1 >> num2 >> num3;
SOMA2(num1, num2, num3);

cout << SOMA2(num1, num2, num3);
return 0;
}
