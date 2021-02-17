
//Frequencies of Limited Range Array Elements
void frequencycount(vector<int>& arr,int n)
{ 
    for(int i=0;i<n;i++){
        arr[i] = arr[i]-1;
        arr[arr[i]%n] = arr[arr[i]%n]+n;
    }
    for(int i=0;i<n;i++){
        arr[i]/=n;
    }
}
