#include<bits/stdc++.h>
using namespace std;

struct student{
    int rollno;
    char name[20];
    double perc;

};


int main(){
    struct student s ; 
    int n;
    cin>>n;
    struct student *ptr;
    ptr=&s;
    scanf("%d%s%lf",&(ptr->rollno),ptr->name,&(ptr->perc));
    ptr=(struct student *)malloc(n*sizeof(struct student));
    printf("%d%s%lf",(ptr->rollno),ptr->name,(ptr->perc));
    return 0;
}