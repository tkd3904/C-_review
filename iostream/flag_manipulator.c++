#include <string>
#include <iostream>

int main() {
  int t;
  while (true) {
    std::cin.setf(std::ios_base::hex, std::ios_base::basefield);
    std::cin >> t;
    std::cout << "입력 :: " << t << std::endl;
    if (std::cin.fail()) {
      std::cout << "제대로 입력해주세요" << std::endl;
      std::cin.clear(); 
    }
    if (t == 0) break;
  }
}
//std::cin.clear(); 플래그를 초기화하고 .ignore 개행문자가 나올때 까지 무시