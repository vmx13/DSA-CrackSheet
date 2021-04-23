//a recursive program to generate natural number upto n

#include<iostream>
using namespace std;

void printInc(int n){
    if(n==0) return;

    printInc(n-1);

    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    printInc(n);

}