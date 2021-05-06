int kthSmallest(int arr[], int l, int r, int k) {
    for(int i=l; i<=r; i++){
        for(int j=i+1; j<=r; j++){
        int temp;
        if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    }
    return arr[k-1];//code here
}