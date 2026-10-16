#include <bits/stdc++.h>
using namespace std;

int main() {
int p;
cin>>p;

while(p--){
        int x;
cin>>x;
    string n;
cin>>n;
int counts=0;



if(x==1){
    counts = counts+1;
    cout<<counts<<endl;
}
else{
    for(int i=0,j=x-1; i<j,j>i; i++,j--){
        if( n[i]=='0' &&n[j]=='1' || n[i]=='1' && n[j]=='0'){
            x=x-2;
        }
        else{
            break;
        }
    }
    cout<<x<<endl;

}
}

    return 0;
}


