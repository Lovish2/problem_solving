#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++){
       if(n>0){ 
       n=n-i;
       c++;
       }
       else if(n<i){
           break;
       }
      
    } 
    
    cout<<c;

    return 0;
}