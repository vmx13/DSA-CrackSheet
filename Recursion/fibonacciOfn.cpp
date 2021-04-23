#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number upto which fibonacci sum should be returned"<<endl;
    cin>>n;
    int fibo(int n);
    cout<<fibo(n);

}

int fibo(int n){
    if (n==0 || n==1) return n;

    int subProblem1 = fibo(n-1);
    int subProblem2 = fibo(n-2);

    return subProblem1 + subProblem2;

}