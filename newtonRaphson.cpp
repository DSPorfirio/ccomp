#include<bits/stdc++.h>

using namespace std;

/* Aluno: Danilo da Silva Porfírio
    Disciplina: Matemática Computacional
    Objetivo: Encontrar a raiz (zeros) da equação nos intervalos utilizando o método de Newton Raphson,
    Métodos para obtenção de raízes de equações */

    //Função utilizada: (x² + x - 6) -> linha 22 - 23.

int main(){
    float x0, toler; //valor inicial, tolerância
    int iter=0, iterMax; //iteração atual, máximo iterações

    cout << "Digite em ordem separados por espaco:" << " Valor inicial, tolerancia, maximo de iteracoes:" << endl;
    cin >> x0 >> toler >> iterMax;

    float deltaX = toler; //toller
    float Fx,DFx; //função, derivada da função
    
    cout << "k       " << "x        " << "f(x)         " << "f'(x)      " << "erro    " << endl;

    while(iter <= iterMax && fabs(deltaX) >= toler){
        Fx = (pow(x0,2) + x0 - 6);
        DFx = (2*x0 + 1);
        deltaX = -(Fx/DFx);
        cout << fixed << setprecision(4);
        cout << iter << "    " << x0 << "    " << Fx << "        " << DFx << "    " << deltaX << endl;
        x0 = x0 + deltaX;
        iter++;
    }


    return 0;
}