#pragma once
using namespace std;

class Math{

	private:
		int A[50][50], B[50][50], C[50][50];						//pa los números de las matrices
		int fA, cA, fB, cB;											//pa que jale la matriz, si no pos no
		int multipleoptions;										//pal menú
	public:
		void option();												//pa que elija kpdo
		void multiply();											//pa la multi
		void plus();												//pa la suma
		void less();												//pa la resta
		void calculator();

};

