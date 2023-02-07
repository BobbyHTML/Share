
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int opcja;
    
    cout << "Oblicz pole: "<< endl;
    
    cout << "[1] Trojkat" << endl;
    cout << "[2] Kwadrat" << endl;
    cout << "[3] Prostokat" << endl;
    cout << "[4] Trapez" << endl;
    cout << "[5] Okrag" << endl;
    cout << "[6] Rownoleglobok" << endl;
   
    
    cout << "[0] Wyjscie" << endl;
    
    cin >> opcja;
    
    switch(opcja){
        
        case 1:{
        float a,h;
        cout << "Podaj dlugosc boku trojkata: ";
        cin >> a;
        cout << "Podaj dlugosc wysokosci trojkata: ";
        cin >> h;
        float pole = (a*h)/2;
        
        cout << "Pole danego trojkata wynosi: " << pole;
        } break;
        
        case 2:{
        float a;
        cout << "Podaj dlugosc boku kwadratu: ";
        cin >> a ;
        float pole = pow(a,2);
        
        cout << "Pole danego kwadratu wynosi: "<< pole;
        
        } break;
        
        case 3:{
            float a,b;
            
            cout << "Podaj bok a: ";
            cin >> a;
            cout << "Podaj bok b: ";
            cin >> b;
            
            float pole = a*b;
            cout << "Pole danego prostokata wynosi: "<< pole;
        }break;
        
        case 4:{
            float a,b,h;
            cout << "Podaj podstawe a: ";
            cin >> a;
            cout << "Podaj podstawe b: ";
            cin >> b;
            cout << "Podaj wysokosc h: ";
            cin >> h;
            
            float pole = ((a+b)*h)/2;
            
            cout << "Pole danego Trapezu wynosi: "<< pole;
        }break;
        
        case 5: {
            float r;
            cout << "Podaj promien kola: ";
            cin >> r;
            
            float pi = 3.14;
            float pole = pi * pow(r,2);
            
            cout << "Pole danego okregu wynosi: "<< pole;
            
        }break;
        
        case 6:{
            float a,h;
            cout << "Podaj dlugosc boku: ";
            cin >> a;
            cout << "Podaj dlugosc wysokosci: ";
            cin >> h;
            
            float pole = a*h;
            cout << "Pole danego Rownolegloboku wynosi: " << pole;
        }break;
        
        case 0:{
            cout << "Koniec";
        }break;
        
    
    }
   
}
