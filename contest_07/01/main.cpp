#include <iostream>

struct Time{
    short hours;
    short minutes;
    short seconds;
    
    void addSeconds(short count){
        seconds += count;
        if (seconds >= 60){
            count = seconds / 60;
            seconds %= 60;
        } else return;
        
        minutes += count;
        if (minutes >= 60){
            count = minutes / 60;
            minutes %= 60;
        } else return;
        
        hours += count;
        if (hours >= 60)
            hours = minutes = seconds = 0;
    }
};

bool operator==(const Time& lhs, const Time& rhs){
    return lhs.hours == rhs.hours &&
           lhs.minutes == rhs.minutes &&
           lhs.seconds == rhs.seconds;
}

bool operator!=(const Time& lhs, const Time& rhs){
    return not (lhs == rhs);
}

bool operator<(const Time& lhs, const Time& rhs){
    return lhs.hours * 3600 + lhs.hours * 60 + lhs.seconds < rhs.hours * 3600 + rhs.hours * 60 + rhs.seconds;
}

class IRunnable{
public:
    virtual void run() = 0;
};

class IClock{
public:
    virtual void add(IRunnable* client, Time time) = 0;
    virtual bool next() = 0;
};

//
#include <string>
#include <queue>

class OSUpdater : public IRunnable{
    public:
    void run() override{
        std::cout << " OSUpdater\n";
    }
};

class Alarm : public IRunnable{
    public:
    void run() override{
        std::cout << " Alarm\n";
    }
};

class ActivityChecker : public IRunnable{
    public:
    void run() override{
        std::cout << " ActivityChecker\n";
    }
};

class Clock: public IClock, public IRunnable{
    private:
    std::queue<std::pair<IRunnable*,Time>> events;
    public:
    void add(IRunnable* client, Time time) override {
        Time time1 = time;
        events.push(std::make_pair(client,time1));
    }
    bool next() override {
        if(!events.empty()){
            return true;
        }
        return false;
    }
    void run() override {
        if(this->next() == false){
            std::boolalpha;
            std::cout << false;
        }else{
            while(this->next() == true){
                std::pair<IRunnable*,Time> curr_cout = events.front();
                events.pop();
                if(curr_cout.second.hours < 10){std::cout << 0;}
                std::cout << curr_cout.second.hours << ":";
                if(curr_cout.second.minutes < 10){std::cout << 0;}
                std::cout << curr_cout.second.minutes << ":";
                if(curr_cout.second.seconds < 10){std::cout << 0;}
                std::cout << curr_cout.second.seconds;
                curr_cout.first->run();
            }
        }
    }
};
//

int main(){
    int monentum;
    std::cin >> monentum;
    srand(monentum);  // Фиксируем случайность
    
    IClock* clock = new Clock;
    IRunnable* timer = (Clock*)clock;
    
    Time t = {0, 0, 0}, midnight = {0, 0, 0};
    
    do{
        int type = rand() % 3;
        if (type == 0) clock->add(new OSUpdater, t);
        else if (type == 1) clock->add(new Alarm, t);
        else if (type == 2) clock->add(new ActivityChecker, t);
        t.addSeconds(3600 + rand() % 3600);
    }while(t != midnight);
    
    timer->run();
}
