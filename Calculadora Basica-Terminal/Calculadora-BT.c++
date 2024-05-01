#include <iostream>

int main()
{
    int x;
    int a;
    int a2;
    int s;
    int s2;
    int m;
    int m2;
    int d;
    int d2;
    std::cout<<"Hello World.\n";
    std::cout<<"Quais das operações abaixo voce deseja escolher?\n";
    std::cout<<"Digite 1 para adição.\n";
    std::cout<<"Digite 2 para subtração.\n";
    std::cout<<"Digite 3 para mutiplicação.\n";
    std::cout<<"Digite 4 para divisão.\n";
    std::cin>> x;
    
    if ( x == 1){
        std::cout<<"Digite o primeiro numero:";
        std::cin>> a;
        std::cout<<"Digite o segundo numero:";
        std::cin>> a2;
        std::cout<<"A soma dos dois numeros é:" << " " << a + a2;
    }else if(x == 2){
        std::cout<<"Digite o primeiro numero:";
        std::cin>> s;
        std::cout<<"Digite o segundo numero:";
        std::cin>>s2;
        std::cout<<"A diminuição dos dois numeros é:" << " " << s - s2;
    }else if (x == 3){
        std::cout<<"Digite o primeiro numero:";
        std::cin>>m;
        std::cout<<"Digite o segundo numero:";
        std::cin>>m2;
        std::cout<<"A mutiplicação dos numeros fornecidos é:" << " " << m * m2;
    }else if (x == 4){
        std::cout<<"Digite o primeiro numero:";
        std::cin >> d;
        std::cout<<"Digite o segundo numero:";
        std::cin>> d2;
        std::cout<<"A divisão dos numeros é:"<<" "<<d / d2;
    }
    return 0;
}