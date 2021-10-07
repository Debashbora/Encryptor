#include "load.h"


Encript::Encript() 
{
    map<string, string> theKey;
    map<string, string> revKey;
    vector<string> keys;
    vector<string> values;
}
void Encript::LoadMap()

{
    string valuesstr = "0dbxgizuacy3q7fpv8ej5hr2mn";
    for (char v : valuesstr)
    {
        values.push_back(string{ v });
    }
    values.push_back(" ");
    for (char c = 'a'; c <= 'z'; ++c)
    {
        keys.push_back(string{ c });
    }
    keys.push_back(" ");
    for (int i = 0; i != keys.size(); i++)
    {
       theKey[keys[i]] = values[i];
       revKey[values[i]] = keys[i];
    }

}
string Encript::Message(const char* ch, string message, string messageEnc)
{
   
        for (int i = 0; i != message.size(); i++)
        {

            string tempChar;
            tempChar = message.at(i);

            if (!strcmp(ch, "-e"))
            {
                cout << "Encrypting.\n";
                messageEnc += theKey[tempChar];
            }

            else if (!strcmp(ch, "-d"))

            {
                cout << "Decrypting.\n";
                messageEnc += revKey[tempChar];
            }

        }
    
    return messageEnc;
}
