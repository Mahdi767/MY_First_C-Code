#include<bits/stdc++.h>
using namespace std;
int delete_a(int a[],int se){
int j =1;
while(j<=3){
    for(int i=3;i<se;i++){
        a[i] = a[i+1];
    }
    j++;

}
se -=3;
for(int i = 0;i<se;i++)
    cout<< a[i]<<" ";
}
int main(){
int myid[] ={2,2,2,1,1,5,1,3,9};
int se = sizeof(myid)/sizeof(myid[0]);
delete_a(myid,se);
}

