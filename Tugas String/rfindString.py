# Fungsi `rfind()` dalam bahasa pemrograman C++ digunakan untuk mencari kemunculan terakhir dari sebuah substring dalam string target. Fungsi ini mirip dengan `find()`, namun pencarian dilakukan dari akhir string ke awal.

# Contoh penggunaan `rfind()` dalam C++:

# ```cpp
# #include <iostream>
# #include <string>

# int main() {
#     std::string kalimat = "Ini adalah contoh penggunaan fungsi rfind dalam C++";
#     std::string kata_cari = "fungsi";

#     size_t posisi = kalimat.rfind(kata_cari); 

#     if (posisi != std::string::npos) {
#         std::cout << "Kemunculan terakhir dari \"" << kata_cari << "\" ditemukan pada indeks: " << posisi << std::endl;
#     } else {
#         std::cout << "String \"" << kata_cari << "\" tidak ditemukan." << std::endl;
#     }

#     return 0;
# }
# ```

# Output (dalam terminal):

# ```
# Kemunculan terakhir dari "fungsi" ditemukan pada indeks: 29
# ```

# # Dalam contoh ini, `kalimat.rfind(kata_cari)` mencari kemunculan terakhir dari substring "fungsi" dalam string `kalimat`. Jika ditemukan, fungsi `rfind()` akan mengembalikan indeks posisi terakhir dari kemunculan tersebut. Jika tidak ditemukan, `std::string::npos` akan dikembalikan. Dengan memeriksa apakah hasil pencarian sama dengan `std::string::npos`, Anda dapat menentukan apakah substring yang dicari ditemukan atau tidak.