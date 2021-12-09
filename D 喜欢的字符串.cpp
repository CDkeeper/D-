#include<iostream>
#include<cstring>
using namespace std;
const int N=205;
int n,k;
char c[100005];
int cheak[300]; //65,78
int main(){
	cin>>c;
	for(int i=0;i<strlen(c);i++){
		cheak[c[i]]++;
	}
	for(int i=97;i<=122;i++){
		while(cheak[i]!=0){
				cout<<char(i);
				cheak[i]--;	
		}
	}
	return 0;
}
