#include <iostream>
using namespace std;

void counter( int n){
    if (n==34) return;
    cout<<n<<endl;
    counter(n-1);
    
}

int main(){
    counter(65);

}