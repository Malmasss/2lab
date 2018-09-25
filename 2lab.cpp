1)
#include <iostream>
#include <cmath>

using namespace std;

int f1(int a) {
int n1 = a/10;
return n1;
}

int f2(int a) {
int n2 = a%10;
return n2;
}

int main () {
int a;
cout << "Vvedite dvuhznachnoe chislo: ";
cin >> a;
if (a>=10&&a<=99) {
int r1 = f1(a);
cout << "Chislo desyatka: " << r1 << "\n";
int r2 = f2(a);
cout << "Chislo edinici: " << r2 << "\n";
}

else {
cout << "vi vveli ne dvuhznachnoe chislo" << "\n";
}
return 0;
}



2)
#include <iostream>
using namespace std;

int main() {
	cout << "Vvedite celoe chislo p: ";
	int p;
	cin >> p;
	cout << "Vvedite chislo q: ";
	int q;
	cin >> q;
		if (p%q==0)
	{
		cout << "Chislo delitsya nacelo: " << p/q << "\n";
	}
		else
	{
		cout << "Chiclo ne delitsya nacelo" << "\n";
	}
return 0;

}



3)
#include <iostream>
using namespace std;

int main () {
cout << "Vvedite chislo a: ";
int a;
cin >> a;

if (a<9) {
cout<< "A<9"<< "\n";
return 0;
}

else { 
cout << "Chislo a>9." << "\n";
return 0;
}

return 0;
}




4)
#include <iostream>
#include <cmath>

using namespace std;


	double f(double x, double y)
{
	double n1 = sqrt( (1+x) / 2 + pow (y,x) );
	return sqrt( sqrt(x) + n1 );
}



int main ()
{
	cout << "Vvedite x: ";
	int x;
	int y;
	cin >> x;
	cout << "Vvedite y: ";
	cin >>y;
	cout << "Otvet: " << f(x,y) << "\n";
return 0;

}




5)
#include <iostream>
#include <cmath>

using namespace std;


	double f(double x)
{
	double n1 = ( pow(sin(x),2) + pow(cos(x),2) );
	return pow(x,2)/n1;
}


	int main ()
{
	int x = 4;
	cout << "Otv: " << f(x) << "\n";
return 0;


}
