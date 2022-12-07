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
   int c=0;
    for(int i=0;i<=k;i++){
        for (int j = k; j >= k-c; j--)
        {
            cout<<" "<<a[j];
        }
        c++;
        cout<<endl;
        
    }

    return 0;
}