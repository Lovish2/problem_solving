#include<iostream>
using namespace std;

/*int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }

}

int main(){
 //Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................// 
    int a;
    cin>>a;
    int c=0;
    for(int i = a; i >0; i--)
    {
       c=c+fact(i);
    
    }
    cout<<c;
    return 0;
}*/


int fact(int a){
    if(a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }

}

int main(){
//Write a program to find the sum of the series using the function. 
//(a) 1!/1+2!/2+3!/3+4!/4+5!/5//
     int a;
    cin>>a;
    int c=0;
    for(int i = a; i >0; i--)
    {
       c=c+(fact(i))/i;
    
    }
    cout<<c;
    return 0;
}
