// To find the previous smaller element in the list 


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
    // from left to right 

    for(int i=0 ;i<n;i++)
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


