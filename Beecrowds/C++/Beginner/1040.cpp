#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    
    float nota1, nota2, nota3, nota4;
    float media, notafinal, mediafinal;
    
    cin>>nota1>>nota2>>nota3>>nota4;
    
    media = (nota1*2 + nota2*3 + nota3*4 + nota4)/10.0;
    
    cout<<fixed<<setprecision(1)<<"Media: "<<media<<endl;
    
    if (media>=7) {
        cout<<"Aluno aprovado."<<endl;
    } else if (media<7 && media>=5) {
        cout<<"Aluno em exame."<<endl;
        cin>>notafinal;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<notafinal<<endl;
        mediafinal = (notafinal + media)/2.0;
        if (mediafinal>=5) {
            cout<<"Aluno aprovado."<<endl;
            cout<<fixed<<setprecision(1)<<"Media final: "<<mediafinal<<endl;
        } else {
            cout<<"Aluno reprovado."<<endl;
        }
    } else if (media<5) {
        cout<<"Aluno reprovado."<<endl;
    }
    
    return 0;
}