class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mx = arr[0];
        for(int i=0; i<n; i++){
            if(mx<arr[i]){
                mx=arr[i];
            }
        }
        int smx=-1;
        for(int i=0; i<n; i++){
            if(arr[i]>smx && arr[i]!=mx){
                smx=arr[i];
            }
        }
        return smx;
    }
};