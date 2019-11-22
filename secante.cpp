#include<bits/stdc++.h>

using namespace std;

/* Aluno: Danilo da Silva Porfírio
    Disciplina: Matemática Computacional
    Objetivo: Obter a raíz da equação baseado em aproximação linear utilizando o método da secante,
    Métodos para obtenção de raízes de equações */

    //Função utilizada: (x³ - 9x + 3) -> linha 18 - 19; 40.

int main(){
    float a,b; // intervalo inicial, intervalo final
    int iter=0, iterMax; //iteração atual, máximo de iterações
    float deltaX, toler; //erro, tolerancia
    float fx, fa, fb, x; //função, função com valor de a, função com valor de b

    cout << "Digite em ordem separado por espaco: Intervalo inicial, Intervalo final, tolerancia, maximo de iteracoes:" << endl;
    cin >> a >> b >> toler >> iterMax;

    fa = ((pow(a,3)) - (9*a) + 3); //3 -> -5
    fb = ((pow(b,3)) - (9*b) + 3); //-5 -> 3

    if (fabs(fa) < fabs(fb)){
        swap(a, b);
        swap(fa, fb);
    }

    deltaX = toler; //erro
    x = b;
    fx = fb;

    
    cout << "i      " << "a         " << "b             " << "x        " << "f(a)      " << "f(b)      " << "f(x)      " << "erro      " << endl;
    cout << fixed << setprecision(4);
    cout << iter << "    " << a << "    " << b << "        " << x << "    " << fa << "     " << fb << "    " << fx << "    " << "-" << endl;
    
    iter++;
    
    while(iter <= iterMax && fabs(deltaX) >= toler){
        deltaX = -fx/(fb - fa) * (b-a);
        x = x + deltaX;
        fx = ((pow(x,3)) - (9*x) + 3);
        cout << iter << "    " << a << "    " << b << "        " << x << "    " << fa << "    " << fb << "    " << fx << "    " << deltaX << endl;
       
        a = b;
        fa = fb;
        b = x;
        fb = fx;
        iter++;
    }

    return 0;
}