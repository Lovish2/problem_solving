#include<iostream>
using namespace std;

int main(){
    char s[20];
    cin>>s;
    if(s[0]=="_" || (s[0]>="A" && s[0]<="Z") || (s[0]>="a" && s[0]<=z)){
    int flag=0;
    int i;
        i=1;
        while (s[i]!='\0')
        {
            if(s[i]>="a" && s[i]<="z")||(s[i]>="A"&& s[i]<="Z")||(s[i]>="0"&& s[i]<="9") ||(s[i]=="_" || s[i=="&"]){
                i++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0)
          cout<<"valid";
        else
           cout<<"invalid";  
    }
    return 0;
}