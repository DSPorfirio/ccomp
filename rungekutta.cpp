#include<bits/stdc++.h>

using namespace std;

 /* Aluno: Danilo da Silva Porfírio
    Disciplina: Matemática Computacional
    Objetivo: Encontrar o valor da função utilizando o método de Runge-Kutta,
    Equações Diferenciais Ordinárias (EDO's), Ordem 4 */

    //Função utilizada: (dy/dx = 2x - 2) -> linha 38 - 41.

struct vet{
    float x, y;
};

int main(){
    int a,b,m,yo;
    //respectivamente: limiteInferior, limiteSuperior, subIntervalos, valorInicial
    
    float h, xt, x, y, k1, k2, k3, k4;
    vet v[m];

    cout << "Digite os valores em ordem: (seperados por espaco)" << endl;
    cout << "Limite inferior (x inicial), limite superior (x final), numero de subintervalos valor inicial: " << endl;   
    cin >> a >> b >> m >> yo;

    h = ((float(b-a))/float(m));
    xt = a;
    v[0].x = xt;
    v[0].y = yo;

    printf("i      x         k1            k2             k3            k4          y\n");
    printf("%d   %.4f       %s             %s              %s             %s        %.4f\n", 0, 0.0, "-", "-", "-", "-", v[0].y);

    for(int i=1; i<=m; i++){
        xt = a+i*h;

        k1 = h * ((2*v[i-1].x) - 2);
        k2 = h * (2*(v[i-1].x + (h/2)) - 2);
        k3 = h * (2*(v[i-1].x + (h/2)) - 2);
        k4 = h * ((2*(v[i-1].x + h)) - 2);
        
        v[i].x = xt;
        v[i].y = v[i-1].y + ((k1/6) + (k2/3) + (k3/3) + (k4/6));

        printf("%d   %.4f    %.4f       %.4f       %.4f       %.4f      %.4f\n", i, v[i].x, k1, k2, k3, k4, v[i].y);

    }

    return 0;
}