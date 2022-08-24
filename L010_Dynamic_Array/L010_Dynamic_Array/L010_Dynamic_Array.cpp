//**************************************************************************************
// L010_Dynamic_Array.cpp: 
// Динамический массив | Lesson 10
//--------------------------------------------------------------------------------------
// С++ | Visual Studio 2015 
//--------------------------------------------------------------------------------------
// Gosha Dudar - C++ lessons from scratch
// https://www.youtube.com/watch?v=qSHP98i9mDU&list=PL0lO_mIqDDFXNfqIL9PHQM7Wg_kOtDZsW
// Writing by sgiman @ 2022
//**************************************************************************************

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

    /******** ДИНАМИЧЕСКОЕ ВЫДЕЛЕНИЕ ПАМЯТИ ********/

	/*----- ДЛЯ ПЕМЕННЫХ -----*/
	
	int *ptrnum = new int;			// выделить по указателю ptrnum динамическую память под объeкт int
	// int *ptrnum = new int(7);	// или
	*ptrnum = 7;					// занести данные по указателю
	cout << "\n*ptrnum = " << *ptrnum << endl << endl;
	delete ptrnum;	// Осводить память (просто удалить указатель) - "deletе должен быть всегда после выполнения кода с "new" 

	/*----- ДЛЯ МAССИВОВ -----*/
	float *ptrarray = new float[10];	// выделить динамическую память для массива 
	
	for (int i = 0; i < 10; i++)		// заполненине 	
	{
		ptrarray[i] = rand() & 100 + 1;  // случайные числа 1...100
	}
	for (int i = 0; i < 10; i++)		// вывод
	{
		cout << ptrarray[i] << " ";
	}
	
	delete [] ptrarray; // очистить динамичекую память от массива (delete вегда необходим по завершению обработки динамических данных после "new")


	/************ END **********/
	cout << "\n\nHELLO WORLD!\n";
	cin.get();	// <iostream>
	return 0;
}

