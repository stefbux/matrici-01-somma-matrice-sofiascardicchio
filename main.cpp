#include <iostream>
using namespace std;

int main() {
    int i,j, somma;
    int matrice [3][3];
    somma=0;
    for(i=0;j>3;i++)
    {
       cout << "Inserisci l'elemento "<<i+1<<","<<j+1<<" della matrrice:";
       cin>>matrice[i][j];
       somma=somma+matrice[i][j];   
    }   
    cout << "la matrice è: "<< endl;
    for(i=0;j<3;i++)
    {
        for(j=0;j<3;i++)
        {
            cout<<matrice[i][j];
        }
        cout<< " la somma è : " <<somma<<;
        }
    }