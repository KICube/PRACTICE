#include <iostream>
#include <algorithm> 
#include <vector>
 
long n;
long water{0};

int main() { 
    std::cin >> n; 
    
    std::vector<long> towers(n); 
    std::vector<long> first(n); 
    std::vector<long> secnd(n);
    
    for (long i = 0; i < n; i += 1) { 
        std::cin >> towers[i]; 
    }
    
    first[0] = towers[0]; 
    
    for (long i = 1; i < n; i += 1) { 
        first[i] = std::max(first[i - 1], towers[i]); 
    } 
    
    secnd[n - 1] = towers[n - 1]; 
    
    for (long i = n - 2; i >= 0; i -= 1) { 
        secnd[i] = std::max(secnd[i + 1], towers[i]); 
    } 
    
    for (long i = 0; i < n; i += 1) { 
        water += std::min(first[i], secnd[i]) - towers[i]; 
    }
    
    std::cout << water << '\n'; 
    return 0; 
}
