// a recursive program to generate natural numbers upto n in decreasing order

#include <iostream>
using namespace std;

void printDec(int n){
    if (n==0) return;

    cout<<n<<endl;

    printDec(n-1);
}

int  main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    printDec(n);
}
