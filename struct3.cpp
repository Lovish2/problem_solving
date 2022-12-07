#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct time
{
    int hrs;
    char minutes;
    float seconds;

};


int main(){
    struct time t1={7,31,54};
    struct time t2={2,55,36};
    struct time t;
    t.seconds=t1.seconds+t2.seconds;
    t.minutes=t1.minutes + t2.minutes;
    t.hrs=t1.hrs+t2.hrs;
    if(t.seconds>60){
        int x=t.seconds-60;
        int y=t.minutes +1;
    }
    else{
        
    }
    if(t.minutes>60){
        int m =t.minutes-60;
        int n=t.hrs + 1;
    }
    
    int n;
    cin>>n;
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i].rollno;
        cin>>s[i].section;
        cin>>s[i].percentage;
        cin>>s[i].mobileno;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<s[i].rollno<<" "<<s[i].section<<" "<<s[i].percentage<<" "<<s[i].mobileno<<endl;
    }
    return 0;
}