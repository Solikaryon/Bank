#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cctype>
#include<ctime>
#include<queue>
#include<vector>

using namespace std;
// Código creado por Monjaraz Briseño Luis Fernando

// Nota importante: Cuando ejecute el ".exe" del programa, por favor maximice la ventana para que se vea mejor el programa y evitar problemas por el uso de gotoxy.
// Nota: Ya no mas Gotoxy porfavor :c, que los monitos fue lo que mas me costo hacer (especialmente los de la segunda impresión/parte).
// Nota: Muchas funciones y librerias son reutilizadas de practicas anteriores por lo que algunas pueden que ni si quiera se utilizen al 100% en este programa si no solo en ciertas partes.

// Función que valida que los datos ingresados por el usuario sean números (enteros o decimales)
bool ValidaNumeros(char *dato){
    bool ban = true;
    int i = 0;
    int puntosDecimales = 0;
    while (*(dato + i) != '\0') {
        if (*(dato + i) != '.' && (*(dato + i) < '0' || *(dato + i) > '9')) {
            ban = false;
            break;
        }
        if (*(dato + i) == '.') {
            puntosDecimales++;
        }
        i++;
    }
    if (puntosDecimales > 1) {
        ban = false;
    }
    return ban;
}

// Función que valida que los datos ingresados por el usuario sean números enteros
bool ValidaNumerosEnteros(char *dato){
    bool ban = true;
    int i = 0;
    if (*dato == '-') {
        ban = false;
    } else if (*dato == '+') {
        i++;
    }
    while (*(dato + i) != '\0') {
        if (*(dato + i) < '0' || *(dato + i) > '9') {
            ban = false;
            break;
        }
        i++;
    }
    return ban;
}
// Función que valida que los datos ingresados por el usuario sean compatibles con un STRING
bool es_valido(string str) {
  if (str.length() == 0) {
    return false;
  }
  
  for (char c : str) {
    if (!isdigit(c) && !isalpha(c) && !isspace(c)) {
      return false;
    }
  }
  
  return true;
}

