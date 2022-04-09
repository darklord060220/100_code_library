#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,temp=0;
        cin>>n;
        vector< int> v1,v2;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v1.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            v2.push_back(x);
        }
       // bool max1 = *std::max_element(v1.begin(), v1.end()) > *std::max_element(v2.begin(), v2.end());
       // int max11 = std::max(*std::max_element(v1.begin(), v1.end()), *std::max_element(v2.begin(), v2.end()));
//int max22 =*std::max_element(v2.begin(), v2.end());
//std::cout << max22;
//bool max2= *std::max_element(v1.begin(), v1.end()) = *std::max_element(v2.begin(), v2.end());
         
        //if(max1)
        //{
            for(i=0;i<n;i++)
        {
            if(v1[i]<v2[i])
            {
                temp=v1[i];
                v1[i]=v2[i];
                v2[i]=temp;
            }
        }
       /* }
        else
        {
            for(i=0;i<n;i++)
        {
            if(v2[i]<v1[i])
            {
                temp=v2[i];
                v2[i]=v1[i];
                v1[i]=temp;
            }
        }
        }
    if(max2)//equal
    {
        
    }*/
    int max11 =*std::max_element(v1.begin(), v1.end());
    int max22 =*std::max_element(v2.begin(), v2.end());
    cout<<max11*max22<<"\n";
    }
	return 0;}