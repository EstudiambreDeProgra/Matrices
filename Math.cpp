#include "Math.h"
#include<iostream>
using namespace std;

void Math::option() {

	cout << "\nChoose the array operation:\n";
	cout << "\n 1) Multiplication";
	cout << "\n 2) Adition";
	cout << "\n 3) Substraction";
	cout << "\n 4) Sine, Cosine and Tangent\n";
	cout << "\n Write 5 or 0 to exit\n" << "  ";

	cin >> multipleoptions;
	
	switch (multipleoptions) {
		case 1: multiply();
			break;
		case 2: plus();
			break;
		case 3: less();
			break;
		case 4:
			calculator();
			break;
	}

	if (multipleoptions > 5) {
		do {
			option();
		} while (multipleoptions > 5);
	}

}

void Math::multiply() {

	if (multipleoptions == 1) {
		cout << "\nYou choosed Multiplication\n";
	}
	cout << "Write the lines of A: ";
	cin >> fA;
	cout << "Write the pillars of A: ";
	cin >> cA;
	cout << "Write the lines of B: ";
	cin >> fB;
	cout << "Write the pillars of B: ";
	cin >> cB;


	if (cA == fB) {													//pa que sea válida

		cout << "\nWrite the array values of A:\n";
		for (int i = 0; i < fA; i++) {
			for (int j = 0; j < cA; j++) {
				cout<<"Type the date [" << i << "][" << j << "]: ";
				cin >> A[i][j];
			}
		}
		cout << "\nWrite the array values of B:\n";
		for (int i = 0; i < fB; i++) {
			for (int j = 0; j < cB; j++) {
				cout << "Array B: [" << i << "][" << j << "]: ";
				cin >> B[i][j];
				cout << "\n";
			}
		}

		for (int i = 0; i < fA; i++) {						//imprimir A
			for (int j = 0; j < cA; j++) {
				cout <<A[i][j]<<"\n";
			}
			cout << "\n";
		}
	
		for (int i = 0; i < fB; i++) {						//imprimir B
			for (int j = 0; j < cB; j++) {
				cout << B[i][j]<<" "<<"\n";
			}
			cout << "\n";
		}

		for (int i = 0; i < fA; i++) {
			for (int j = 0; j < cB; j++) {
				C[i][j] = 0;							  		  //pa que no salgan otros resultados
			}
		}

		for (int i = 0; i < fA; i++) {							//multiplicación
			for (int j = 0; j < cB; j++) {
				for (int k = 0; k < cA; k++) {
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}

		cout << "\n Result: \n";
			for (int i = 0; i < fA; i++) {
				for (int j = 0; j < cB; j++) {
					cout << C[i][j] << " ";
				}
				cout << "\n";
			}


	}
	else
		cout << "\nThat operation have no solution\n";
		cout << "\nChoose another option:\n";

		do {
			option();
		} while (multipleoptions > 5);
}


void Math::plus() {

	if (multipleoptions == 2) {
		cout << "\nYou choosed Adition\n";

		cout << "\nWrite the array values of A:\n";
		for (int i = 0; i < fA; i++) {
			for (int j = 0; j < cA; j++) {
				cout << "Type the date [" << i << "][" << j << "]: ";
				cin >> A[i][j];
			}
		}
		cout << "\nWrite the array values of B:\n";
		for (int i = 0; i < fB; i++) {
			for (int j = 0; j < cB; j++) {
				cout << "Array B: [" << i << "][" << j << "]: ";
				cin >> B[i][j];
				cout << "\n";
			}
		}

		for (int i = 0; i < fA; i++) {						//imprimir A
			for (int j = 0; j < cA; j++) {
				cout << A[i][j] << "\n";
			}
			cout << "\n";
		}

		for (int i = 0; i < fB; i++) {						//imprimir B
			for (int j = 0; j < cB; j++) {
				cout << B[i][j] << " " << "\n";
			}
			cout << "\n";
		}

		for (int i = 0; i < fA; i++) {
			for (int j = 0; j < cB; j++) {
				C[i][j] = 0;							  		  //pa que no salgan otros resultados
			}
		}

		for (int i = 0; i < fA; i++) {							//suma
			for (int j = 0; j < cB; j++) {
				for (int k = 0; k < cA; k++) {
					C[i][j] = C[i][j] + A[i][k] + B[k][j];
				}
			}
		}

		cout << "\n Result: \n";								//resultado
		for (int i = 0; i < fA; i++) {
			for (int j = 0; j < cB; j++) {
				cout << C[i][j] << " ";
			}
			cout << "\n";
		}

		do {
			option();
		} while (multipleoptions > 5);

	}
}

void Math::less() {

	if (multipleoptions == 3) {
		cout << "\nYou choosed Substraction\n";
	}

	cout << "\nWrite the array values of A:\n";
	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cA; j++) {
			cout << "Type the date [" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}
	cout << "\nWrite the array values of B:\n";
	for (int i = 0; i < fB; i++) {
		for (int j = 0; j < cB; j++) {
			cout << "Array B: [" << i << "][" << j << "]: ";
			cin >> B[i][j];
			cout << "\n";
		}
	}

	for (int i = 0; i < fA; i++) {						//imprimir A
		for (int j = 0; j < cA; j++) {
			cout << A[i][j] << "\n";
		}
		cout << "\n";
	}

	for (int i = 0; i < fB; i++) {						//imprimir B
		for (int j = 0; j < cB; j++) {
			cout << B[i][j] << " " << "\n";
		}
		cout << "\n";
	}

	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cB; j++) {
			C[i][j] = 0;							  	  //pa que no salgan otros resultados
		}
	}

	for (int i = 0; i < fA; i++) {							//resta
		for (int j = 0; j < cB; j++) {
			for (int k = 0; k < cA; k++) {
				C[i][j] = C[i][j] + A[i][k] - B[k][j];
			}
		}
	}

	cout << "\n Result: \n";
	for (int i = 0; i < fA; i++) {
		for (int j = 0; j < cB; j++) {
			cout << C[i][j] << " ";
		}
		cout << "\n";
	}

	do {
		option();
	} while (multipleoptions > 5);

}

void Math::calculator() {

	if (multipleoptions == 4) {

		float sexa, radian, cosine, tang, sine;

		cout << "\nYou choosed Sine, Cosine and Tangent\n";
		cout << "Write the sexa value: ";
		cin >> sexa;

		radian = (3.1416 / 180) * sexa;

		cosine = cos(radian);
		sine = sin(radian);
		tang = tan(radian);

		cout << "\n Coseno: " << cosine;
		cout << "\n Sino: " << sine;
		cout << "\n Tangent: " << tang;

	}
	cout << "\n";

	do {
		option();
	} while (multipleoptions > 5);
}