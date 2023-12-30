#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

Student make_student(std::string str) {
    Student stud;

    std::istringstream student_info(str);
    std::getline(student_info, stud.name, ';');  
    std::getline(student_info, stud.group);   

    return stud;
}

bool is_upper(Student stud1, Student stud2) {
    if (stud1.group == stud2.group){
        return stud1.name < stud2.name;
    }
    return stud1.group < stud2.group;
}

void print(std::vector<Student> students) {
    if (students.size() == 0) {
        std::cout << "Empty list!";
    } else {
        std::string curr_group = "";
        for (int i = 0; i < students.size(); i += 1) {
            if (curr_group != students[i].group) {
                curr_group = students[i].group;
                std::cout << curr_group << std::endl;
            }
            std::cout << "- " << students[i].name << '\n';
        }
    }
}
