#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int n =5;
    int Oddsum = 0;

        for(int i = 1; i <= n; i++){
        if(i%2 != 0){
        Oddsum  += i;    
        }
    }
    cout << "Odd Sum = " << Oddsum << endl;
    return 0;
}