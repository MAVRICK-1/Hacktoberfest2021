#include<stdio.h>
int firstocc(int a[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(key==a[i]){
        return i;
    }
    return firstocc(a,n,i+1,key);
}
int lastocc(int a[],int n,int i,int key){
    if (i==n){
        return -1;
    }
    int restarry=lastocc(a,n,i+1,key);
    if (restarry!=-1)
    {
        return restarry;
    }
    if (key==a[i]){
        return i;
    }
    
    return -1;
}
int main(){
    int a[10]={1,2,3,4,5,9,8,6,8,5};
    printf("%d",firstocc(a,10,0,5)+1);
    printf("\n%d",lastocc(a,10,0,5)+1);
}
