/*
 * To illustrate Simplicity the wrong way, this will be the
 * only comment I provide throughout this file. Naming conventions
 * will not make sense and nothing will be explained. But the function
 * does virtually the same thing as in 'Simplicity.cpp'
 */

#include <iostream>

using namespace std;

int lollipopppppppppppppp(int dinosaur);

int main()
{
  int negativeNumbers = 5;
  cout << "A number from somewhere " << lollipopppppppppppppp(negativeNumbers) << " times." << endl;

  return 42;
}

int lollipopppppppppppppp(int dinosaur)
{
  bool maybe = true, notSo = false;
  int theLibraryBook;
  if(maybe)
  {
    if(!notSo)
    {
      for(theLibraryBook = 0; theLibraryBook < dinosaur; theLibraryBook += 1)
      {
          cout << theLibraryBook;
      }
    }
  }

  return theLibraryBook;
}
