#include<iostream>
using namespace std;
void display(int a[]){
for(int i=0;i<=4;i++){
    cout<<a[i]<<"  ";
}
return ;}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[5]={1,2,3,4,5};
    // accessing the element of array in another func
    // updation pass by value /reference
    display(arr);
    change(arr);
    display(arr);
}















    
