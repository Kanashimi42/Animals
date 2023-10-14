#include"Mylibrary.h"
/*��:
* 1.������� ����� ������� �� ������ Animal, ����������� ������ ����������
* 2. ������� ����� �������, � ����������� ������ ���������.
* 3. ������� �������, ������� ����� �������� � � �������� ������ �������, � � �������� ������ �������!!
*/
class Ship :public ISwim
{
public:
	virtual void Swim()
	{
		cout << "�������- ������ ���������\n";
	}
};

void MyFunc(ISwim* ptr)
{
	ptr->Swim();
}

void MyFunc(IFly* ptr)
{
	ptr->Fly();
}


int main()
{
	Pinguin obj("����������� �������", 100, "�������");
	Animal* ptr = &obj;
	ptr->Eat();
	ptr->Print();
	ptr->Continent();
	ISwim* pt = &obj;
	pt->Swim();


	MyFunc(&obj);

	Ship sh;
	MyFunc(&sh);




	Parrot parrot("Corella", 1, "Africa");
	ptr = &parrot;
	ptr->Eat();
	ptr->Print();
	ptr->Continent();
	IFly* fly = &parrot;
	fly->Fly();
	MyFunc(&parrot);


	Airplane airplane;
	IFly* airplaneFly = &airplane;
	airplaneFly->Fly();
	MyFunc(&airplane);


	return 0;
}