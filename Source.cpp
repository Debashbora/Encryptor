#include "load.h"

map<char, char> theKey;
map<char, char> revKey;
char  keys[256];
vector<string> values;

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
string Encript::Message(const char* ch,const string& message,const string& messageEnc)
{
    if (!strcmp(ch, "-e")) {
        for (int i = 0; i != message.size(); i++)
        {

            string tempChar;
            tempChar = message.at(i);
            cout << "Encrypting.\n";
            messageEnc += theKey[tempChar];
         
        }
    }
    else if (!strcmp(ch, "-d"))
    {
        for (int i = 0; i != message.size(); i++)
        {

            string tempChar;
            tempChar = message.at(i);
            cout << "Decrypting.\n";
            messageEnc += revKey[tempChar];
        }
    }
    return messageEnc;
}
