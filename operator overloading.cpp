#include<iostream>
using namespace std;
class location{
	int latitude;
	int longitude;
	public:
		location(){
		}
		location(int lt, int lg){
			latitude=lt;
			longitude=lg;
			
		}
		void show();
		friend location operator+(location ob1,location ob2);
	
};
void location::show()
{
	cout<<latitude<<" "<<longitude<<endl;
}
location operator+(location ob1,location ob2){
	location temp;
	temp.latitude=ob1.latitude+ob2.latitude;
	temp.longitude=ob1.longitude+ob2.longitude;
	return temp;
}
int main(){
	location l1(20,10),l2(30,40);
	l1.show();
	l2.show();
	l1=l1+l2;
	l1.show();
	}
