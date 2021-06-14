#include<bits/stdc++.h>
using namespace std;
void permvect(string s,string emt,int a[]){
	if(s.size()==emt.size()){
		cout<<emt<<" ";
		cout<<"\n";
		return;
	}
	for(int i=0;i<s.size();i++){
		if(a[i]==0){
			a[i]=1;
			permvect(s,emt+s[i],a);
			a[i]=0;
		}
	}
}
int main(){
	string s;
	getline(cin,s);
	string emt;
	int a[s.size()];
	for(int i=0;i<s.size();i++){
		a[i]=0;
	}
	permvect(s,emt,a);
}
