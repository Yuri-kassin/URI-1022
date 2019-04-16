#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<vector>
#include <string.h>

using namespace std;

int main(){
	int n,i,j,y,k;
	char x,in,in2;
	vector<int>v;
	int R1,R2;
	cin>>n;
	v.reserve(4);
	for(i=0;i<n;i++){
		
		cin>>v[0]>>in>>v[1]>>x>>v[2]>>in2>>v[3];



		if(x=='+'){
			R1=(v[0]*v[3])+(v[2]*v[1]);
			R2=v[1]*v[3];
		}
		if(x=='-'){
   			R1=((v[0]*v[3])-(v[2]*v[1]));
			R2=v[1]*v[3];
		}
		if(x=='*'){
       		R1=v[0]*v[2];
			R2=v[1]*v[3];
		}
		if(x=='/'){
	        R1=v[0]*v[3];
			R2=v[2]*v[1];
		}
		cout<<R1<<"/"<<R2<<" = ";
		y=0;
		k=2;
		if(R1<0){
			R1=R1*-1;
			y=1;
		}
		do{
			if(R1==1 || R2==1);
			else if(R1%k==0 && R2%k==0){
				R1=R1/k;
				R2=R2/k;
				k=2;
			}
			else{
			k++;
		}
		}while(k<=R1 && k<=R2);
		if(y==1)R1=R1*-1;
		cout<<R1<<"/"<<R2<<endl;

	}


	system("pause");
	return 0;
}
