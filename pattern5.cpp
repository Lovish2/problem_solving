#include<iostream>
using namespace std;

int main(){
    int c=0;
     for (int i =2; i <=5 ; i++)
     {
        for (int j = i; j <=i+c; j++)
        {
            if(i+j>=4){
                cout<<" "<<j;
            }
            else{
                cout<<" ";
            }
        }
        c++;
        cout<<endl;
     }
     
    return 0;
}