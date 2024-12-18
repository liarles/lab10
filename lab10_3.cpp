#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;


int main()

{

        int count = 0;

        float sum = 0;

        float sum_of_square = 0;

        string textline;

        ifstream source("score.txt");

        while (getline(source, textline))

        {
            float num = atof(textline.c_str());
                sum += num;

                sum_of_square += num*num;

                count++;

        }
        source.close();
        
        float mean = sum / count;
        float standart = sqrt((sum_of_square/count)-pow(mean,2));

        cout << "Number of data = " << count << "\n";

        cout << setprecision(3);

        cout << "Mean = " << mean << "\n";

        cout << "Standard deviation = " << standart;
        
        return 0;

}

