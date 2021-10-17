#include<bits/stdc++.h>
using namespace std;
int find(int a[],int n,int sum)
{
    int i=0, j=n-1;
   while(i<j)
    {
        if(a[i]+a[j]==sum)
        return 1;
        else
        if(a[i]+a[j]<sum)
        i++;
        else
        if(a[i]+a[j]>sum)
        j--;
    }
    return 0;
}
int main()
{
    int n,s;
    int b;
    cin>>n;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    b=find(a,n,s);
    if(b ==1)
    cout<<"present"<<endl;
    else
    cout<<"not"<<endl;

}

