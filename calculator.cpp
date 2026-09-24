 # include <iostream> 
 using namespace std ;

   double qwe (double a, double b) {return a+b;}

   double ass (double a, double b) {return a-b;}

   double zxc (double a, double b) {return a*b;}

  int main() { 
    
    double qw1 , qw2;
     
    char as;
 
    for (int i = 1 ; i <= 3 ; i++ ) { 
    
       cout << "第" << i << "次计算" << "\n";
       cin >> qw1 >> as >> qw2 ;
       
    if(as=='+'){ 
        
        cout << "结果:" << qwe(qw1,qw2);}
        
        else if (as=='-'){ 
        
        cout << "结果:" << ass(qw1,qw2);}
    
        else if (as=='*'){
         cout << "结果:" << zxc(qw1,qw2);}
        
        else {
         cout << "我不认识这个符号" << "\n";
        }
       }
     
     cout << "程序结束，感谢使用" << "\n";
        
        
        return 0;
        
        
  }
