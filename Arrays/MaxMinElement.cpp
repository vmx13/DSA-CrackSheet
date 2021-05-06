// progeam to find max and min of a given array
#include <iostream>
using namespace std;

// function to find max element 
int MaxElement(int arr[], int n){
    int max  = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>max)
        max = arr[i];
        
    }
    return max;  
}

//program to find min element
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