#include<iostream>
using namespace std;
class twoDArray
{
	public:
	int size;
	twoDArray(): size(5);
	twoDArray(int x);
	int matrix[5][5];
	void Intialize();
	void Print();
	void Transpose();
	bool isSymmetry();
	void multiply(int arr1[5][5] , int arr2[5][5]);
	
};
twoDArray::twoDArray(): size(5)
	{
	}
twoDArray::twoDArray(int x)
	{
		size=x;
	}
void twoDArray::Intialize()
	{
		for(int row=0;row<size;row++)
		{
			for(int col=0;col<size;col++)
			{
				cout<<"value for ["<<row<<"]["<<col<<"] :";
				cin>>matrix[row][col];
			}
		}
	}
void twoDArray::Print()
	{
		cout<<endl;
			for(int row=0;row<size;row++)
		{
			for(int col=0;col<size;col++)
			{
				cout<<matrix[row][col]<<"\t";
			}
			cout<<endl;
		}
	}
void twoDArray::Transpose()
	{
		cout<<endl;
			for(int col=0;col<size;col++)
		{
			for(int row=0;row<size;row++)
			{
				cout<<matrix[row][col]<<"\t";
			}
			cout<<endl;
		}
	}	
bool twoDArray::isSymmetry()
	{
			for(int col=0;col<size;col++)
		{
			for(int row=0;row<size;row++)
			{
				if(matrix[row][col]!=matrix[col][row])
					{
					   return false;
			        }
		}
			}
			return true;
	}
void twoDArray::multiply(int arr1[5][5] , int arr2[5][5])
	{
		int m[5][5];
		for(int i = 0; i < size; ++i)
		{
            for(int j = 0; j < size; ++j)
            
			{
					for(int k = 0; k < size; ++k)
                    {
                            m[i][j] = a[i][k] * b[k][j];
                    }
			}
		}
		cout << endl << "Matrix after multiplication " << endl;
        for(int i = 0; i < size; ++i)
		{
            for(int j = 0; j < size; ++j)
            {
                cout << " " << m[i][j];
                if(j == size-1)
		        {
                   cout << endl;
		        }
            }

     	}
	}
int main()
{
	twoDArray matrix;
	cout<<"enter the values for matrix : "<<endl;
	matrix.Intialize();
	cout<<"the matrix is : "<<endl;
	matrix.Print();
	cout<<endl;
	cout<<"Transpose of matrix : "<<endl;
	matrix.Transpose();
	cout<<endl;
	cout<<"Symmetry check"<<endl;
	cout<<endl;
    cout<<matrix.isSymmetry();
	int arr1[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	int arr2[5][5]={{11,2,13,14,15},{26,7,2,19,10},{1,2,1,4,5},{6,7,8,9,2},{1,2,3,2,3}};
	 matrix.multiply(arr1,arr2);
	return 0;
}