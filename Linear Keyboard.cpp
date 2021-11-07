#include <iostream>
#include <string>
using namespace std;

int main()
{
      int sum{ };
      int currentIndex{ };
      int cases{ };
      string order{ };
      string word{ };
      cin >> cases;
      for(int i = 0; i < cases; i++)
      {
          sum = 0;
          cin >> order >> word;
          currentIndex = order.find(word[0]);
          for(int n = 1; n < word.length(); n++)
          {
              int index = order.find(word[n]);
              sum += abs(index - currentIndex);
              currentIndex = index;
          }
          cout << sum << '\n';
      }
      return 0;
}
