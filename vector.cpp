#include<iostream>
using namespace std;

void AddVectors(int *a, int *b, int *c, int size)
{
	for(int i = 0; i < size; i++)
	{
		c[i] = a[i] + b[i];
	}
}

void ReadVector(int *vector, int size)
{
	for(int i = 0; i < size; i++)
	{
		cin >> vector[i];
	}
}

void ShowVector(int *vector, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << vector[i] << ' ';
	}
	cout << endl;
}

int main()
{
	int vec_size;
	int *x, *y, *z;
	cout << "Enter Size of Vector:" << endl;
	cin >> vec_size;
	x = new int[vec_size];
	y = new int[vec_size];
	z = new int[vec_size];
	cout << "Enter elements of vector x:" << endl;
	ReadVector(x, vec_size);
	cout << "Enter elements of vector y:" << endl;
	ReadVector(y, vec_size);
	AddVectors(x, y, z, vec_size);
	cout << "Summation Vector z = x + y:" << endl;
	ShowVector(z, vec_size);
	delete x;
	delete y;
	delete z; 
	return 0;
	
}
