#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a[100000],b[100000],c[10000],d[10000],p=0,q=0,f=0,i,j,sum=0,temp,n;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           cin>>b[i];
       }
       for(i=0;i<n;i++)
        {
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
        }

        for(i=0;i<n;i++)
            {
            for(j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
            }
          /* for(i=0;i<n;i++)
            {
                cout<<a[i]<<"\t";
            }
            cout<<"\n";
             for(i=0;i<n;i++)
            {
                cout<<b[i]<<"\t";
            }
*/
            for(i=0;i<n;i++)
            {
                f=0;
                for(j=0;j<n;j++)
                {
                    if(a[i]==b[j])
                {
                    f=1;
                    a[i]=0;
                    b[j]=0;
                    break;
                }
                }

                if(f==0)
                {
                    if(a[i]==a[i+1])
                        {
                            c[p]=a[i];
                            a[i]=0;
                            a[i+1]=0;
                            i++;
                            p++;
                        }
                        else
                        {
                            f=-1;
                            break;
                        }
                }
            }



            if(f!=-1)
            {
                for(i=0;i<n;i++)
                {
                    if(b[i]!=0)
                    {
                        if(b[i]==b[i+1])
                        {
                            d[q]=b[i];
                            q++;
                            b[i]=0;
                            b[i+1]=0;
                            i++;
                        }
                            else
                            {
                                f=-1;
                                break;
                            }
                    }
                }
            }

            for(i=0;i<n;i++)
            {
                cout<<a[i]<<"\t";
            }
            cout<<"\n";
             for(i=0;i<n;i++)
            {
                cout<<b[i]<<"\t";
            }

           if(f==-1)
            {
                cout<<"-1\n";
            }
            else
            {
                if(p==0 && q==0)
                {
                    cout<<"0\n";
                }
                else
                {
                    if(p!=q)
                    {
                        cout<<"-1\n";
                    }
                    else
                    {
                        for(i=0;i<p;i++)
                        {
                            j=(q-1);
                            if(c[i]>d[j])
                            {
                                sum=sum+d[j];
                            }
                            else
                            {
                                sum=sum+c[i];
                            }
                            q--;
                        }
                        cout<<sum<<"\n";
                    }
                }

                }
    }
return 0;
}
