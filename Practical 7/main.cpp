/*This program is created by 23CS037 Prince Lad*/

/*
Create a arithmatic calculator of imaginary numbers.
*/

#include <iostream>

using namespace std;

class Complex{
private:
    int real;
    int img;
    static int count;
public:
    Complex(int a, int b){
        real = a; img = b;
    }

    Complex(){
        cout << "Enter the real part of #" << count << " :" << endl;
        cin >> real;
        cout << "Enter the imaginary part of #" << count << " :" << endl;
        cin >> img;
        count++; 
    }

    void input (){
        cout << "Enter the real part of #" << count << " :" << endl;
        cin >> real;
        cout << "Enter the imaginary part of #" << count << " :" << endl;
        cin >> img;
        count++;
    }

    void output(){
        cout << real << " + (" << img << ")i" << endl;
    }

    Complex operator+ (Complex &a){
        Complex add (0,0);
        add.real = real + a.real;
        add.img = img + a.img;
        return add;
    }
    
    Complex operator- (Complex &a){
        Complex sub (0,0);
        sub.real = real - a.real;
        sub.img = img - a.img;
        return sub;
    }

    Complex operator* (Complex &a){
        Complex mul (0,0);
        mul.real = ((real*a.real)-(img*a.img));
        mul.img = ((real*a.img)+(img*a.real));
        return mul;
    }

    Complex operator/ (Complex &a){
        Complex div (0,0);
        div.real = ((real*a.real)+(img*a.img))/((a.real)*(a.real)+(a.img)*(a.img));
        div.img = ((img*a.real)-(real*a.img))/((a.real)*(a.real)+(a.img)*(a.img));
        return div;
    }

    Complex operator! (){
        Complex conj (0,0);
        conj.real = -real;
        conj.img = -img;
        return conj;
    }
};

int Complex :: count = 1;

int main(){
    Complex a, b, c(0,0);
    int option;
    char flag;

    while (true){   
        cout << "Choose an operation :" << endl;
        cout << "[1] Addition" << endl;
        cout << "[2] Subtraction" << endl;
        cout << "[3] Multiplication" << endl;
        cout << "[4] Division" << endl;
        cout << "[5] Negation" << endl;
        cout << "Your option :" <<endl;
        cin >> option;

        switch (option){
        case 1:
            c = a + b;
            c.output();
            break;
        case 2:
            c = a - b;
            c.output();
            break;
        case 3:
            c = a * b;
            c.output();
            break;
        case 4:
            c = a / b;
            c.output();
            break;
        case 5:
            c = !a;
            c.output();
            c = !b;
            c.output();
            break;
        default :
            cout << "Choose a proper operation for the imaginary number." << endl;
            continue;
        }
        
        cout << "Do you want calculate for another number? If yes the press 'Y' else 'N' for no :" << endl;
        cin >> flag;
        if (flag == 'N' || flag == 'n'){
            cout << "Exiting." << endl;
            break;
        }
        else{
            a.input();
            b.input();
        }
    }

    cout << "\n\n23CS037 Prince" << endl;
    return 0;
}