#include<bits/stdc++.h>
using namespace std;
int insert_a(int a[],int se,int cal){
se++;
for(int i = se -1;i>2;i--){
    a[i] = a[i-1];
}
a[2] = cal;
for(int i=0;i<se;i++)// 222115139
    cout<<a[i]<<" ";
}
int main (){
int myid[] ={2,2,2,1,1,5,1,3,9};
int se = sizeof(myid)/sizeof(myid[0]);
insert_a(myid,se,0);



}
