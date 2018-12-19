#include<iostream>
using namespace std;
//野指针
class NULLPtr {
public:
	NULLPtr() {
		cout << "constructor class..." << endl;
	}
	NULLPtr(int connection, int crcValidator) :connection_(connection), crcValidator_(crcValidator)
	{
		cout << "Copy constructor class..." << endl;
	}
	~NULLPtr() {
	
		delete connection_; connection_ = nullptr;
		delete crcValidator_; crcValidator_ = nullptr;
		cout << "destructor.." << endl;
	}
private:
	int connection_;
	int crcValidator_;
};
int main() {
	system("pause");
	return 0;
}
