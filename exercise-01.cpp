/**
 * Author   : Prayudha Adhitia Libramawan
 * NPM      : 140810180008
 * Deskripsi: Program ini dapat menghitung luas,keliling dan diagonal segiempat
*/
#include<iostream>
#include<math.h>

using namespace std;

typedef struct {
 float panjang;
 float lebar;
} segiempat;

void input(segiempat *s) {
    cout<<"Masukkan panjang : "; cin>>s->panjang;
    cout<<"Masukkan lebar   : "; cin>>s->lebar;
}
float keliling(segiempat s) { 
    return ((s.panjang+s.lebar)*2);
}
float luas(segiempat s) {
    return (s.panjang*s.lebar);
}

float diagonal(segiempat s) { 
    return (sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar)));
}
void print(segiempat s) { 
    cout<<"Panjang : "<<s.panjang<<endl;
    cout<<"Lebar : "<<s.lebar<<endl;
    cout<<"Keliling : "<<keliling(s);cout<<endl;
    cout<<"Luas : "<<luas(s);cout<<endl;
    cout<<"Diagonal : "<<diagonal(s);cout<<endl;
}

int main() {
   segiempat* sg;
   sg = new segiempat;
   input(sg);
   print(*sg);
}
