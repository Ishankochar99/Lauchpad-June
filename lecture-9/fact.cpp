#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int x = fact(n-1);
    return x * n;
}
int main(){
    cout<<fact(5)<<endl;
}
