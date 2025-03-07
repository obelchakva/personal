//Задание: реализовать классы: Человек, Воин, Лучник, Маг
//Воин лучник и маг должны быть наследниками класса Человек
#include <iostream>
#include <string>

using namespace std;

struct Person 
{

	string name;
	unsigned age;
	void print()
	{
		cout << "(Person)" << " Name: " << name << " Age: " << age << endl;
	}

};

struct Warrior 
{

	int power;
	int speed;
	int attack_distance;
	int attack_speed;
	void print()
	{
		cout << "(Warrior)" << " Power: " << power << " Speed: " << speed << " Attack_distance: " << attack_distance << " Attack speed: " << attack_speed << endl;
	}

};

struct Archer 
{

	int power;
	int speed;
	int attack_distance;
	int attack_speed;
	int number_of_arrows;
	void print()
	{
		cout << "(Archer)" << " Power: " << power << " Speed: " << speed << " Attack_distance: " << attack_distance << " Attack speed: " << attack_speed << " Number of arrows: " << number_of_arrows << endl;
	}


};

struct Wizard 
{

	string type;
	int power;
	int speed;
	int attack_distance;
	int attack_speed;
	int splash;
	void print()
	{
		cout << "(Wizard)" << " Type: " << type  << " Power: " << power << " Speed: " << speed << " Attack_distance: " << attack_distance << " Attack speed: " << attack_speed << " Splash: " << splash << endl;
	}

};

int main() 
{

	Person person;
	person.name = "Casey";
	person.age = 20;
	person.print();

	Warrior warrior;
	warrior.power = 5;
	warrior.speed = 10;
	warrior.attack_distance = 1;
	warrior.attack_speed = 8;
	warrior.print();

	Archer archer;
	archer.power = 3;
	archer.speed = 4;
	archer.attack_distance = 10;
	archer.attack_speed = 4;
	archer.number_of_arrows = 20;
	archer.print();

	Wizard wizard;
	wizard.type = "fire";
	wizard.power = 7;
	wizard.speed = 6;
	wizard.attack_distance = 5;
	wizard.attack_speed = 6;
	wizard.splash = 3;
	wizard.print();

}
