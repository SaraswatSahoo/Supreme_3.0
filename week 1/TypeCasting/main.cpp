#include <iostream>
using namespace std;

int main(){
    int num1 = 5;
    float num2 = 10.5;
    float result1 = num1 + num2;  //Implicit Type Casting
    float result2 = num1 + (int)num2; //Explicit Type Conversion
    cout<<result1<<endl;
    cout<<result2<<endl;

}