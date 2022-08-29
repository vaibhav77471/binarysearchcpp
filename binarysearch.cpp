#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
while(start<=end){
    if(arr[mid]=key){
        return mid;
    }
    if(arr[mid]<key){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;

}
return -1;

}



int main(){
   
    int even[10]={1,2,3,4,5,6,7,8,9,0};
    int odd[7]={3,67,7,23,55,65,77};

    int evenIndex = binarysearch(even,10,8);
    int oddIndex =binarysearch(odd,7,65);
    cout<<"index of 8 is"<<evenIndex<<endl;
    cout<<"index of 65"<<oddIndex<<endl;

    return 0;
}
