#include<iostream>
#include <string>
using namespace std;
void showMenu() {
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;

}




int main() {
	int select = 0;

	const char* str = "ss";
	// // 使用字符串数据（注意要释放）
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