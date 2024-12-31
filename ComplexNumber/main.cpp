#include <iostream>

using namespace std;
class complexnumber{
    int real;
    int img;
    public:
        void setReal(int _real)
        {
            real=_real;
        }
         int getReal()
        {
            return real;
        }
         void setImg(int _img)
        {
            img=_img;
        }
         int getImg()
        {
            return img;
        }
        void print()
        {

            if(img<0)
            {
                 cout << real<<img<<"j" << endl;
            }
            else if(img>0){

             cout << real<<"+"<<img<<"j" << endl;
            }else if(img==0)
            {
                cout << real<< endl;
            }
        }


};
int main()
{
    int real;
    int img;
     cin >> real;
      cin >> img;
  complexnumber cn;
  cn.setReal(real);
  cn.setImg(img);
  cn.print();
    return 0;
}
