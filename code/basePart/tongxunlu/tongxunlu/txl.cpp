#include<iostream>
#include <string>
using namespace std;
void showMenu() {
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;

}




int main() {
	int select = 0;

	const char* str = "ss";
	// // ʹ���ַ������ݣ�ע��Ҫ�ͷţ�
	int size = sizeof(str);
	// env->ReleaseStringUTFChars((jstring)obj, str);
	
	const char a[3] = "xx";
	char ch[10];
	ch[0] = 's';
	ch[1] = 'x';

	string s;
	const char *xx = s.c_str();

	while(true){
		showMenu();
		cin >> select;
		switch (select) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "exit()" << endl;
			system("pause");
			return 0;
			break;
		}


		showMenu();
	}
	

	system("pause");
	return 0;
}