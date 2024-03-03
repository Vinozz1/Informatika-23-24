# Fungsi `replace()` dalam bahasa pemrograman C++ digunakan untuk mengganti bagian dari string dengan string lainnya. Fungsi ini memungkinkan untuk mengganti substring tertentu dalam string target dengan substring baru.

# Contoh penggunaan `replace()` dalam C++:

# ```cpp
#include <iostream>
#include <string>

# int main() {
#     std::string sentence = "Ini adalah contoh penggunaan fungsi replace dalam C++";
#     std::string replacement = "contoh";
#     std::string new_word = "demo";

#     sentence.replace(sentence.find(replacement), replacement.length(), new_word);

#     std::cout << "Kalimat setelah penggantian: " << sentence << std::endl;

#     return 0;
# }

# ```

# Output (dalam terminal):

# ```
# Kalimat setelah penggantian: Ini adalah demo penggunaan fungsi replace dalam C++
# ```

# Dalam contoh ini, `kalimat.replace(kalimat.find(pengganti), pengganti.length(), baru)` digunakan untuk mengganti kemunculan pertama dari substring "contoh" dalam string `kalimat` dengan substring "demo". Fungsi `find()` digunakan untuk menemukan indeks dari kemunculan pertama dari substring yang ingin diganti. Kemudian, fungsi `replace()` digunakan untuk mengganti substring tersebut dengan string baru.