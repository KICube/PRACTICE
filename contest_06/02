#include<iostream>
#include<string>
#include<map>

std::map<std::string, double> bonuses;

//
#include <cmath>
class Employee {
    protected:
        std::string name = "";
        std::string job_title = "";
        int curr_salary = 0;
    public:
        virtual double bonus(double percent){
            return round(percent * ((double)curr_salary));
        }
        void salary(){
            curr_salary += bonus(bonuses[job_title]);
        }
        Employee(std::string name_n,std::string job_title_n,int salary_n){
            name = name_n;
            job_title = job_title_n;
            curr_salary = salary_n;
        }
        friend std::ostream& operator<<(std::ostream& out, Employee& emp){
            emp.salary();
            out << emp.name << " "
                << "(" << emp.job_title << "): "
                << emp.curr_salary;
            return out;
        }
};

class Manager : public Employee {
    public:
        Manager(std::string name, int money = 16242)
        :Employee(name, "manager", money){
        }
        double bonus(double percent) override{
            if(percent >= 0.1){
                return round(percent * (double)curr_salary);
            }
            return round(0.1 * (double)curr_salary);
        }
};
//

class Boss: public Employee{
public:
    Boss(std::string name, int money = 16242)
    :Employee(name, "boss", money){
    }
};

int main(){
    double boss_bonus, manager_bonus;
    std::cin >> boss_bonus >> manager_bonus;
    bonuses["manager"] = manager_bonus;
    bonuses["boss"] = boss_bonus;

    int john_money, bob_money, alice_money;
    std::cin >> john_money >> bob_money >> alice_money;
    Boss john("John", john_money);
    Manager bob("Bob", bob_money);
    Manager alice("Alice", alice_money);

    std::cout << john << '\n' << bob << '\n' << alice << std::endl;
}
