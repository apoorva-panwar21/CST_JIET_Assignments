#include<bits/stdc++.h>
using namespace std;

void pushOdd(vector<int> a,vector<int> b){
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i]%2!=0)
		{
			b.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); ++i)
	{
		cout<<b[i];
	}
}

void pushEven(vector<int> a,vector<int> b){
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i]%2==0)
		{
			b.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); ++i)
	{
		cout<<b[i];
	}
}

int main(){
	vector<int> a{1,2,3,4,2,1,4};
	vector<int> b;
	int even=0,odd=0;
	for(int i=0;i<a.size();i++){
		if(a[i]%2==0){even++;}
		else{odd++;}
	}
	if(even<odd){
		pushOdd(a,b);
	}
	else{pushEven(a,b);}
	
}
