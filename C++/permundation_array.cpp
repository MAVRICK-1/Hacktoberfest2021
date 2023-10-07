#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
void printF(int i,vector<int> &vec,int sum,int n,int a[],int val){
  //  cout<<val<<endl;
    if (val==sum)
    {
        for (auto item : vec)
        {
            cout<<item<<" ";
        }
        cout<<endl;
        return;
    }
    if (sum<val||i>n){
        return;
    }
    vec.push_back(a[i]);
    printF(i,vec,sum,n,a,val+a[i]);
    vec.pop_back();
    printF(i+1,vec,sum,n,a,val);
}
int main(){
    int a[]={1,2,3,4,5};
    vector<int> vec;
    printF(0,vec,7,5,a,0);
}
