#include <iostream>
#include <conio.h>
using namespace std;

class MyClass{
	int a, b;
public:
 MyClass(int izm, int jzm){
	a=izm;
	b=jzm;
}
	friend int fun_sum (MyClass s_ob);
	friend isfactor (MyClass ob);
};

int fun_sum(MyClass s_ob){
	return s_ob.a+s_ob.b;
}

isfactor (MyClass ob){
	if(ob.a% ob.b==0)
	return true;
	else return false;
}

int main(){
	MyClass m(4,2);
	cout<<"Suma="<<fun_sum(m)<<endl;
//	cout<<"Dilutsya 1, Ne dilutsya 0 :"<<endl;
//	cout<<isfactor(m);
    if(isfactor(m)){
	cout<<"Dilutsya";
}
    else cout<<"Ne dilutsya bez ostachi";
	return 0;
}
