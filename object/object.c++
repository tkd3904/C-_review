#include <iostream>

class Animal{ 
    private: // 객체 내부에서 접근이 가능하다
    int food; // 멤버변수
    int weight; 

    public:
    void set_animal(int _food, int _weight){
        food = _food;
        weight = _weight;
    }
    void increse_food(int inc){
        food += inc;
        weight += (inc/3);
    }
    void view_stat(){
        std::cout << "이 동물의 food  :" << food << std::endl;
        std::cout << "이 동물의 weight : " << weight << std::endl;
    }
};

int main(){
    Animal animal;
    animal.set_animal(100, 50);
    animal.increse_food(30);
    /*
    animal.food = 100; 이런식의 접근은 곤란함 */

    animal.view_stat();
    return 0;
}