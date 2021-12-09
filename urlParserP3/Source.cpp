#include <iostream>
#include <string>
int main() {
    std::cout << "Please enter a URL: ";
    std::string url;
    std::cin >> url;
    std::string scheme = url.substr(0, url.find_first_of("/"));
    int x = 0;
    int index = 0;
    for (int i = 0; i < url.length(); i++) {
        if (url[i] == '/') {
            x += 1;
        }

        if (x == 3) {
            break;
        }
        index += 1;
    }
    std::string auth = url.substr(url.find_first_of("//"), index - url.find("/"));
    std::string path = url.substr(index, url.length());
    std::cout << "scheme = " << scheme << "\n";
    std::cout << "authority = " << auth << "\n";
    std::cout << "path = " << path << "\n";
}