# Fungsi `find()` dalam bahasa pemrograman C++ digunakan untuk mencari indeks dari kemunculan pertama suatu kata (substring) dalam sebuah string. Fungsi ini dapat ditemukan di dalam library `<string>` dan mengembalikan posisi pertama dari kata yang dicari dalam string target.

# Contoh penggunaan `find()` dalam C++:

# ```cpp
# #include <iostream>
# #include <string>

# int main() {
#     std::string sentence = "Ini adalah contoh penggunaan fungsi find dalam C++";
#     std::string word_to_find = "contoh";

#     size_t position = sentence.find(word_to_find); 

#     if (position != std::string::npos) {
#         std::cout << "Kemunculan pertama dari kata \"" << word_to_find << "\" ditemukan pada indeks: " << position << std::endl;
#     } else {
#         std::cout << "Kata \"" << word_to_find << "\" tidak ditemukan." << std::endl;
#     }

#     return 0;
# }
# ```

# Output (dalam terminal):

# ```
# Kemunculan pertama dari kata "contoh" ditemukan pada indeks: 9
# ```

# Dalam contoh ini, `sentence.find(word_to_find)` mencari kemunculan pertama dari kata "contoh" dalam string `sentence`. Jika ditemukan, fungsi `find()` akan mengembalikan indeks posisi pertama dari kemunculan tersebut. Jika tidak ditemukan, `std::string::npos` akan dikembalikan. Dengan memeriksa apakah hasil pencarian sama dengan `std::string::npos`, Anda dapat menentukan apakah kata yang dicari ditemukan atau tidak.