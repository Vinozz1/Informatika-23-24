# Fungsi `substring()` dalam bahasa pemrograman C++ digunakan untuk mengambil sebagian dari string yang ada, yang disebut juga sebagai substring. Fungsi ini memungkinkan untuk memotong string sesuai dengan posisi awal dan panjang yang diinginkan.

# Contoh penggunaan `substring()` dalam C++:

# ```cpp
# #include <iostream>
# #include <string>

# int main() {
#     // Mendefinisikan string awal
#     std::string sentence = "Ini adalah contoh penggunaan fungsi substring dalam C++";
    
#     // Menyimpan substring mulai dari indeks ke-11 dengan panjang 9 karakter
#     std::string sub = sentence.substr(11, 9);

#     // Mencetak substring yang dihasilkan
#     std::cout << "Substring: " << sub << std::endl;

#     return 0;
# }
# ```

# Output (dalam terminal):

# ```
# Substring: contoh pe
# ```

# # Dalam contoh ini, `sentence.substr(11, 9)` digunakan untuk mengambil substring dari string `sentence`, dimulai dari indeks ke-11 dengan panjang 9 karakter. Hasilnya adalah string "contoh pe", yang merupakan potongan dari string asal.