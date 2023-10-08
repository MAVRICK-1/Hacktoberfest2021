#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void combination(vector<int>&arr,vector<int> &ds,vector<vector<int>> &ans,int target,int i){
    if (target==0)
    {
        ans.push_back(ds);
        for (auto item : ds)
        {
            cout<<item<<" ";
        }
        cout<<endl;
        
        return ;
    }
    while(i<=arr.size())
    {
        if(i>1&&arr[i]==arr[i+1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        combination(arr,ds,ans,target-arr[i],i+1);
        ds.pop_back();
      //  combination(arr,ds,ans,target,i+1);
        i++;
    }
}
vector<vector<int>> answer (vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int>ds;
    combination(arr,ds,ans,4,0);
    return ans;
}
int main(){
    vector<int> arr={1,5,3,2,1,6,8,2,3,2,1,5,0,7,6,3,2};
    vector<vector<int>> ans ;
    ans =answer(arr,10);


}
