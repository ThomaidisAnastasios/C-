class Runner
{
 private:
         double time[5];
         int distance;
 public: 
         void set_distance(int d);
         void set_times(int i, double t);
         void display();
         double FindBest();
         bool FindQuicker(Runner r);      
      
};
