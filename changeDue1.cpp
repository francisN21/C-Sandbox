int main()
{
  int 1 dollar = 1 int 5 dollar = 5 int 10 dollar = 10 int 20 dollar = 20 int 50 dollar = 50 int 100 dollar = 100

      int cashPayment = 45000;
  int amountTendered = 100000;
  int changeDue = amountTendered – cashPayment;

  cout << "Cash payment amount: " << cashPayment << endl;
  cout << "Tendered amount: " << amountTendered << endl;
  cout << "Change due: " << changeDue << endl;

  int hundredThousands = changeDue / 100000;
  changeDue = changeDue % 100000;

  int tenThousands = changeDue / 10000;
  changeDue = changeDue % 10000;

  cout << "  this many two dollar bills: " << twos << endl;
  cout << "  this many one dollar bills: " << ones << endl;
}
