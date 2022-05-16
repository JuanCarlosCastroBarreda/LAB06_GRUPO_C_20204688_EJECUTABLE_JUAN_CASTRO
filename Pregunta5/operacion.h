#include <iostream>
#include <string>
#include <ctime>

using namespace std;

bool n_repite(int m[][3], int random){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(random==m[i][j]){
                return false;
            }
        }
    }
    return true;
}

void operacion(){
    int m[3][3], n , random, columna, fila;
    bool verificar=false;
    srand(time(0));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            random=(rand()%9)+1;
            while(n_repite(m,random)==false){
                random=(rand()%9)+1;
            }
            m[i][j] = random;
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"numero: "<<endl;
    cin>>n;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(n==m[i][j]){
                columna=j;
                fila=i;
                verificar=true;
            }
        }
    }
    if(verificar==true){
        cout<<"esta en la posicion ["<<fila<<"] ["<<columna<<"]"<<endl;
    }
}