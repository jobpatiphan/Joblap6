#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 0;
    int c = 0;
    while(a != 0){
    cout << "Enter an integer: ";
    cin >> a;
    if(a%2 == 0){
        b++;
    }
    else{ c++;
    }
    }
    cout << "#Even numbers = " << b-15 << endl;

    cout << "#Odd numbers = " << c;
    return 0;
}
