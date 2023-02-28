#include <iostream>

using namespace std;
int main()
{
	int m=3, n=3, b=3;
	int array1[3][3][3] = {
		{{1,1,1},
		{2,2,2},
		{3,3,3}
		},
		{ {1,1,1},
		{2,2,2},
		{3,3,3}
		},
		{ {1,1,1},
		{2,2,2},
		{3,3,3}
		}
	};
	int array2[3][3][3] = {
		{{6,6,6},
		{5,5,5},
		{4,4,4}},
		{{6,6,6},
		{5,5,5},
		{4,4,4}},
		{{6,6,6},
		{5,5,5},
		{4,4,4}}
	};
	int array3[3][3][3];
	for (int i=0; i < 3; i++) {
		cout << endl;
		for (int j=0; j < 3; j++) {
			cout << endl;
			for (int k = 0; k < 3; k++){
				array3[i][j][k] = array1[i][j][k] + array2[i][j][k];
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++) {
			cout << endl;
			for (int k = 0; k < 3; k++) {
				cout << array3[i][j][k];
			}
		}
	}


	return 0;
}