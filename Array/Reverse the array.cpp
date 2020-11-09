#include <iostream>

using namespace std;

int main()
{
    int A[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>A[i];
    int s=0,end=n-1;
    
    for(int i=0;i<n/2;i++){
        int t=A[s];
        A[s]=A[end];
        A[end]=t;
        s++;
        end--;
    }    
    
     for(int i=0;i<n;i++)
    cout<<A[i]<<" ";
    

    return 0;
}
