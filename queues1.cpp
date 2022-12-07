#include<iostream>
#include<queue>
using namespace std;

int main(){
     queue<int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     cout<<q.size()<<endl;
     q.pop();
     q.pop();
     q.pop();
     cout<<q.front()<<endl;
     
     cout<<q.size()<<endl; 
     if(q.empty()){
        cout<<"queue is empty"<<endl;
     } 
     else{
        cout<<"queue is not empty"<<endl;
     }
    return 0;
}