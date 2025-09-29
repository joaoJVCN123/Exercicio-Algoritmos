#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    double N1A1 , N1A2 , N1A3 , N1A4 , N1A5 , N2A1 , N2A2 , N2A3 , N2A4 , N2A5 , N3A1 , N3A2 , N3A3 , N3A4 , N3A5 , MA1 , MA2 , MA3 , MA4 , MA5;
    string A1 , A2 , A3 , A4 , A5 ;
    
    cout<<"Escreva o nome do aluno 1:"<<endl;
    cin>>A1;
    
    cout<<"\nEscreva uma de cada vez a N1, N2 e N3 do aluno "<<A1<<":"<<endl;
    cin>>N1A1;
    cin>>N2A1;
    cin>>N3A1;
    
    MA1= (N1A1 + N2A1 + N3A1) / 3;
    
    vector<double> Aluno1{N1A1 , N2A1 , N3A1 , MA1};
    
    cout<<"============================\n\n"<<"Escreva o nome do aluno 2:"<<endl;
    cin>>A2;
    
    cout<<"\nEscreva uma de cada vez a N1, N2 e N3 do aluno "<<A2<<":"<<endl;
    cin>>N1A2;
    cin>>N2A2;
    cin>>N3A2;
    
    MA2= (N1A2 + N2A2 + N3A2) / 3;
    
    vector<double> Aluno2{N1A2 , N2A2 , N3A2 , MA2};
    
    cout<<"===========================\n\n"<<"Escreva o nome do aluno 3:"<<endl;
    cin>>A3;
    
    cout<<"\nEscreva uma de cada vez a N1, N2 e N3 do aluno "<<A3<<":"<<endl;
    cin>>N1A3;
    cin>>N2A3;
    cin>>N3A3;
    
    MA3= (N1A3 + N2A3 + N3A3) / 3;
    
    vector<double> Aluno3{N1A3 , N2A3 , N3A3 , MA3};
    
    cout<<"===========================\n\n"<<"Escreva o nome do aluno 4:"<<endl;
    cin>>A4;
    
    cout<<"\nEscreva uma de cada vez a N1, N2 e N3 do aluno "<<A4<<":"<<endl;
    cin>>N1A4;
    cin>>N2A4;
    cin>>N3A4;
    
    MA4= (N1A4 + N2A4 + N3A4) / 3;
    
    vector<double> Aluno4{N1A4 , N2A4 , N3A4 , MA4};
    
    cout<<"===========================\n\n"<<"Escreva o nome do aluno 5:"<<endl;
    cin>>A5;
    
    cout<<"\nEscreva uma de cada vez a N1, N2 e N3 do aluno "<<A5<<":"<<endl;
    cin>>N1A5;
    cin>>N2A5;
    cin>>N3A5;
    
    MA5= (N1A5 + N2A5 + N3A5) / 3;
    
    vector<double> Aluno5{N1A5 , N2A5 , N3A5 , MA5};
    
    cout<<"===============================================\n\n"<<endl;
    cout<<"As notas, média e resultado de aprovação do aluno "<<A1<<" são as seguintes:\n"<<endl;
    cout<<"N1    N2    N3    Média    Resultado"<<endl;
    
    if (MA1 >= 7) {
        for (double num : Aluno1) {
        cout << num << "     ";
        }
        cout<<"   Aprovado"<<endl;
    } else if (MA1 < 7) {
        for (double num : Aluno1) {
        cout << num << "     ";
    }
    cout<<"   Reprovado"<<endl;
    }
    cout<<"=================================\n\n"<<"As notas, média e resultado de aprovação do aluno "<<A2<<" são as seguintes:"<<endl;
    cout<<"N1    N2    N3    Média    Resultado"<<endl;
    
    if (MA2 >=7) {
        for (double num : Aluno2) {
        cout << num << "     ";
        }
        cout<<"   Aprovado"<<endl;
    } else if (MA2 < 7) {
        for (double num : Aluno2) {
        cout << num << "     ";
    }
    cout<<"   Reprovado"<<endl;
    }
    
    cout<<"\n=================================\n"<<"As notas, média e resultado de aprovação do aluno "<<A3<<" são as seguintes:"<<endl;
    cout<<"N1    N2    N3    Média    Resultado"<<endl;
    
     if (MA3 >=7) {
        for (double num : Aluno3) {
        cout << num << "     ";
        }
        cout<<"   Aprovado"<<endl;
    } else if (MA3 < 7) {
        for (double num : Aluno3) {
        cout << num << "     ";
    }
    cout<<"   Reprovado"<<endl;
    }
    
    cout<<"===============================================\n\n"<<endl;
    cout<<"As notas, média e resultado de aprovação do aluno "<<A4<<" são as seguintes:\n"<<endl;
    cout<<"N1    N2    N3    Média    Resultado"<<endl;
    
    if (MA4 >= 7) {
        for (double num : Aluno4) {
        cout << num << "     ";
        }
        cout<<"   Aprovado"<<endl;
    } else if (MA4 < 7) {
        for (double num : Aluno4) {
        cout << num << "     ";
    }
    cout<<"   Reprovado"<<endl;
    }
    
    cout<<"===============================================\n\n"<<endl;
    cout<<"As notas, média e resultado de aprovação do aluno "<<A5<<" são as seguintes:\n"<<endl;
    cout<<"N1    N2    N3    Média    Resultado"<<endl;
    
    if (MA5 >= 7) {
        for (double num : Aluno5) {
        cout << num << "     ";
        }
        cout<<"   Aprovado"<<endl;
    } else if (MA5 < 7) {
        for (double num : Aluno5) {
        cout << num << "     ";
    }
    cout<<"   Reprovado"<<endl;
    }
    
     if (MA1 > MA2 and MA1 > MA3 and MA1 > MA4 and MA1 > MA5) {
         cout<<"\n\n================================\n"<<"O aluno com a maior média é o aluno: "<<A1<<endl;
     } else if (MA2 > MA3 and MA2 > MA4 and MA2 > MA5) {
         cout<<"\n\n================================\n"<<"O aluno com a maior média é o aluno: "<<A2<<endl;
     } else if (MA3 > MA4 and MA3 > MA5) {
         cout<<"\n\n================================\n"<<"O aluno com a maior média é o aluno: "<<A3<<endl;
     } else if (MA4 > MA5) {
         cout<<"\n\n================================\n"<<"O aluno com a maior média é o aluno: "<<A4<<endl;
     } else {
         cout<<"\n\n================================\n"<<"O aluno com a maior média é o aluno: "<<A5<<endl;
     }

     return 0;
    
}
