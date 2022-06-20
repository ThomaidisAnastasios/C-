class Money 
{ 
    public: 
        Money(); 
        Money(int d, int c); 
        void add(Money m1, Money m2); 
        void display_money( ); 
        int getDollars();
        int getCents();
        friend void compare(Money m1, Money m2);
        friend Money addMoney(Money m1, Money m2);
    private: 
        int dollars; 
        int cents; 
}; 