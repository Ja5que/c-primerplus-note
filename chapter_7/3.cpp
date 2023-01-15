#include <cstring>
#include <iostream>
#include <string>
#define clr std::cout << std::endl;

template <typename T>
void getsth(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin >> now;
    return;
};

template <typename T>
void getsthl(const std::string &tip, T &now) {
    std::cout << tip << ' ';
    std::cin.getline(now, 80);
    return;
};

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void displayboxvalue(const box &now) {
    std::cout << "Maker: " << now.maker << std::endl;
    std::cout << "Height: " << now.height << std::endl;
    std::cout << "Width: " << now.width << std::endl;
    std::cout << "Length: " << now.length << std::endl;
    std::cout << "Volume: " << now.volume << std::endl;
    std::cout << std::endl;
    return;
}
void setboxvolume(box &now) {
    now.volume = now.height * now.width * now.length;
    return;
}
int main() {
    box now = {"Jay", 0.49, 2.94, 0.49, 0.0};
    displayboxvalue(now);
    setboxvolume(now);
    displayboxvalue(now);
    return 0;
}