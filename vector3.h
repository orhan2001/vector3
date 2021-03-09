#pragma once


using namespace std;

class Vector3 {
	private:
		int x, y, z ,x1 ,y1, z1 ,A;


	public:
		 Vector3();															   // конструктор 
		 Vector3(int iks, int igre, int zet);								   // конструктор 
		 Vector3(int iks1, int igre1, int zet1, int iks2, int igre2, int zet2); // конструктор 

		Vector3 operator+ (Vector3  line1);

		Vector3 sum(Vector3 line1);
		void print();
		Vector3 minus(Vector3 line1);
		Vector3 mult(int num);
		int ckalMult(Vector3 line1);
		int sizeV(Vector3 line1);



};