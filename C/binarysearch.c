#include<stdio.h>
void search(int ar[],int size,int item){
    int u,l,mid,flag=0;
    l=0;
    u=size-1;
    while(u>=l){
        mid=(l+u)/2;
        if(item==ar[mid]){
            flag=1;
            break;
        }
        else if(ar[mid]>item){
            u=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(flag==1){
        printf("ELEMENT FOUND IN INDEX %d",mid+1);
    }
    else{
        printf("NOT THERE");
    }
}
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    search(arr,9,7);
}
