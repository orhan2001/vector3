#include <iostream>
#include"vector3.h"

using namespace std;


Vector3::Vector3(int iks, int igre, int zet) // конструктор 
{
	x = iks;
	y = igre;
	z = zet;

}

Vector3::Vector3()
{
	x = 1;
	y = 1;
	z = 1;
}


Vector3::Vector3(int iks1, int igre1, int zet1, int iks2, int igre2, int zet2)
{
	x = iks2 - iks1;
	y = igre2 - igre1;
	z = zet2 - zet1;
	
}


Vector3  Vector3::sum(Vector3 line1)
{
	x = x + line1.x;
	y = y + line1.y;
	z = z + line1.z;

	return Vector3(x,y,z);
}

void Vector3::print()
{


	cout <<"x = " << x << "\ny = " << y << " \nz = " << z << endl;



}
Vector3  Vector3::minus(Vector3 line1)
{
	x = x - line1.x;
	y = y - line1.y;
	z = z - line1.z;

	return Vector3(x, y, z);
}

Vector3  Vector3::mult(int num)
{
	x = x * num;
	y = y * num;
	z = z * num;

	return Vector3(x, y, z);
}

int Vector3::sizeV(Vector3 line1)
{
	cout<< "size" << "= "<< int(sqrt((x * x) + (y * y) + (z * z))) << endl;
	 return 0;
}



int Vector3::ckalMult(Vector3 line1)
{
	int sum1;
	x = x * line1.x;
	y = y * line1.y;
	z = z * line1.z;
	sum1 = x + y + z;
	return  sum1;
}




Vector3 Vector3::operator+(Vector3  line1)
{
	int newx = x + line1.x;
	int newy = y + line1.y;
	int newz = z + line1.z;


return Vector3(newx, newy, newz);
	
}


