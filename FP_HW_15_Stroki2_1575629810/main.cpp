#include <iostream>
#include <string>		
using namespace std;

void del(string& str, int i) {
	str.erase(i, 1);
}
void remove(string& str, char c) {
	str.erase(remove(str.begin(), str.end(), c), str.end());

}
void pluss(string& str, int i, char c) {
	str.insert(i, 1, c);
}
void func (string& str){
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == '.') {
			str.erase(i, 1);
			str.insert(i, 1, '!');
		}
	}
}
int func1(string& str) {
	char c;
	cout << "Enter finde char: ";
	cin >> c;
	int temp = 0;
	for (auto& i : str)
	{
		if (i == c) {
			temp++;
		}
	}
	return temp;
}

int main() {
	string str = "";
	cout << "Enter string: ";
	cin >> str;
	int chars = 0, numbers = 0, other = 0;
	for (auto& i : str)
	{
		bool tmp = true;
		 for (int j = 48; j <=57; j++) {
			if (i == char(j)) {
				tmp = 0;
				numbers++;
			}
		}
			for (size_t g = 65; g <=  90; g++)
			{

			 if (i == char(g+32) || i == char(g)) {
				 tmp = 0;
				chars++;
			}
			}
			if (tmp){
				other++;
			}
	}
	cout << "Chars: " << chars << "\n Numbers: " << numbers << "\n Others: " << other << endl;

	
}