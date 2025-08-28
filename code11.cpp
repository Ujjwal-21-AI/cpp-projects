#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >=90){
        cout << "Grade A\n";
        cout << "Excillent\n";
    }else if(marks >= 80 && marks < 90){
        cout << "Grade B\n";
        cout << "Very Good\n";
    }else if(marks >= 70 && marks < 80){
        cout << "Grade C\n";
        cout << "Good\n";
    }else{
        cout << "Grade D\n";
        cout << "Need improvement\n";
    }


    return 0;
}