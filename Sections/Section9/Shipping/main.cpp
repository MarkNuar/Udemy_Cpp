#include <iostream>

using namespace std;

int main(){
	
	int length{}, width{}, height{};
	double base_cost {2.50};
	
	const int tier1_threshold {100};
	const int tier2_threshold {500};
	
	int max_dimension_length {10};
	
	double tier1_surcharge {0.10};
	double tier2_surcharge {0.25};
	
	
	
	cout <<"Enter w, h, l"<<endl;
	cin >> length >> width >> height;
	
	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
	{
		cout << "Sorry, dimension exceeded" << endl;
	}
	else
	{
		int package_volume {width * height * length};
		double package_cost {base_cost};
		
		if (package_volume >= tier2_threshold)
		{
			package_cost += package_cost * tier2_surcharge;
			cout << "Adding tier2 surcharge" << endl;
		}
		else if (package_volume >= tier1_threshold)
		{
			package_cost += package_cost * tier1_surcharge;
			cout << "Adding tier1 surcharge" << endl;
		}
		
		cout << "The volume of your package is " << package_volume << endl;
		cout << "The cost is " << package_cost << endl;
	}
	
	
	return 0;
}