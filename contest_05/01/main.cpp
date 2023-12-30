#include <iostream>
#include <cstdlib>
#include <time.h>

class Cat{
    private: 
        bool status;
    public:
        void status_change(bool new_status){
            status = new_status;
        }
        bool is_alive(){
            return status;
        }
};

class Box{
    private:
        bool status;
        int cnt = 0;
    public:
        Cat open(){
            if(cnt == 0){
                cnt += 1;
                status = rand() % 2;
            }
            Cat cat;
            cat.status_change(status); 
            return cat;
        }
};
