#include<iostream>
using namespace std;

int main(){
    char a[10];
    cin>>a;
    int k=0;
    while (a[k]!='\0')
    {
        k++;
    }
    
    for(int i=k;i>0;i++){
        for (int j = k; j<0; j--)
        {
            cout<<" "<<a[j];
        }
        cout<<endl;
        
    }

    return 0;
}