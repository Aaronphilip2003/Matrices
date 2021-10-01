#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4;
    cout<<"Enter the number of rows of the first matrix:"<<endl;
    cin>>n1;
    cout<<"Enter the number of columns of the first matrix:"<<endl;
    cin>>n2;
    cout<<"Enter the number of rows of the second matrix:"<<endl;
    cin>>n3;
    cout<<"Enter the number of columns of the second matrix:"<<endl;
    cin>>n4;
    int matrix1[n1][n2];
    int matrix2[n3][n4];
    int finalmatrix[n1][n4];
    if (n2!=n3)
    {
        cout<<"Matrix Multiplication not possible:"<<endl;
    }
    else
    {
        cout<<"Enter the Elements of the First Matrix:"<<endl;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                cin>>matrix1[i][j];
            }
        }
        cout<<"Enter the Elements of the Second Matrix:"<<endl;
        for(int i=0;i<n3;i++)
        {
            for(int j=0;j<n4;j++)
            {
                cin>>matrix2[i][j];
            }
        }
    }
    cout<<"Matrix 1"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2:"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After Matrix Multiplication:"<<endl;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n4;j++)
        {
            finalmatrix[i][j]=0;
            for(int k=0;k<n2;k++)
            {
            finalmatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    for (int i=0;i<n1;i++)
    {
     for(int j=0;j<n2;j++)
        {
            cout<<finalmatrix[i][j]<<" ";
        }   
        cout<<endl;
    }
    return 0;
}