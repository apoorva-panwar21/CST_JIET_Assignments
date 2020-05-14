#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int> a{1,2,3,4,5,6};
int even=0;
for(int i=0;i<a.size();i++){
	if (a[i]%2==0)
	{
		even++;
	}
}
return 2*even+1;
}
