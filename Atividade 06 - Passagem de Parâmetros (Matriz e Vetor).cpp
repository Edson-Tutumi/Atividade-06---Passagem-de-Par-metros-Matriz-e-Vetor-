#include <iostream>
using namespace std;

//A Ex1
/*
void trocaMenorMaior(int *a, int *b){
    int AUX;
    
    if(*a > *b){
        AUX = *a;
        *a = *b;
        *b = AUX;
        cout << "a: " << *a << "b: " << *b;
    }
    else{
        cout << "a: " << *a << "b: " << *b;
    }
}

int main(){
    int x1, x2;
    
    cin >> x1 >> x2;
    trocaMenorMaior(&x1,&x2);
}
*/

//A Ex2 
/*
void parteInteiraReal(double *n1){
    int n2 = *n1;
    cout << "int: " << n2 << endl;
    cout << "real: " << *n1 - n2;
}

int main(){
    double x;
    
    cin >> x;
    parteInteiraReal(&x);
}
*/

//B Ex1 
/*
bool has_zero(int *V){
    int chec = 0;
    for(int i=0; i<3; i++){
        if(V[i] == 0){
            chec = 1;
        }
    }
    if(chec == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int V[3];
    
    for(int i=0; i<3; i++){
        cin >> V[i];
    }
    for(int i=0; i<3; i++){
        cout << V[i] << " ";
    }
    cout << has_zero(&V[0]);
}
*/

//C Ex1
/*
int MaiorV(int *V){
    int maior = V[0];
    for(int i=1; i<3; i++){
        if(V[i] > V[i-1]){
            maior = V[i];
        }
    }
    return maior;
}

int main(){
    int V[3];
    
    for(int i=0; i<3; i++){
        cin >> V[i];
    }
    cout << MaiorV(&V[0]);
}
*/

//C Ex2
/*
int MediaV(int *V){
    for(int i=1; i<3; i++){
        V[0] += V[i];
    }
    return V[0] / 3;
}

int main(){
    int V[3];
    
    for(int i=0; i<3; i++){
        cin >> V[i];
    }
    cout << MediaV(&V[0]);
}
*/

//C Ex3
/*
int NumP(int *V){
    int ic = 0;
    for(int i=0; i<3; i++){
        if(V[i] > 0){
            ic++;
        }
    }
    return ic;
}

int main(){
    int V[3];
    
    for(int i=0; i<3; i++){
        cin >> V[i];
    }
    cout << NumP(&V[0]);
}
*/

//C Ex4
/*
void vetor(int *V, int n){
    for(int i=0; i<n; i++){
        cin >> V[i];
    }
}

int main(){
    int x;
    
    cin >> x;
    
    int V[x];
    
    vetor(&V[0],x);
    
    for(int i=0; i<x; i++){
        cout << V[i] << " ";
    }
}
*/

/*
//C Ex5
void MaiorMenorV(int *V, int *maior2, int *menor2){
    *maior2 = V[0];
    *menor2 = V[0];
    for(int i=1; i<3; i++){
        if(V[i] > V[i-1]){
            *maior2 = V[i];
        }
        else{
            *menor2 = V[i-1];
        }
    }
    
}

int main(){
    int maior1=0;
    int menor1=0;
    
    int V[3];
    
    for(int i=0; i<3; i++){
        cin >> V[i];
    }
    
    MaiorMenorV(&V[0],&maior1,&menor1);
    
    cout << maior1 << " " << menor1;
}