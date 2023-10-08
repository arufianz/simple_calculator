#include <iostream>
#include <string>

struct Note
{
    std::string title;
    std::string content;   
};

void GetNotesList(std::string notelist[], int size); // Deklarasikan fungsi dengan parameter ukuran
int Note(std::string tittle, std::string content);
void WriteNote(std::string title, std::string content);
int main() {
    int choice = 0;
    std::string noteMenu[] = {"1. Lihat Catatan", "2. Tambahkan Catatan", "3. Hapus Catatan", "4. Keluar"};
    std::string notesList[1];
    std::string title;
    std::string content;

    int sizeList = sizeof(notesList)/sizeof(notesList[0]);

    std::cout << "****** Note Menu ****** \n";
    for (int i = 0; i < sizeof(noteMenu) / sizeof(std::string); i++) {
        std::cout << noteMenu[i] << '\n';
    }
    
    std::cout << "Pilih Nomor Menu: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Lihat Catatan!\n";
        if (notesList == 0){
            std::cout << "Tidak ada Catatan";
        }
        GetNotesList(notesList, sizeList); // Mengirim ukuran array sebagai argumen
        break;
    case 2:
        std::cout << "Tambahkan Catatan\n";
        std::cin >> title;
        std::cin >> content; 

        break;
    case 3:
        std::cout << "Hapus Catatan\n";
        break;
    case 4:
        std::cout << "Keluar\n";
        break;
    default:
        std::cout << "Error!\n";
    }
    return 0;
}

// Definisikan fungsi dengan parameter ukuran
void GetNotesList(std::string notelist[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << notelist[i] << '\n';
    }
}

int Note(std::string tittle, std::string content){
    return 0;
}

void WriteNote(std::string title, std::string content){
    
}