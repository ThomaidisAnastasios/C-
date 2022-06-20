class Money
{
    private: int dollars;
             int cents;
    public: Money();
            Money(int dollars, int cents);
            void print();
            int getDollars();
            int getCents();  
            void add(Money m1, Money m2);
            friend Money addMoney (Money m1, Money m2);
             
      
      
      
      
      
      
      
      
      
      
      };
      
