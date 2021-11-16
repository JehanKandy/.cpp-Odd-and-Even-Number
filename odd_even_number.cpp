#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter Any Number : ";
    cin >> num;

    if(num % 2 == 0){
        cout << "Odd Number \n ";
    }else{
        cout << "Even Number \n";
    }

    return 0;
}
