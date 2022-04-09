#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[10000];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int ans = 0;
		int bal = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '(') ++bal;
			else {
				--bal;
				if (bal < 0) {
					bal = 0;
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
    return 0;
}
