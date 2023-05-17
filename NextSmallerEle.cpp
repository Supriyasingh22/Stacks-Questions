//  to ifnd next smaller element fo e each element in the array 

#include<iostream>
#include<stack>
#include<vector>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter the size : ";
    cin>>n ;

    vector<int>v(n);
    cout<<"Enter elemets inside array ";
    for(int i = 0 ;i<n;i++)
    {
        cin>>v[i];
    }

    stack<int>st ;
    st.push(-1);

    vector<int>ans(n);

    for(int i=n-1 ;i>=0;i--)
    {
        while(st.top()>=v[i])
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(v[i]);
    }

    cout<<"Next Smaller Element : ";
    for(int i = 0 ;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0 ;
}


