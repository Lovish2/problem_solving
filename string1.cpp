#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int i ;
    char name[20];
    cin>>(name);
    cout<<(name);
    i=0;
    while (name[i]!='\0')
    {
        i++;
        
    }
    i--;
    int j=0;
    while (j<i)
    {
        int t=name[i];
        name[i]=name[j];
        name[j]=t;
        j++;
        i--;
    }
    cout<<name;
    
    

//  checking for palindrome//

int flag;
while (j<i)
  {
    if (name[j]!=name[i]){
    int flag=1;
    break;
    j++;
    i--;
    }
  }
    if (flag==1)
    {
        cout<<"not a palindrome";

    }

    else{
        cout<<"palindrome";
    }
    
    
 return 0; 
}