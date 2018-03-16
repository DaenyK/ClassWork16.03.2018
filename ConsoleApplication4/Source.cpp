#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include "Header.h"

using namespace std;
unsigned short int q;

enum city { Almaty, Astana };

#define MAX50 50
#define MAX12 12


struct address
{
	city city;
	char region[MAX50];
	char streetName[MAX50];
	int house;
	int app;
	int zip;
};

struct student
{
	char fName[MAX50];
	char iName[MAX50];
	char dateOfBirth[MAX12];
	int Age;
	struct address address;
};

void sl(int age)
{
	if (age < 18)
		printf("вы слишком молоды");
}

//использование функции через адрес
void PrintfStudentInfo(struct student*student)
{
	printf("инфа о студенте: \n");
	sl(student->Age);
	printf("\n--------\n\n");

		printf("--> %s %s",
		 student->fName, student->iName);
	printf("\n---------------------------------------------------\n\n");
}

//копирование
void PrintfStudentInfo(struct student student)
{
	printf("инфа о студенте: \n");
	printf("--> %s %s",
		student.fName, student.iName);
	printf("\n---------------------------------------------------\n\n");
}

void PrintfStudentInfo(struct student*students, int count)
{
	printf("список: \n");
	for (int i = 0; i < count; i++)
	{
		PrintfStudentInfo(&students[i]);
	}
	printf("\n---------------------------------------------------\n\n");
	printf("итого: %d поступающих \n", count);
}



void main()

{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#pragma region
	//struct student students[2]; //массив структур 

	//students[1].address.city = Almaty;
	//strcpy(students[1].address.region, "алматинская область");
	//strcpy(students[1].address.streetName, "козы корпеш 12");


	//int count = 0;
	//int index;
	//printf("введите имя студента:\n");

	//while (count < 2
	//	&& gets_s(students[count].fName) != NULL
	//	&& students[count].fName[0] != '\0')
	//{

	//	printf("введите фамилию студента\n");
	//	gets_s(students[count].iName);

	//	printf("введите возраст:\n");
	//	scanf("%d", &students[count].Age);

	//	while (getchar() != '\n')
	//		continue;

	//	count++;


	//	if (count < 2)
	//		printf("Введите имя студента\n");
	//}

	//printf("\n---------------------------------------------------\n\n");
	//if (count > 0)
	//	PrintfStudentInfo(students, count);
	//else
	//	printf(":D\n");


	//struct student dana //= int Dana; 
	//{
	//		"Dana",
	//		"Kapasheva",
	//		"02.07.1994",
	//		24,
	//		NULL,
	//		Almaty
	//};

	//struct student	ivan;
	//ivan.Age = 23;
	//ivan.city = Astana;

	//printf("student #1 %c %s - %d", dana.fName[0], dana.iName, dana.Age);
#pragma endregion






	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{
		case 1:
		{
			struct football fbs[5];
			fbs[0].age = 18;
			strcpy(fbs[0].lname, "AJ");
			fbs[0];
		}break;

		case 2:
		{
			//Определить средний бал оценок по всем предметам, и вывести сведения о студентах, средний балл которых больше 4.
			struct student
			{
				char name[MAX50];
				int group;
				int fizika;
				int intform;
				int history;
				float sr;
			};

			struct student students[3];

			for (int i = 0; i < 4; i++)
			{
				gets_s(students[i].name);
				students[i].group = rand() % 3;
				students[i].fizika = 2+rand() % 5;
				students[i].intform = 2+rand() % 5;
				students[i].history = 2+rand() % 5;
			}

			for (int i = 0; i < 4; i++)
			{
				if (students[i].sr > 4)
					printf("Имя студента: %s и его средний балл: %d\n\n", students[i].name, students[i].sr);
				else
					printf("у всех плохие оценки");
			}
		}break;

		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}