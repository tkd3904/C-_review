#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream in("test.txt");
    std::string s;

    if(in.is_open()) {
        in.seekg(0, std::ios::end); //위치 지정자를 파일 끝으로 옮긴다
        int size = in.tellg(); // 그리고 그 위치를 읽는다 (파일의 크기)

        s.resize(size);
        in.seekg(0, std::ios::beg);
        in.read(&s[0], size);
        std::cout << s << std::endl;
    } else {
        std::cout << "파일을 찾을 수 없습니다!" << std::endl;
    }

    return 0;
}