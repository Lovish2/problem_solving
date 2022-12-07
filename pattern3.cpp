#include<iostream>
using namespace std;

int main(){
    int c=0;
    int n;
    cin>>n;
    for(int i=1 ; i<=n;i++){
        for(int j=i;j<=c+i;j++){
            cout<<j<<" ";
        }
        c++;
        cout<<endl;
    }
    return 0;
}