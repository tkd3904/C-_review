#include <fstream>
#include <iostream>
#include <string>

int main() {
  // 파일 읽기 준비
  std::ifstream in("test.txt");
  char buf[100];

  if (!in.is_open()) {
    std::cout << "파일을 찾을 수 없습니다!" << std::endl;
    return 0;
  }

  while (in) {
    in.getline(buf, 100);
    std::cout << buf << std::endl;
  }

  return 0;
}

//getline은 \n 이 나올때 최대 지정한 크기 -1만큼 읽게 된다. 

//in.getline(buf, 100, '.'); 이면 .인 나올때 까지 입력을 받게 됨