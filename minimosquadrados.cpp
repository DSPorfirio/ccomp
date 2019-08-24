#include<bits/stdc++.h>

using namespace std;

    /* Aluno: Danilo da Silva Porfírio
    Disciplina: Matemática Computacional
    Objetivo: Obter a reta que melhor se ajusta os pontos através do 
    Método de Regressão Linear dos Quadrados Mínimos. */

struct pontos{
    float x, y;
};

int main(){
    int quantidade;
    float somaX, somaY, somaXY, somaX2;
    
    cout << "Quantidade de pontos para X e Y: ";
    cin >> quantidade;
    
    pontos v[quantidade];
    
    cout << "Pontos de X (digite separados por espaco): ";
    
    for(int i=0; i<quantidade; i++){
        cin >> v[i].x;
        somaX += v[i].x;
        somaX2 += pow(v[i].x, 2);
    }
    
    cout << "Pontos de Y (digite separados por espaco): ";
    
    for(int i=0; i<quantidade; i++){
        cin >> v[i].y;
        somaY += v[i].y;
        somaXY += v[i].x * v[i].y;
    }
    
    float a, b;
    
    a = ((somaX * somaY) - (quantidade * somaXY)) / ((pow(somaX, 2)) - (quantidade * somaX2));
    b = (somaY - (a * somaX)) / quantidade;
    
    cout << fixed << setprecision(4);
    
    cout << "\nValor A: " << a << "\nValor B: " << b << "\nSomatorio de X: " 
    << somaX <<"\nSomatorio de Y: " << somaY << "\nSomatorio de X*Y: " 
    << somaXY << "\nSomatorio de X²: " << somaX2 << endl;
    
    cout << "\nEquancao da reta: Ax + B\nEquacao da reta para os pontos: " << a << "*x + " << b << endl;
}
