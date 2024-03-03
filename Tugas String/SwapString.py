# Fungsi `swap()` dalam bahasa pemrograman C++ digunakan untuk menukar isi dari dua objek. Dalam konteks string, `swap()` digunakan untuk menukar isi dari dua string.

# Contoh penggunaan `swap()` dalam C++:

# ```cpp
# #include <iostream>
# #include <string>

# int main() {
#     std::string str1 = "Hello";
#     std::string str2 = "World";

#     std::cout << "Sebelum swap:" << std::endl;
#     std::cout << "str1: " << str1 << std::endl;
#     std::cout << "str2: " << str2 << std::endl;

#     str1.swap(str2); // Menukar isi str1 dan str2

#     std::cout << "\nSetelah swap:" << std::endl;
#     std::cout << "str1: " << str1 << std::endl;
#     std::cout << "str2: " << str2 << std::endl;

#     return 0;
# }
# ```

# Output:

# ```
# Sebelum swap:
# str1: Hello
# str2: World

# Setelah swap:
# str1: World
# str2: Hello
# ```

# Dalam contoh ini, `str1.swap(str2)` digunakan untuk menukar isi dari dua string, yaitu `str1` dan `str2`. Setelah dipanggil, isi dari `str1` menjadi "World" dan isi dari `str2` menjadi "Hello". Hal ini memungkinkan untuk pertukaran konten dari dua string tanpa menggunakan variabel penengah.