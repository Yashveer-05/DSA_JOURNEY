class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mx=arr[0];
        for(int i=1; i<n; i++){
            if(arr[i]>mx){
                mx=arr[i];
            }
        }
        return mx;
    }
};
