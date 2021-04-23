// A recursive program to generate natural number form forward to backward order

#include <iostream>
using namespace std;

void printIncDec(int n){
    if(n==0) return;

    cout<<n<<endl;
    printIncDec(n-1);
    cout<<n<<endl;


}

int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    printIncDec(n);

}