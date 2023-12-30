#include <tuple>
#include <cmath>

int nod_finder(int x, int y){
	if(y == 0){
        return(x);
    }
    return nod_finder(y, x%y);
}

std::tuple<int,int> reduce(int x,int y){
    int nod = nod_finder(std::abs(x), y);
	return std::make_tuple(x / nod, y / nod);
}

std::tuple<int,int,int> find_lcm(int x,int y){
	x = std::abs(x);
	y = std::abs(y);
	int nod = nod_finder(x, y);
	int finalnum = y * (x / nod);
    int xmult = y / nod;
    int ymult = x / nod;
    
    return std::make_tuple(finalnum, xmult, ymult);
}
