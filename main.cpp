#include <iostream>
#include "matrix.h"
#include <iomanip>
using namespace std;

                /// enter & out data of the matrices by using overloaded operator
istream& operator>> (istream& in, matrix& mat){
    cout<<"Enter the row of Matrix: ";
    in>>mat.row;
    cout<<endl;
    cout<<"Enter the column of Matrix: ";
    in>>mat.col;
    cout<<endl;
    cout<<"Enter the data of Matrix: ";
    mat.data=new int [mat.col*mat.row];
    for (int i=0; i<(mat.col*mat.row);++i){
            in>>mat.data[i];
    }

    return in;
}

ostream& operator<< (ostream&out,matrix mat){

    cout<<endl<<"The Data of Matrix......."<<endl<<endl;
    int  counter =0;
    for (int x = 0; x<mat.col*mat.row; x++)
    {
        if (counter == mat.col)
        {
            cout << endl;
            counter = 0;
        }
        counter += 1;
        cout << mat.data[x] <<" ";
    }
    return out;
    }

int main(){
   while (true){
    matrix mat1,mat2;
    int scalar,z;
    cout<<endl<<endl;
    cout<<"1-operator+\n2-operator-\n3-operator*\n4-operator+(Scalar)\n5-operator-(Scalar)\n6-operator*(Scalar)"<<endl;
    cout<<"7-operator+=\n8-operator-=\n9-operator+=(Scalar)\n10-operator-=(Scalar)\n11-operator++\n12-operator--"<<endl;
    cout<<"13-bool operator==\n14-bool operator!=\n15-bool isSquare\n16-bool isSymmetric\n17-bool isIdentify\n18-Matrix transpose "<<endl;
    cout<<"19-operator= "<<endl;
    cin>>z;
    if (z==1){
        cin>>mat1>>mat2;
        cout<<(mat1+mat2);
    }
    else if (z==2){
        cin>>mat1>>mat2;
        cout<<(mat1-mat2);
    }
    else if (z==3){
        cin>>mat1>>mat2;
        cout<<(mat1*mat2);
    }
    else if(z==4){
        cin>>mat1>>scalar;
        cout<<(mat1+scalar);
    }
    else if(z==5){
        cin>>mat1>>scalar;
        cout<<(mat1-scalar);
    }
    else if(z==6){
        cin>>mat1>>scalar;
        cout<<(mat1 * scalar);
    }
    else if (z==7){
        cin>>mat1>>mat2;
        cout<<(mat1+mat2);
    }
    else if (z==8){
        cin>>mat1>>mat2;
        cout<<(mat1-mat2);
    }
    else if (z==9){
        cin>>mat1;
        cout<<"Enter the Scalar: ";
        cin>>scalar;
        cout<<endl;
        cout<<(mat1+scalar);
    }
    else if (z==10){
        cin>>mat1;
        cout<<"Enter the Scalar: ";
        cin>>scalar;
        cout<<endl;
        cout<<(mat1-scalar);
    }
    else if (z==11){
        cin>>mat1;
        cout<<(mat1+1);
    }
    else if (z==12){
        cin>>mat1;
        cout<<(mat1-1);
    }
    else if (z==13){
       cin>>mat1>>mat2;
       bool test=mat2.operator ==(mat1);
       cout<<test;
    }
    else if (z==14){
      cin>>mat1>>mat2;
      bool test=mat2.operator!=(mat1);
      cout<<test;
    }
    else if (z==15){
       cin>>mat1;
       bool test=mat1.isSquare();
       cout<<test;
    }
    else if (z==16){
       cin>>mat1;
       bool test=mat1.isSymetric();
       cout<<test;
    }
    else if (z==17){
       cin>>mat1;
       bool test=mat1.isIdentity();
       cout<<test;
    }
    else if (z==18){
       cin>>mat1;
       cout<<mat1.transpose();
    }
    else if (z==19){
        matrix mat;
        cin>>mat;
        matrix copyMatrix;
        copyMatrix=mat;
        cout<<copyMatrix;
    }
   }
  return 0;
}
