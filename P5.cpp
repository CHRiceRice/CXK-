#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int i = 0;
	cout<<"���ж೤ʱ���¿Σ�"<<endl;
	cin>>i;
	while(i != 0){
		i--;
		cout<<"----------------"<<endl;
		cout<<"|���¿λ���"<<i<<"��|"<<endl;
		cout<<"----------------";
		Sleep(1000);
		system("CLS");
	}
	cout<<"�¿��ˣ�";
	system("C:\\Users\\Administrator\\Desktop\\JNTM.mp3");
	system("C:\\Users\\Administrator\\Desktop\\CXK.jpg");
	return 0;
}
