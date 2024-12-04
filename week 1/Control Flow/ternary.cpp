#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    bool canVote = (age > 18) ? true : false ; 
    cout << "Can Vote : " << canVote << endl;
}