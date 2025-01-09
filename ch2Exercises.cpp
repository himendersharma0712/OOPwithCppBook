#include <iostream>

class tempConverter{

    float temp_F,temp_C;

    public:
    void convertCtoF(){
        std::cout << "Enter temp in C: "; std::cin >> temp_C;
        temp_F = float(9.0/5)*temp_C + 32;
        std::cout << temp_F;
    }
    void convertFtoC(){
        std::cout << "Enter temp in F: "; std::cin >> temp_C;
        temp_C = float(5.0/9)*(temp_F - 32);
        std::cout << temp_C;
    }
};

void program2_1(){

std::cout << "Maths = 90" << "\n" << "Physics = 77" << "\n" << "Chemistry = 69";

}

void program2_2(){

    int a, b ;
    std::cout << "Enter two numbers : ";
    std::cin >> a >> b;

    (a>b)? std::cout<<a:std::cout<<b; // ternary operator
}

void program2_3(){
    char c;
    std::cout << "Enter a character: "; std::cin >> c; std::cout << int(c);
}

void program2_4(){
    float a,b,c,x; std::cout << "Enter a b and c : "; std::cin >> a >> b >> c;
    x = a/b-c;
    std::cout << x ;
}

int main(){

    // program2_1();
    // program2_2();
    // program2_3();
    // program2_4();

    // tempConverter thermometer;
    // thermometer.convertCtoF();



}

