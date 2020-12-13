// Recursive method to reverse an array
#include <iostream>
using namespace std;

//fucntion to print array elements
void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

// fuction to reverse the array
void reverseArray(int arr[], int start, int end){
    while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, ++start, --end);
}
}

int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter arary elements:"<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];

    printArray(arr, n);

    reverseArray(arr, 0, n-1);

    printArray(arr, n);
    

}