// Función que valida que los datos ingresados por el usuario sean Numeros en un string
bool ValidaNE(string str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

// Función que valida que los datos ingresados por el usuario sean Letras en un string
bool ValidaNombre(string str) {
    for (char c : str) {
        if (!isalpha(c)) {
            return false;
        }
    }
    return true;
}


void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  


void BGTP(){
    gotoxy(117,19); printf("%c", 204); /* ╠ */
    gotoxy(117,20); printf("%c", 186); /* ║ */
    gotoxy(117,21); printf("%c", 186); /* ║ */
    gotoxy(117,22); printf("%c", 204); /* ╠ */
    gotoxy(118,19); printf("%c", 205); /* ═ */ gotoxy(119,19); printf("%c", 205); /* ═ */ gotoxy(120,19); printf("%c", 205); /* ═ */ gotoxy(121,19); printf("%c", 205); /* ═ */ gotoxy(122,19); printf("%c", 205); /* ═ */
    gotoxy(123,19); printf("%c", 185); /* ╣ */
    gotoxy(123,20); printf("%c", 186); /* ║ */
    gotoxy(123,21); printf("%c", 186); /* ║ */
    gotoxy(123,22); printf("%c", 185); /* ╣ */
    gotoxy(118,22); printf("%c", 205); /* ═ */
    gotoxy(119,22); printf("%c", 205); /* ═ */
    gotoxy(120,22); printf("%c", 205); /* ═ */
    gotoxy(121,22); printf("%c", 205); /* ═ */
    gotoxy(122,22); printf("%c", 205); /* ═ */
    gotoxy(118,18); cout << "B GPT"; /* B GPT = Banco GPT */
    gotoxy(120,20); cout << "o";
    gotoxy(119,21); cout << "/|\\";
    gotoxy(117,18); printf("%c", 186); /* ║ */
    gotoxy(123,18); printf("%c", 186); /* ║ */
    gotoxy(117,17); printf("%c", 201); /* ╔ */
    gotoxy(123,17); printf("%c", 187); /* ╗ */
    gotoxy(118,17); printf("%c", 205); /* ═ */
    gotoxy(119,17); printf("%c", 205); /* ═ */
    gotoxy(120,17); printf("%c", 205); /* ═ */
    gotoxy(121,17); printf("%c", 205); /* ═ */
    gotoxy(122,17); printf("%c", 205); /* ═ */
}

void YW(){
    gotoxy(117,19); printf("%c", 204); /* ╠ */
    gotoxy(117,20); printf("%c", 186); /* ║ */
    gotoxy(117,21); printf("%c", 186); /* ║ */
    gotoxy(117,22); printf("%c", 204); /* ╠ */
    gotoxy(118,19); printf("%c", 205); /* ═ */ gotoxy(119,19); printf("%c", 205); /* ═ */ gotoxy(120,19); printf("%c", 205); /* ═ */ gotoxy(121,19); printf("%c", 205); /* ═ */ gotoxy(122,19); printf("%c", 205); /* ═ */
    gotoxy(123,19); printf("%c", 185); /* ╣ */
    gotoxy(123,20); printf("%c", 186); /* ║ */
    gotoxy(123,21); printf("%c", 186); /* ║ */
    gotoxy(123,22); printf("%c", 185); /* ╣ */
    gotoxy(118,22); printf("%c", 205); /* ═ */
    gotoxy(119,22); printf("%c", 205); /* ═ */
    gotoxy(120,22); printf("%c", 205); /* ═ */
    gotoxy(121,22); printf("%c", 205); /* ═ */
    gotoxy(122,22); printf("%c", 205); /* ═ */
    gotoxy(118,18); cout << "B  YW"; /*B YW = Banco You're welcome (No sabia que ponerle y bienvenidos no cabia XD)*/
    gotoxy(120,20); cout << "o";
    gotoxy(119,21); cout << "/|\\";
    gotoxy(117,18); printf("%c", 186); /* ║ */
    gotoxy(123,18); printf("%c", 186); /* ║ */
    gotoxy(117,17); printf("%c", 201); /* ╔ */
    gotoxy(123,17); printf("%c", 187); /* ╗ */
    gotoxy(118,17); printf("%c", 205); /* ═ */
    gotoxy(119,17); printf("%c", 205); /* ═ */
    gotoxy(120,17); printf("%c", 205); /* ═ */
    gotoxy(121,17); printf("%c", 205); /* ═ */
    gotoxy(122,17); printf("%c", 205); /* ═ */
}



void Erased(){
    gotoxy(110,19); printf("%c", 201); /* ╔ */
    gotoxy(116,19); printf("%c", 187); /* ╗ */
    gotoxy(110,20); printf("%c", 186); /* ║ */
    gotoxy(110,21); printf("%c", 186); /* ║ */
    gotoxy(110,22); printf("%c", 204); /* ╠ */
    gotoxy(111,19); printf("%c", 205); /* ═ */ gotoxy(112,19); printf("%c", 205); /* ═ */ gotoxy(113,19); printf("%c", 205); /* ═ */ gotoxy(114,19); printf("%c", 205); /* ═ */ gotoxy(115,19); printf("%c", 205); /* ═ */
    gotoxy(116,20); printf("%c", 186); /* ║ */
    gotoxy(116,21); printf("%c", 186); /* ║ */
    gotoxy(116,22); printf("%c", 185); /* ╣ */
    gotoxy(111,22); printf("%c", 205); /* ═ */
    gotoxy(112,22); printf("%c", 205); /* ═ */
    gotoxy(113,22); printf("%c", 205); /* ═ */
    gotoxy(114,22); printf("%c", 205); /* ═ */
    gotoxy(115,22); printf("%c", 205); /* ═ */
    gotoxy(113,20); cout << " ";
    gotoxy(111,20); cout << "  ";
    gotoxy(114,20); cout << "  ";
    gotoxy(112,21); cout << "    ";
    gotoxy(111,21); cout << " ";
    gotoxy(117,20); cout << "  ";
    gotoxy(117,21); cout << "  ";
    gotoxy(117,22); cout << "  ";
    gotoxy(112,20); cout << "ATM";

}

    void recorrer(int cantidad2) {
        int y = 2;
        int ymp = cantidad2;
            while (ymp > 0)
            {
                int aleatorio = rand() % 6;
                int random = 0;
                int ban = 0;
                int x = 10, t = 9;
                ymp = ymp - 1;
                for (int i = 0; i < ymp; i++) {
                    x -= 2;
                    for (int j = 98; j < 100; j++) {
                        if (ban == 0) {
                            gotoxy(j + (x+3), 20); cout << "  ";
                            gotoxy(j + (x+3), 21); cout << "  ";
                            gotoxy(j + (x+3), 22); cout << "  ";
                            gotoxy(j + (x+6), 20); cout << "  o";
                            gotoxy(j + (x+6), 21); cout << " /|\n";
                            gotoxy(j + (x+6), 22); cout << " /\\ \n";
                            ban = 1;
                        } else {
                            gotoxy(j + (x+3), 20); cout << "     ";
                            gotoxy(j + (x+3), 21); cout << "     ";
                            gotoxy(j + (x+3), 22); cout << "     ";
                            gotoxy(j + (x+6), 20); cout << "  o";
                            gotoxy(j + (x+6), 21); cout << "  |-\n";
                            gotoxy(j + (x+6), 22); cout << "  | \n";
                            ban = 0;
                        }
                        Sleep(100);
                    }
                }
                Sleep(aleatorio * 1000);
            }
        }

class Nodo {
public:
    string dato;
    Nodo* siguiente;

    Nodo(string valor) {
        dato = valor;
        siguiente = nullptr;
    }
};

class FilaPrincipal {
protected:
    Nodo* frente;
    Nodo* fondo;
public:
    FilaPrincipal() {
        frente = nullptr;
        fondo = nullptr;
    }

    void encolar(string valor) {
        Nodo* nuevo = new Nodo(valor);
        if (frente == nullptr) {
            frente = nuevo;
        } else {
            fondo->siguiente = nuevo;
        }
        fondo = nuevo;
    }

    void mostrarCola() {
        if (frente == nullptr) {
            cout << "La cola esta vacia" << endl;
        } else {
            cout << "Cola: ";
            Nodo* actual = frente;
            while (actual != nullptr) {
                cout << actual->dato << " ";
                actual = actual->siguiente;
            }
            cout << endl;
        }
    }
    void desencolar() {
        if (frente == nullptr) {
            cout << "La cola esta vacia" << endl;
        } else {
            Nodo* temp = frente;
            frente = frente->siguiente;
            if (frente == nullptr) {
                fondo = nullptr;
            }
            delete temp;
        }
    }
    void desencolarTodo(FilaPrincipal& otraCola) {
        while (frente != nullptr) {
            otraCola.encolar(frente->dato);
            desencolar();
        }
    }
    void vaciarCola(FilaPrincipal& otraCola) {
        while (frente != nullptr) {
            otraCola.desencolar();
        }
    }
    
    void desencolarTodoTemp(FilaPrincipal& otraCola, int cantidad2) {
        int y = 2;
        int ymp = cantidad2;
        int z = 2;
        if (frente == nullptr) {
            gotoxy(100, z);
            cout << "     " << endl;
        } else {
            gotoxy(100, 0);
            cout << "Proximo: " << endl;
            Nodo* actual = frente;
            while (actual != nullptr) {
                gotoxy(100, z);
                cout << actual->dato << endl;
                actual = actual->siguiente;
                gotoxy(100, z+2);
                cout << "     " << endl;

                z = z + 2;
            }
        }
        while (frente != nullptr) {
            int aleatorio = rand() % 6;
            otraCola.encolar(frente->dato);
            gotoxy(80, 0);
            cout << "Atendido: ";
            Sleep(aleatorio * 1000);
            gotoxy(80, y);
            cout << frente->dato << endl;
            desencolar();
            y = y + 2;
            mostrarColaVertical();
            int random = 0;
            int ban = 0;
            int x = 10, t = 9;
            ymp = ymp - 1;
            for (int i = 0; i < ymp; i++) {
                x -= 2;
                for (int j = 98; j < 100; j++) {
                    if (ban == 0) {
                        gotoxy(j + (x+3), 20); cout << "  ";
                        gotoxy(j + (x+3), 21); cout << "  ";
                        gotoxy(j + (x+3), 22); cout << "  ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << " /|\n";
                        gotoxy(j + (x+6), 22); cout << " /\\ \n";
                        ban = 1;
                    } else {
                        gotoxy(j + (x+3), 20); cout << "     ";
                        gotoxy(j + (x+3), 21); cout << "     ";
                        gotoxy(j + (x+3), 22); cout << "     ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << "  |-\n";
                        gotoxy(j + (x+6), 22); cout << "  | \n";
                        ban = 0;
                    }
                    Sleep(100);
                }
            }
            Sleep(aleatorio * 1000);
        }
    }

    void mostrarColaVertical() {
            int y = 2;
        if (frente == nullptr) {
            gotoxy(100, y);
            cout << "     " << endl;
        } else {
            gotoxy(100, 0);
            cout << "Proximo: " << endl;
            Nodo* actual = frente;
            while (actual != nullptr) {
                gotoxy(100, y);
                cout << actual->dato << endl;
                actual = actual->siguiente;
                gotoxy(100, y+2);
                cout << "     " << endl;

                y = y + 2;
            }
        }
    }

};


class FilaGeneral : public FilaPrincipal {
public:
    void recibirElementos(FilaGeneral& otraCola) {
        while (otraCola.frente != nullptr) {
            encolar(otraCola.frente->dato);
            otraCola.desencolar();
        }
        fondo = otraCola.fondo; // actualizar el puntero fondo
    }
    void mostrarColaVertical() {
            int y = 10;
        if (frente == nullptr) {
            gotoxy(200, y);
            cout << "     " << endl;
        } else {
            gotoxy(200, 8);
            cout << "Proximo: " << endl;
            Nodo* actual = frente;
            while (actual != nullptr) {
                gotoxy(200, y);
                cout << actual->dato << endl;
                actual = actual->siguiente;
                gotoxy(200, y+2);
                cout << "     " << endl;

                y = y + 2;
            }
        }
    }
    void desencolarTodoTemp(FilaPrincipal& otraCola) {
        int y = 10;
        while (frente != nullptr) {
            int aleatorio = rand() % 6;
            otraCola.encolar(frente->dato);
            gotoxy(180, 8);
            cout << "Atendido: ";
            Sleep(aleatorio * 1000);
            gotoxy(180, y);
            cout << frente->dato << endl;
            desencolar();
            y = y + 2;
            mostrarColaVertical();
            Sleep(aleatorio * 1000);
        }
    }
};

void mostrarContenidoColas(FilaPrincipal& Cola1, FilaGeneral& Cola2) {
    cout << "  Contenido de la fila principal: " << endl;
    cout << "  ";
    Cola1.mostrarCola();
    cout << "  Contenido de la fila general: " << endl;
    cout << "  ";
    Cola2.mostrarCola();
}

int main() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
    FilaPrincipal Cola1;
    FilaGeneral Cola2;
    // Inicio primera parte
    int RM = 2;
    do{
        int cantidad = 0, cantidad2 = 0;
        char cantidadv[100], Rv[100], RMv[100];
        int A = 0, C = 0, G = 0, R = 0;
        cout << "Cuantas personas vendran a visitar al glamuroso BANCO GPT: ";
        cin >> cantidadv;
        if(ValidaNumerosEnteros(cantidadv)){
            cantidad = atoi(cantidadv);
            cantidad2 = cantidad;
            for (int i = 0; i < cantidad; i++) {
                string nombre;
                cout << "Ingrese el nombre " << i + 1 << ": ";
                cin >> nombre;
                if(ValidaNombre(nombre) == false){
                    cout << "Error, solo se permiten letras" << endl;
                    cout << "Repita proceso." << endl;
                    cout << endl;
                    gotoxy(0, 40);
                    system("pause");
                    nombre = "";
                    system("cls");
                    return main();
                }
                cout << "1 = Atencion a clientes" << endl;
                cout << "2 = Caja" << endl;
                cout << "3 = Gerente" << endl;
                cout << "Ingrese a donde se dirije " << nombre << ": ";
                cin >> Rv;
                R = atoi(Rv);
                cout << endl;
                if (ValidaNumerosEnteros(Rv) == false) {
                    cout << "Error, solo se permiten numeros enteros" << endl;
                    cout << "Repita proceso." << endl;
                    cout << endl;
                    gotoxy(0, 40);
                    system("pause");
                    system("cls");
                    return main();
                }
                if (R == 1) {
                    A++;
                    cout << "Estimado/a " << nombre << " su ID es: ";
                    nombre = "A" + to_string(+A);
                    cout << nombre << endl;
                } else if (R == 2) {
                    C++;
                    cout << "Estimado/a " << nombre << " su ID es: ";
                    nombre = "C" + to_string(+C);
                    cout << nombre << endl;
                } else if (R == 3) {
                    G++;
                    cout << "Estimado/a " << nombre << " su ID es: ";
                    nombre = "G" + to_string(+G);
                    cout << nombre << endl;
                }
                else {
                    cout << "Opcion no valida, en automatico te mandaremos a Atencion a clientes" << endl;
                    A++;
                    cout << "Estimado/a " << nombre << " su ID es: ";
                    nombre = "A" + to_string(+A);
                    cout << nombre << endl;
                }
                Cola1.encolar(nombre);
                gotoxy(0, 40);
                system("pause");
                system("cls");
            }
            system("cls");
            int random = 0;
            int ban = 0;
            int x = 10, t = 9;
            gotoxy(0, 0);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 2);
            cout << "  Fila Principal" << endl;
            gotoxy(0, 4);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 6);
            printf("  Codigo creado por: Monjaraz Brise%co Luis Fernando", 164);
            cout << endl;
            gotoxy(0, 8);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 14);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            BGTP();
            for (int i = 0; i < cantidad; i++) {
                t -= 3;
                x -= 2;
                for (int j = 0; j < 100; j++) {
                    if (ban == 0) {
                        gotoxy(j + (x+3), 20); cout << "  ";
                        gotoxy(j + (x+3), 21); cout << "  ";
                        gotoxy(j + (x+3), 22); cout << "  ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << " /|\n";
                        gotoxy(j + (x+6), 22); cout << " /\\ \n";
                        ban = 1;
                    } else {
                        gotoxy(j + (x+3), 20); cout << "     ";
                        gotoxy(j + (x+3), 21); cout << "     ";
                        gotoxy(j + (x+3), 22); cout << "     ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << "  |-\n";
                        gotoxy(j + (x+6), 22); cout << "  | \n";
                        ban = 0;
                    }
                    Sleep(100);
                }
            }
            int aleatorio = rand() % 6;
            Sleep(aleatorio * 1000);
            recorrer(cantidad2);
            Sleep(aleatorio * 1000);
            gotoxy(99 + (8+6), 20); cout << "   ";
            gotoxy(99 + (8+6), 21); cout << "    \n";
            gotoxy(99 + (8+6), 22); cout << "    \n";
            gotoxy(0, 10);
            mostrarContenidoColas(Cola1, Cola2);
            cout << endl;
            gotoxy(0, 40);
            system("pause");
            // Inicio segunda parte
            system("cls");
            random = 0;
            ban = 0;
            x = 10, t = 9;
            gotoxy(0, 0);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 2);
            cout << "  Fila General" << endl;
            gotoxy(0, 4);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 6);
            printf("  Codigo creado por: Monjaraz Brise%co Luis Fernando", 164);
            cout << endl;
            gotoxy(0, 8);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 14);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            YW();
            for (int i = 0; i < cantidad; i++) {
                t -= 3;
                x -= 2;
                for (int j = 0; j < 100; j++) {
                    if (ban == 0) {
                        gotoxy(j + (x+3), 20); cout << "  ";
                        gotoxy(j + (x+3), 21); cout << "  ";
                        gotoxy(j + (x+3), 22); cout << "  ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << " /|\n";
                        gotoxy(j + (x+6), 22); cout << " /\\ \n";
                        ban = 1;
                    } else {
                        gotoxy(j + (x+3), 20); cout << "     ";
                        gotoxy(j + (x+3), 21); cout << "     ";
                        gotoxy(j + (x+3), 22); cout << "     ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << "  |-\n";
                        gotoxy(j + (x+6), 22); cout << "  | \n";
                        ban = 0;
                    }
                    Sleep(100);
                }
            }
