#include"Mylibrary.h"
/*дз:
* 1.Создать класс Попугай на основе Animal, реализовать нужные интерфейсы
* 2. Создать класс Самолет, и реализовать нужный интерфейс.
* 3. Создать функцию, который может работать и с объектом класса самолет, и с объектом класса попугай!!
*/
class Ship :public ISwim
{
public:
	virtual void Swim()
	{
		cout << "Корабль- водный транспорт\n";
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
	Pinguin obj("Королевский пингвин", 100, "Арктика");
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