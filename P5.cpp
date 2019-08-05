#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int i = 0;
	cout<<"还有多长时间下课？"<<endl;
	cin>>i;
	while(i != 0){
		i--;
		cout<<"----------------"<<endl;
		cout<<"|离下课还有"<<i<<"秒|"<<endl;
		cout<<"----------------";
		Sleep(1000);
		system("CLS");
	}
	cout<<"下课了！";
	system("C:\\Users\\Administrator\\Desktop\\JNTM.mp3");
	system("C:\\Users\\Administrator\\Desktop\\CXK.jpg");
	return 0;
}
