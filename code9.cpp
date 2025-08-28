#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your AGE: ";
    cin >> age;
    
    if(age>=18){
        cout << "You are eligible for vote\n";
    }
    else{
        cout << "You are not eligible for vote\n";
    }
    return 0;
}