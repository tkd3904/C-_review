#include <iostream>

void print(int x){ std::cout << "int : " << x << std::endl; }
void print(char x){ std::cout << "char : " << x << std::endl; }
void print(double x){ std::cout << "double : " << x << std::endl; }

int main(){
    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);
    print(c);

    return 0;
}
/*함수의 오버로딩은 다음과 같은 과정을 가진다
>>먼저 오버로딩이란 함수가 같은 이름을 가지고 있어도 컴파일러가 적합한 인자를 가지는 함수를 찾아서 호출해준다.

1. 자신의 타입과 일치하는 함수를 찾는다
2. 정확히 일치하는 타입이 없으면 형변환을 거친다 
>> char, unsinged char, short -> int
>> Unsigned short -> int의 size에 따라 int, unsigned int로 변환된다
>> float은 double로 변환된다.
>> Enum은 int로 변환된다.
3. 위와 같이 변환해도 일치하는게 없다면 좀더 포괄적인 형변환을 통해 일치하는 함수를 찾는다.
>> float -> int
>> Enum -> double
>> 0 -> 포인터 or 숫자타입
>> 포인터 -> void 포인터
*/