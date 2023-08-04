// exercise 7-1. 
// Write a program that reads and stores the first names of any number of students, along with their grades. 
// Calculate and output the average grade and output 
// the names and grades of all the students in a table with the name and grade for three students on each line.

#include <string>
#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    int grade;
    std::string name;
    std::string is_input_done;

    std::vector<int> grades;
    std::vector<std::string> names;

    while (1) {
        // input
        std::cout << "입력 그만 하시겠습니까?";
        std::cin >> is_input_done;

        if (is_input_done == "y" or is_input_done == "Y") {
            std::cout << "입력 그만 합니다!" << std::endl;
            break; 
        }

        std::cout << "학생의 이름을 입력하세요: 예: 박보성, 띄어쓰기 금지!";
        std::cin >> name;

        std::cout << "학생의 성적을 입력하세요: ";
        std::cin >> grade; 

        names.push_back(name.substr(1));
        grades.push_back(grade);

        cin.clear();
        
    }

    // 평균 성적 계산
    int grade_sum = 0;

    for (int g : grades) {
        grade_sum += g;
    }

    double avg = static_cast<double>(grade_sum) / grades.size();

    std::cout << "평균 성적: " << avg << std::endl;


    // 프린트
    for (int i = 0;  i < names.size(); i ++) {

        std::string output = "row " + std::to_string(i + 1) + "  :";
        for (int j = 0;  j < names.size(); ++j){

            if (j < names.size() - 3){
                output += names[j];
                output += "with ";
                output += std::to_string(grades[j]);
                output += ", ";

                std::cout << "1" << std::endl;
            } else {
                for (int k = j;  k < names.size(); ++k){
                    output += names[j];
                    output += "with ";
                    output += std::to_string(grades[j]);
                    output += ", ";

                    std::cout << "2" << std::endl;
                    break;
                }
            }
        }
        std::cout << output << std::endl;
    }
    

    return 0;
}