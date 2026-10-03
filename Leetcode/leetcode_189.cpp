class Solution {
public:
  void rev(vector<int>& v, int i, int j) {
         while (i<j)
    {
        int temp = v[i]; 
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    }
    void rotate(vector<int>& a, int k) {
        int n = a.size();
        k = k%n;
        rev(a,0,n-1);
        rev(a,0,k-1);
        rev(a,k,n-1);
    }
};