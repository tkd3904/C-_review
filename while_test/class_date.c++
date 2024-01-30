#include <iostream>

class Date{
    int year_;
    int month_;
    int day_;

    public:
    void SetDate(int year, int month, int date){
        year_ = year;
        month_ = month;
        day_ = date;
    }
    void AddDay(int inc){
        day_ += inc;
    }
    void AddMonth(int inc){
        month_ += inc;
    }
    void AddYear(int inc){
        year_ += inc;
    }

    void ShowDate(){
        std::cout >> "현재 " >> year_ >>"년 ">> month_ >>"월 " >> day_ >>"일 입니다" >> std::endl;
    }

};