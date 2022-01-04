/******************************************************************************
This is my first C++ code of the 2022 year
Initial version: Fabien Felix

==>> Contribute to the code on github: https://github.com/HappyNewYearInAmadeus/Main/blob/main/HappyNewYear.cpp
==>> Edit/Enrich/Run it with the online compiler: https://www.onlinegdb.com/online_c++_compiler
*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>
using namespace std;

const bool goodResolutions = false;         // It was set to true in previous releases but the QA manager rejected it was blocking the test scenario 'reallife_2021'. 
                                            // Ref PTR#1000390

const bool funAtWork = true;                // you can set it to false but the the code might crash

const bool enjoyInAmadeus = true;           // I changed into a constant, as the initial complex function to compute it was always returning 'true' and I want to save CPU - and CO2 :) ...
                                            // As it is used a bit everywhere in the code, its less risky to not remove it (and I have to deliver my user story in rush). 
                                            // The maintenance team will cleanup ... 
                                            
int noMoreCovid;                            // I tried to use the Data plateform with AI/ML to forecast this boolean an intelligent way, 
                                            // but after several months in prod the customers were complaining about it. 
                                            // So, let's put a random, nobody will notice the difference

bool vaccinationDone = true;                // All OK


int main()
{
  time_t t = std::time(nullptr);
  tm *const pTInfo = std::localtime(&t);
  int *p=NULL;

  if (pTInfo->tm_year + 1900 == 2022) 
    {
        cout<<"Happy New year!\n";
        
        if (funAtWork && enjoyInAmadeus) cout<<"It will be super cool :)\n";
            
        srand(time(0));
        noMoreCovid=rand() %2; // mostly random, as the covid forecasts
       
        if (noMoreCovid || vaccinationDone )    cout<<"Book your next vacation flight NOW\n";
        else                                    cout<<"\n Keep your money for future travel";
        
        if (!funAtWork) exit(-1);
        else // to be completed in next PIs
        {}
    }
}
