#include <iostream>
using namespace std;

struct punto {
    int x;
    int y;
    char nome;
    int valore() {
        int val = 0;
        val = (x * x) + (y * y);
        return val;
    }
};

class rectangle {
    int width, height;
public:
    void set_height(int h) { height = h; }
    void set_width(int w) { width = w; }
    int get_height() { return height; }
    int get_width() { return width; }
    int area() { return width * height; }
};

int main() {
    cout << "Ora uso struct" << endl;
    
    // Creare un punto e assegnare dei valori
    punto p;
    p.x = 3;
    p.y = 4;
    p.nome = 'A';
    
    // Stampare i valori del punto e il risultato della funzione valore()
    cout << "Punto " << p.nome << ": (" << p.x << ", " << p.y << ")" << endl;
    cout << "Valore del punto: " << p.valore() << endl;
    
    cout << "Ora uso class rectangle" << endl;
    
    // Creare un oggetto rectangle e assegnare dei valori
    rectangle r;
    r.set_width(5);
    r.set_height(7);
    
    // Stampare i valori del rettangolo e l'area
    cout << "Rettangolo: larghezza = " << r.get_width() << ", altezza = " << r.get_height() << endl;
    cout << "Area del rettangolo: " << r.area() << endl;
    
    return 0;
}