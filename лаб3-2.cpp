#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int i, j; 
    string text, glasnie,vivod;                                       
    cin>> text;               
    glasnie = "euioayEYUIOA";                           

    for (int i = 0; i < text.length(); i++)             
        for (j = 0; j < glasnie.length(); j++)        
            if (glasnie[j] == text[i])                  
            {
                vivod += text[i];
            }
    cout << "Текст: " << text << endl;
    cout << "Гласные: " << vivod << endl;                         
}
