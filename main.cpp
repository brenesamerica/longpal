#include <iostream>
#include <string>
using namespace std;

int main(){
	int n=0;
	string s;
	cin>>n;
	cin>>s;
	if (n==1)
	{
		cout<<1<<endl;
		cout<<s<<endl;
		return 0;
	} else if (n==2){
		if (s[0]==s[1]){
			cout<<2<<endl;
                	cout<<s<<endl;
			return 0;
		}else
		cout<<1<<endl;
                cout<<s[0]<<endl;
		return 0;
	}
	int maxl=1;
	string longpal=s.substr(0,1);
	for (int i=0; i<n ;i++){
		for(int j=0;j<n;j++){
			if(s[i]==s[j]){
				int subl=n-i-j;
				for(int m=1;m<(subl/2) && (s[i+m]==s[j-m]) ;m++){
					if(n%2==0 && (i+m+1)==(j-m)){
						maxl=subl;
						longpal=s.substr(i,maxl);
					}else if (n%2==1 && (i+m+1)==(j-m-1)){
						maxl=subl;
						longpal=s.substr(i,maxl);
					}					
				}
			}
		}
		if(maxl>n-i-maxl){
			cout<<maxl<<endl;
			cout<<longpal<<endl;
			return 0;			
		}
	}
	cout<<maxl<<endl;
	cout<<longpal<<endl;
	return 0;
}
