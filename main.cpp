// staging: commit 후보군
// commit: 코드 현 상태
// push: 코드 업로드 -> repository

// 컴파일: g++ main.cpp -o main
// 실행: ./main 

// 주석 처리 on off: ctrl + /

#include <iostream>

int main()
{
    int score{};
    char grade{};
    std::cout << "Enter score: ";
    std::cin >> score;
    switch(score/10)
    {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F';
    }
    std::cout << score << " " << grade << std::endl;
    
    // int numOfStudents(30);
    // (numOfStudents == 30) ? (std::cout << "default\n") : (std::cout << "changed\n"); // 조건연산자: () ? () : (); -> 괄호 1이 참일 때 괄호 2 실행, 괄호 1이 거짓일 때 괄호 3 실행

    // if (numOfStudents > 30) std::cout << "increased\n";
    // else if (numOfStudents < 30) std::cout << "decreased\n";
    // else std::cout << "default\n";

    // if (numOfStudents == 30) std::cout << "default\n";

    // std::cout << numOfStudents++ << std::endl; //30
    // std::cout << numOfStudents << std::endl; //31
    // std::cout << ++numOfStudents << std::endl; //32
    // std::cout << numOfStudents << std::endl; //32

    // std::cout << "Enter num of students: ";
    // std::cin >> numOfStudents;

    // std::cout << numOfStudents << std::endl; //end 'l'ine
    // std::cout << sizeof(numOfStudents) << std::endl;
    // std::cout << typeid(numOfStudents).name() << std::endl;
    // std::cout << typeid(static_cast<double>(numOfStudents)).name() << std::endl;

    return 0;
}