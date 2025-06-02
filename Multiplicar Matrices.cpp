#include <iostream>
using namespace std;

int main() {
    int dimension;
    cout << "Ingrese el tamaño de las matrices nxn: ";
    cin >> dimension;

    int** matrizA= new int*[dimension];
    for(int i=0;i<dimension;++i)
    {
        matrizA[i]=new int[dimension];
    }
    int** matrizB= new int*[dimension];
    for(int i=0;i<dimension;++i)
    {
        matrizB[i]=new int[dimension];
    }
    
    int** resultado=new int*[dimension];
    for(int i=0;i<dimension;++i)
    {
        resultado[i]=new int[dimension];
        for(int j=0;j<dimension;++j)
        {
            resultado[i][j]=0;
        }
    }
    
    cout<<"\nIngresa los elementos de la matriz A ("<<dimension<<"x"<<dimension<<"):"<<endl;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            cout<<"MatrizA["<<i<<"]["<<j<<"]:";
            cin>>matrizA[i][j];
        }
    }
    
    cout<<"\nIngresa los elementos de la matriz B ("<<dimension<<"x"<<dimension<<"):"<<endl;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            cout<<"MatrizB["<<i<<"]["<<j<<"]:";
            cin>>matrizB[i][j];
        }
    }
    
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
           for(int k=0;k<dimension;++k)
           {
               resultado[i][j]+=matrizA[i][k]*matrizB[k][j];
           }
        }
    }
    
    cout<<"\n---Matriz A---"<<endl;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            cout<<matrizA[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"\n---Matriz B---"<<endl;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            cout<<matrizB[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"\n---Resultado---"<<endl;
    for(int i=0;i<dimension;++i)
    {
        for(int j=0;j<dimension;++j)
        {
            cout<<resultado[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