/*             x = 10, t = 9;
            for (int i = 0; i < C; i++) {
                t -= 3;
                x -= 2;
                for (int j = 0; j < 100; j++) {
                    if (ban == 0) {
                        gotoxy(j + (x+3), 24); cout << "  ";
                        gotoxy(j + (x+3), 25); cout << "  ";
                        gotoxy(j + (x+3), 26); cout << "  ";
                        gotoxy(j + (x+6), 27); cout << "  o";
                        gotoxy(j + (x+6), 28); cout << " /|\n";
                        gotoxy(j + (x+6), 29); cout << " /\\ \n";
                        ban = 1;
                    } else {
                        gotoxy(j + (x+3), 24); cout << "     ";
                        gotoxy(j + (x+3), 25); cout << "     ";
                        gotoxy(j + (x+3), 26); cout << "     ";
                        gotoxy(j + (x+6), 27); cout << "  o";
                        gotoxy(j + (x+6), 28); cout << "  |-\n";
                        gotoxy(j + (x+6), 29); cout << "  | \n";
                        ban = 0;
                    }
                    Sleep(100);
                }
            }
            x = 10, t = 9;
            for (int i = 0; i < G; i++) {
                t -= 3;
                x -= 2;
                for (int j = 0; j < 100; j++) {
                    if (ban == 0) {
                        gotoxy(j + (x+3), 31); cout << "  ";
                        gotoxy(j + (x+3), 32); cout << "  ";
                        gotoxy(j + (x+3), 33); cout << "  ";
                        gotoxy(j + (x+6), 34); cout << "  o";
                        gotoxy(j + (x+6), 35); cout << " /|\n";
                        gotoxy(j + (x+6), 36); cout << " /\\ \n";
                        ban = 1;
                    } else {
                        gotoxy(j + (x+3), 31); cout << "     ";
                        gotoxy(j + (x+3), 32); cout << "     ";
                        gotoxy(j + (x+3), 33); cout << "     ";
                        gotoxy(j + (x+6), 34); cout << "  o";
                        gotoxy(j + (x+6), 35); cout << "  |-\n";
                        gotoxy(j + (x+6), 36); cout << "  | \n";
                        ban = 0;
                    }
                    Sleep(100);
                }
            } */
            gotoxy(80, 0);
            cout << "Atendido: ";
            gotoxy(100, 0);
            cout << "Proximo: " << endl;
            Cola1.desencolarTodoTemp(Cola2, cantidad2);
            gotoxy(99 + (8+6), 20); cout << "   ";
            gotoxy(99 + (8+6), 21); cout << "    \n";
            gotoxy(99 + (8+6), 22); cout << "    \n";
            gotoxy(0, 10);
            mostrarContenidoColas(Cola1, Cola2);
            cout << endl;
            gotoxy(0, 40);
            system("pause");
            system("cls");
            Cola2.desencolarTodo(Cola1);
            // Inicio tercera Parte
            random = 0;
            ban = 0;
            x = 10, t = 9;
            gotoxy(0, 0);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 2);
            cout << "  Fila ATM" << endl;
            gotoxy(0, 4);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 6);
            printf("  Codigo creado por: Monjaraz Brise%co Luis Fernando", 164);
            cout << endl;
            gotoxy(0, 8);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            gotoxy(0, 14);
            cout << "  ________________________________________________________________________________________________________________________" << endl;
            for (int i = 0; i < cantidad; i++) {
                for (int j = 0; j < 100; j++) {
                    if (ban == 0) {
                        gotoxy(j + (x+3), 20); cout << "  ";
                        gotoxy(j + (x+3), 21); cout << "  ";
                        gotoxy(j + (x+3), 22); cout << "  ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << " /|\n";
                        gotoxy(j + (x+6), 22); cout << " /\\ \n";
                        ban = 1;
                        Erased();
                        
                    } else {
                        gotoxy(j + (x+3), 20); cout << "     ";
                        gotoxy(j + (x+3), 21); cout << "     ";
                        gotoxy(j + (x+3), 22); cout << "     ";
                        gotoxy(j + (x+6), 20); cout << "  o";
                        gotoxy(j + (x+6), 21); cout << "  |-\n";
                        gotoxy(j + (x+6), 22); cout << "  | \n";
                        ban = 0;
                        Erased();
                    }
                    Sleep(100);
                }
                int aleatorio = rand() % 6;
                Sleep(aleatorio * 1000);
            }
            Sleep(1000);
            gotoxy(0, 10);
            mostrarContenidoColas(Cola1, Cola2);
            cout << endl;
            gotoxy(0, 40);
            system("pause");
            system("cls");
            cout << "Gracias por usar el programa" << endl;
            printf("Atentemente: Monjaraz Brise%co Luis Fernando", 164);
            cout << endl;
        }
        else{
            cout << "Error, solo se permiten numeros enteros" << endl;
            cout << endl;
            gotoxy(0, 40);
            system("pause");
            system("cls");
        }
            cout << endl;
            cout << "Desea continuar en el codigo?" << endl;
            cout << "2. Si" << endl;
            cout << "Cualquier otra tecla. No" << endl;
            cout << "Respuesta: ";
            cin >> RM;
            gotoxy(0, 40);
            system("pause");
            Cola1.vaciarCola(Cola1);
            system("cls");
    }while (RM==2);
    return 0;
}