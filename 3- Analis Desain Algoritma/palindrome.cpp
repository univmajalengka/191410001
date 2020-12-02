#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    string kata;
 
    // meminta user menginputkan kata yang akan dicek
    // contoh: BaKsO
   
    cout << "Masukkan Kata\t: ";
    getline(cin, kata);
 
    // buat variable baru dengan value sama dengan apa yang diinputkan user
    // lalu ubah menjadi lowercase
    // hasil setelah lowercase: bakso
   
    string originalKata = kata;
    transform(originalKata.begin(), originalKata.end(), originalKata.begin(), ::tolower);
 
    // buat variable baru lagi dengan value yang sudah dijadikan lowercase
    // kemudian reverse / balik nilainya
    // hasil setelah dibalik: oskab
   
    string reversedWord = originalKata;
    reverse(reversedWord.begin(), reversedWord.end());
 
    // bandingkan originalKata dengan reversedWord
    // jika sama maka palindrome, selain itu bukan
   
    if(originalKata == reversedWord) {
        cout << "\nKata '" << kata << "' adalah palindrome.\n" << endl;
    } else {
        cout << "\nKata '" << kata << "' bukan palindrome.\n" << endl;
    }
 
    return 0;
}
