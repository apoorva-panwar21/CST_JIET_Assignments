#include<bits/stdc++.h>
using namespace std;

int main(){
int a=12,b=3,c=2;
int flag=1;
for (int i = 1; i < a; ++i)
{
	if (i%(b*c)==0)
	{
		flag++;
	}
}
return flag;

}
