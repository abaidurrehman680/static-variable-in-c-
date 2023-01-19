#include<iostream>
using namespace std;
class data_member {
private:
	int serial;
public:
	static int serialnumber;
	 void data_members() {
		
		serialnumber++;
	}
	void display() {
		cout << "serial number of the item is:" << serialnumber;
		cout << endl;
	}
};
int data_member::serialnumber = 0;
int main() {
	data_member dm,dm1,dm2;
	dm.data_members();
	dm.display();
	dm1.data_members();
	dm1.display();
	dm2.data_members();
	dm2.display();
	return 0;
}