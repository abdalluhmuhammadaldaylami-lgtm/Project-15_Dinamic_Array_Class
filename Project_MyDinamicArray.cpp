#include<iostream>
#include"clsMyDinamicArray.h"
using namespace std;

int main() {

	clsMyDinamicArray<int>MyDinamicArray(5);

	MyDinamicArray.SetItem(0, 10);
	MyDinamicArray.SetItem(1, 20);
	MyDinamicArray.SetItem(2, 30);
	MyDinamicArray.SetItem(3, 40);
	MyDinamicArray.SetItem(4, 50);

	cout<<"\nIs empty :"<< MyDinamicArray.IsEmpty();
	cout << "\nSize   :" << MyDinamicArray.Size();
	cout << "\n\nthe Print list:\n";
	MyDinamicArray.PrintList();

	MyDinamicArray.InsertAtBigninng(400);
	cout << "\nSize   :" << MyDinamicArray.Size();
	cout << "\nthe Print list:\n";
	MyDinamicArray.PrintList();

	MyDinamicArray.InsertBefore(2,500);
	cout << "\nSize   :" << MyDinamicArray.Size();
	cout << "\nthe Print list:\n";
	MyDinamicArray.PrintList();

	MyDinamicArray.InsertAfter(2,600);
	cout << "\nSize   :" << MyDinamicArray.Size();
	cout << "\nthe Print list:\n";
	MyDinamicArray.PrintList();

	MyDinamicArray.InsertEnd(800);
	cout << "\nSize   :" << MyDinamicArray.Size();
	cout << "\nthe Print list:\n";
	MyDinamicArray.PrintList();

}