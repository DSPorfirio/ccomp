#include<bits/stdc++.h>
#include<math.h>

using namespace std;

/* Aluno: Danilo da Silva Porfírio
    Disciplina: Matemática Computacional
    Objetivo: Encontrar a raiz (zeros) da equação nos intervalos utilizando o método de Bisseção,
    Métodos para obtenção de raízes de equações */

    //Função utilizada: (x² - 10) -> linha 22 - 24; 44.

int main(){
    int iterMax, iter=0; //maximo de iterações e iteração atual
    float a, b; //intervalos inicial - final
    float toler, deltaX; //tolerância e erro
    float fa, fb, fx; // função com valor de a e b
    float x; //valores da função

    cout << "Digite na ordem: (separados por espaco)" << endl;
    cout << "intervalo inicial, intervalo final, maximo de iteracoes, tolerancia" << endl;
    cin >> a >> b >> iterMax >> toler;

    x = fabs(a+b)/2; //fabs = modulo de dois numeros reais

    fa = (pow(a,2) - 10); //fx em função de a
    fb = (pow(b,2) - 10); //fx em função de b
    fx = (pow(x,2) - 10); //fx em função de x

    if (fa * fb > 0){
        cout << "A funcao nao muda de sinal nos estremos do intervalo dado" << endl;
        return 0;
    }else{
        deltaX = (abs(b-a))/2;
        printf("k      a        b        x        f(a)     f(b)       f(x)     erro\n");
        printf("%d   %.4f   %.4f   %.4f   %.4f   %.4f   %.4f   %.4f\n", iter, a, b, x, fa, fb, fx, deltaX);
        iter++;

        if(fx < 0){
            fa = fx;
            a = x;
        }else{
            fb = fx;
            b = x;
        }

        while((deltaX > toler) && (iter < iterMax)){
            fx = (pow(x,2) - 10);
            printf("%d   %.4f   %.4f   %.4f   %.4f   %.4f   %.4f   %.4f\n", iter, a, b, x, fa, fb, fx, deltaX);
            
            if(fx < 0){
                fa = fx;
                a = x;
            }else{
                fb = fx;
                b = x;
            }

            x = fabs(a+b)/2;
            deltaX = (abs(b-a))/2; 
            
            iter++;
        }
    }

    return 0;
}
