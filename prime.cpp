#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
for(int i=2; i<n; i++){
	for (int j=1; j<=i; j++){
    if (i%j != 0){
      cout<<i<<endl;
    }
}
}
  return 0;
}