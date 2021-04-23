#include <iostream>
using namespace std;

int factorial(int n){
        if(n<=1) return 1;

        int subVariable = factorial(n-1);

        return n*subVariable;
    }

int main(){
    int n;
    cout<<"Enter a number whose factorial to be find out"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
}