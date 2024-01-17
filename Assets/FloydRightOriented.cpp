#include<iostream>

using namespace std;

int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int k=5-1;k>=i;k--)
        cout<<" ";

        for(int j=0;j<=i;j++){
            cout<<"*";
        }
    }
    return 0;
}