#include <iostream>
#include "vector3.h"
  

using namespace std;


int main() {
		Vector3 vector3(2,1,1);
		Vector3 vector1(0,0,2);

		Vector3 vector2;
		//vector1.sum(vector2);
		//vector1.print();

		//vector1.minus(vector2);
		//vector1.print();
		//vector1.sum(vector2);
		//vector1.print();
		//vector2.print();
		//operator+(vector3).print();
		//vector1.operator+(vector3);

		vector1.sizeV(vector1);
		//vector1.ckalMult(vector2);
		//vector1.print();


		Vector3 S1, S2;
		S1 = vector1 + vector2;
		S1.print();
		cout << endl;
		S2 = vector1.sum(vector2);
		S2.print();
	
	
	return 0;

}