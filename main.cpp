#include <iostream>
#include <cctype>
#include "stock10.h"
#include "stack.h"
int main() {
  using std::cout;
  // ======================================
  // test for stock10
  // Stock stock0;
  // Stock stock1("NanoSmart", 12, 20.0);
  // stock1.show();
  // Stock stock2 = Stock("Boffo Objects", 2, 2.0);
  // stock2.show();
  
  // cout << "\nAssigning stock1 to stock2:\n";
  // stock2 = stock1;
  // cout << "Listing stock1 and stock2:\n";
  // stock1.show();
  // stock2.show();

  // cout << "\nUsing a constructor to reset an object\n";
  // stock1 = Stock("Nifty Foods", 10, 50.0); 
  // cout << "Revised stock1:\n";
  // stock1.show();
  // cout << "Done\n";

  // ======================================
  // test for stock20
  // const int STKS = 4;
  // Stock stocks[STKS] = {
  //     Stock("NanoSmart", 12, 20.0),
  //     Stock("Boffo Objects", 200, 2.0),
  //     Stock("Monolithic Obelisks", 130, 3.25),
  //     Stock("Fleep Enterprises", 60, 6.5)
  // };

  // cout << "Stock holding:\n";
  // int st;
  // for (st = 0; st < STKS; st++)
  //   stocks[st].show();
  
  // // set pointer to first element
  // const Stock * top = &stocks[0];
  // for (st = 1; st < STKS; st++)
  //   top = &top->topval(stocks[st]);

  // cout << "\nMost valuable holding:\n";
  // top->show();
  // ======================================
  // test for stack
  using namespace std;
  Stack st;  // create an empty stack
  char ch;
  unsigned long po;
  cout << "Please enter A to add a purchase order,\n"
       << "P to proces a PO, or Q to quit.\n";
  while(cin >> ch && toupper(ch) != 'Q')
    {
      while (cin.get() != '\n')
        continue;
      if (!isalpha(ch))
      {
        cout << '\a';
        continue;
      }
      switch(ch)
        {
          case 'A':
          case 'a': cout << "Enter a PO number to add:";
                    cin >> po;
                  if (st.isfull())
                    cout << "stack already full\n";
                  else
                    st.push(po);
                  break;
          case 'p':
          case 'P': if (st.isempty())
                      cout << "stack already empty\n";
                    else {
                      st.pop(po);
                      cout << "PO #" << po << " popped\n";
                    }
                      break;          
        }
      cout << "Please enter A to add a purchase order,\n"
           << "P to procsee a PO, or Q to quit.\n";
    }
  cout << "Bye\n";
  return 0;
}