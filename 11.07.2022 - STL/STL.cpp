#include <iostream>
#include <vector>
#include <array>
#include <string>

class A {};
class User {
	int id;
	std::string name;
	// ���� �� �����, ����� ������������ ����������, ��� �������� ��������������.
	User() = delete; // �������, ��� ��� ������������ �� ���������. ����� ������ ��� ��������� �� �����������.
	//User(const User&) = delete;
	User operator=(const User&) = delete;
public:
	// �����������, ������� ����� ��������� ������ � ����� �����. ������ �������� �� �������.
	explicit User(int num, std::string name):id(num){}; // �� �� ������� ������ ����� ����� ��������� User
};

int main() {

	setlocale(LC_ALL, "Russian");
	using namespace std;
	int a;
	float f;
	__int16 shor;
	vector <float> coll1;
	array<int, 10> coll2;
	//vector<User> coll3(123); // ����� ����������� �� ��������� ��� 123 �������� ���� User
	vector<User> coll3;
	//array<User, 10> coll4; // ��� array - ����� ������������

	for (int i = 0; i < 100'000; i++)
	{
		coll3.emplace_back(i, "long name for example"); // ������ ���������� ������� �������
	}
	a = coll3.capacity();
	coll3.shrink_to_fit();
	a = coll3.capacity();

	vector<User> coll5;
	coll5.reserve(100'000);
	for (int i = 0; i < 100'000; i++) 
	{
		coll5.push_back(User(i, "long name for example"));
	}

	coll5.shrink_to_fit();

	int arr[5];
	for (auto ae : arr)
	{

	}

	return 0;
}