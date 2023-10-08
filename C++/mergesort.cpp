#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,int low,int high,int mid){
   // int mid = high/2;
    int h=mid+1;
    int l=low;
    vector<int> v;
    while(l<=mid&&h<=high){
        if (a[l]<=a[h]){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(a[h]);
            h++;
        }
    }
    while (l<=mid)
    {
        v.push_back(a[l]);
        l++;
    }
    while(h<=high){
        v.push_back(a[h]);
        h++;
    }
    for (int i = low; i <=high; i++)
    {
        a[i]=v[i];
    }
}
void mergeshort(vector<int> a,int low, int high){
    if (low>=high)
    {
        return;
    }
    mergeshort(a,low,high/2);// mid=high/2 in the place
    mergeshort(a,high/2+1,high);
    merge(a,low,high,high/2);
}
/*void merge(int a[],int low,int high){
    int mid = high/2;
    int h=mid+1;
    int l=low;
    vector<int> v;
    while(l<=mid&&h<=high){
        if (a[l]<a[h]){
            v.push_back(a[l]);
            l++;
        }
        else{
            v.push_back(a[h]);
            h++;
        }
    }
    while (l<=mid)
    {
        v.push_back(a[l]);
        l++;
    }
    while(h<=high){
        v.push_back(a[h]);
        h++;
    }
    for (int i = low; i <=high; i++)
    {
        a[i]=v[i];
    }
}*/
void display(vector<int>&a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> a={8,4,7,1,2,6,3,2,5,3,1};
    display(a,11);
    mergeshort(a,0,10);
    display(a,11);
}
