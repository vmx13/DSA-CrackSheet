#include <iostream>
using namespace std;


int MaxElement(int arr[], int n){
    int max  = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max = arr[i];
        
    }
    return max;  
}

int  MinElement(int arr[], int n){
    int min=99999;
    for(int i=0; i<n; i++){
        if(arr[i]<min)
        min = arr[i];
        
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n+2];
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int max = MaxElement(arr, n);
    int min = MinElement(arr, n);
    cout<<max<<"\n";
    cout<<min<<"\n";
}