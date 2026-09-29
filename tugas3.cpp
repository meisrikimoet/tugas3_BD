#include <iostream>
using namespace std;

char nama[50];
int top = -1;

// push
void push(char huruf) {
    if (top == 49) {
        cout << "stack penuh" << endl;
        return;
    }

    top++;
    nama[top] = huruf;
}

// pop
char pop() {
    if (top == -1) {
        cout << "stack kosong" << endl;
        return 0;
    }

    char huruf = nama[top];
    top--;

    return huruf;
}

// tampil stack
void tampil() {
    for (int i = top; i >= 0; i--) {
        cout << nama[i] << " ";
    }
    cout << endl;
}

int main() {
    char kata[50];

    cout << "Masukkan kata : ";
    cin >> kata;

    // Memasukkan setiap karakter ke stack
    for (int i = 0; kata[i] != 0; i++) {
        push(kata[i]);
    }

    cout << "Kata setelah dibalik : ";

    // Mengeluarkan isi stack
    while (top != -1) {
        cout << pop();
    }

    cout << endl;

    return 0;
}