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
void showMatrix(const bool a[][N])
{
    for(int x=0;x<N;x++)
    {
        for(int y=0;y<N;y++)
        {
            cout<<a[x][y]<<" ";
        }
        cout<<"\n";
    }
}
void findLocalMax(const double A[][N], bool B[][N]){
    for(int ka = 0; ka < N ; ka++){
		for(int a = 0; a < N ; a++){
			if ((A[a][ka] >= A[a+1][ka]) && (A[a][ka] >= A[a-1][ka]) && (A[a][ka] >= A[a][ka-1]) && (A[a][ka] >= A[a][ka+1])){
				if ((a != 0) && (a != N-1) && (ka != 0) && (ka != N-1)){
				    B[a][ka] = 1;
			    }
				else B[a][ka] = 0;
			}
			else B[a][ka] = 0;
		}
	}
}
void inputMatrix(double a[][N])
{
    for(int x=0;x<N;x++){
        cout <<"Row "<<x+1<<": ";
        for(int y=0;y<N;y++)
        {
            cin>>a[x][y];
            
        }
       
    }
}