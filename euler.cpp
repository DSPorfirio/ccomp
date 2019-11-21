#include<bits/stdc++.h>

using namespace std;

 /* Aluno: Danilo da Silva Porfírio
    Disciplina: Matemática Computacional
    Objetivo: Encontrar o valor da função utilizando o método de Euler,
    Equações Diferenciais Ordinárias (EDO's),  */

    //Função utilizada: (dy/dx = 2x - 2) -> linha 38.

struct vet{
    float x, y;
};

int main(){
    float a,b,yo; //limiteInferior, limiteSuperior, valorInicial
    int m; //subIntervalos
    
    float h, x, y;

    cout << "Digite os valores em ordem: (separados por espaco)" << endl;
    cout << "Limite inferior (x inicial), limite superior (x final), numero de subintervalos valor inicial: " << endl;   
    cin >> a >> b >> m >> yo;

    vet v[m];
    h = (b-a)/m;
    x = a;
    y = yo;
    v[0].x = x;
    v[0].y = y;
    
    printf("i      x        y\n");
    printf("%d   %.4f   %.4f   \n", 0, 0.0, y);

    for(int i=1; i<=m; i++){
        x = a+i*h;
        y = v[i-1].y + (h*((2*v[i-1].x)-2)); //Função = (2*x[i-1] - 2) -> (2*v[i-1].x - 2)
        printf("%d   %.4f   %.4f\n", i, x, y);
        v[i].x = x;
        v[i].y = y;
    }
    
    return 0;
}
