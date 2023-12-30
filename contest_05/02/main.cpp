class Water{
    private:
        int temperature = 0;
    public:
        Water(int temp){temperature = temp;}
        int curr_temp(){
            return temperature;
        }
};
class Teapot{
    private:
        int temperature;
        bool status = false;
    public:
        Teapot(Water wat){temperature = wat.curr_temp();}
        bool is_boiling(){
            if(temperature >= 100){
                status = true;
            }
            return status;
        }
        void heat_up(int temp){
            temperature += temp;
        }
};
