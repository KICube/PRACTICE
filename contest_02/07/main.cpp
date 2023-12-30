#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <sstream>

Student make_student(std::string str) {
    Student stud;

    std::istringstream info(str);
    std::getline(info, stud.name, ';');  
    std::getline(info, stud.group, ';');
    std::string course_name = "";
    while (std::getline(info, course_name, ';')) {
        Course cour;
        std::string course_semester = "";
        std::string course_finished = "";
        std::getline(info, course_semester, ';');
        std::getline(info, course_finished, ';');
        cour.name = course_name;
        cour.semester = std::stoi(course_semester);
        cour.finished = (course_finished == "1");
        stud.courses.push_back(cour);
    }
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

bool is_debtor(Student student, int cur_semester, int max_debt){
    int debt_counter = 0;
    for (int i = 0; i < student.courses.size(); i += 1){
        if (student.courses[i].semester < cur_semester && student.courses[i].finished == false){
            debt_counter += 1;
        }
    }
    return debt_counter > max_debt;
}
