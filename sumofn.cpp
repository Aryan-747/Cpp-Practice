#include<iostream>

using namespace std;

int main(){

    int n;
    int sum = 0;

    cout << "Enter the limit:" << endl;
    cin >> n;

    for(int i=0 ; i<=n; ++i){
        sum = sum + i;
    }

    cout << "Sum of first " <<n<< " natural numbers is: " <<sum<< endl;
}