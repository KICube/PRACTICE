#include <iostream>

int wavepeaknumcnt{2};
int currnum{1};
bool reversed{true};
bool finalnumprinted{false};

int main()
{
    int finalnum;
    std::cin >> finalnum;
    std::cout << '\n';
    while (finalnumprinted == false)
    {
        if (reversed)
        {
            int numcnt{1};
            while (numcnt <= wavepeaknumcnt)
            {
                int currnumcnt{1};
                while(currnumcnt <= numcnt)
                {
                    std::cout << currnum << " ";
                    if (currnum == finalnum){finalnumprinted = true;break;}
                    currnumcnt += 1;
                    currnum += 1;
                }
                if (currnum == finalnum && finalnumprinted == true){break;}
                std::cout << '\n';
                if (numcnt == wavepeaknumcnt) {reversed = false; wavepeaknumcnt += 1; break;}
                numcnt += 1;
            }
            if (currnum == finalnum && finalnumprinted == true){break;}
        }
        else
        {
            int numcnt{wavepeaknumcnt-2};
            while (numcnt >= 2)
            {
                int currnumcnt{1};
                while(currnumcnt <= numcnt)
                {
                    std::cout << currnum << " ";
                    if (currnum == finalnum){finalnumprinted = true;break;}
                    currnum += 1;
                    currnumcnt += 1;
                }
                if (currnum == finalnum && finalnumprinted == true){break;}
                std::cout << '\n';
                if (numcnt == 1) {reversed = true;break;}
                numcnt -= 1;
            }
            if (currnum == finalnum && finalnumprinted == true){break;}
            reversed = true; 
        }
        
    }
}
