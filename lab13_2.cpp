#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double input[][N]){
  for(int i=0;i<N;i++){
    cout << "Row " << i+1 << ":";
    for(int j=0;j<N;j++){
      cin >> input[i][j];
    }
    cout <<" ";
  }
  return;
}

void findLocalMax(const double inputa[][N], bool inputb[][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      inputb[i][j] = 0;
    }
  }
  for(int k=1;k<N-1;k++){
    for(int l=1;l<N-1;l++){
      if (inputa[k][l] >= inputa[k - 1][l] && inputa[k][l] >= inputa[k][l + 1] && inputa[k][l] >= inputa[k + 1][l] && inputa[k][l] >= inputa[k][l - 1])
			{
				inputb[k][l] = 1;
			}
    }
  }
  return;
}

void showMatrix(const bool input[][N]){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      cout << input[i][j] << " ";
    }
    cout << endl;
  }
  return;
}