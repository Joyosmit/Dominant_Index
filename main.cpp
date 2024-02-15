#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int dominantIndex(vector<int> &v, int n){
    int max_val = *max_element(v.begin(), v.end());
    cout<<max_val<<endl;
    int ret = -1;
    for(int i = 0;i<n;i++){
        if(v[i]==max_val){
            ret = i;
        }
        else if((2*v[i])>max_val){
            
            return -1;
        }
    }
    return ret;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    cout<<"print v\n";
    for(int i = 0; i< n ;i++){
        cout<<v[i]<<' ';
    }cout<<'\n';
    cout<<"Dominant index is "<<dominantIndex(v, n);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int dominantIndex(vector<int> &nums) {
//     int n = nums.size();
//     if (n == 1)
//         return 0;

//     int maxIndex = 0;
//     int secondMaxIndex = -1;

//     for (int i = 1; i < n; ++i) {
//         if (nums[i] > nums[maxIndex]) {
//             secondMaxIndex = maxIndex;
//             maxIndex = i;
//         } else if (secondMaxIndex == -1 || nums[i] > nums[secondMaxIndex]) {
//             secondMaxIndex = i;
//         }
//     }

//     if (nums[maxIndex] >= 2 * nums[secondMaxIndex])
//         return maxIndex;
//     else
//         return -1;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     cout << "Dominant index is " << dominantIndex(nums) << endl;

//     return 0;
// }
