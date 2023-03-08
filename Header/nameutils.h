#include <string>

inline void capitalize(char* inp)
{
    int i = 0, order = 0;
    while (*(inp + i) != '\0')
    {
         std::cout << *(inp + i) << std::endl;
         if (i == 0 && (*inp > 78 || *inp > 41))
         {
              *inp = *inp + 1;
          }
          else
          {
          //     std::cout << *inp << std::endl;
          }
   }
   std::cout << (int)i;
}