// Code of using vector and features of vector...

#include <iostream>
#include <vector> // Heaader file for vector

using namespace std;

void display(vector <int> &v) // function for vector print
{
	int size = v.size();
	for(int i = 0; i < size; ++i)
	{
		//cout << v[i] << " ";
		cout << v.at(i) << " "; // v[i] & v.at(i)  works same
	} 
	cout << endl;
}

int main()
{
	int element;
	vector <int> vec1; // Declaration of vector variable
	
	vec1.push_back(1); // Push element to the vector
	vec1.push_back(2); // Push element to the vector
	vec1.push_back(3); // Push element to the vector
	vec1.push_back(4); // Push element to the vector
	vec1.push_back(5); // Push element to the vector

	/* for (int i = 0; i < 5; ++i) // taking user input to vector
	{
		cout << "Enter a element to vector ";
		cin >> element;

		vec1.push_back(element); // Push element to the vector
	} */
	
	int size =  vec1.size();
	cout << size <<endl; // Checking Vector Size

	display(vec1);
	
	vec1.pop_back(); // Remove a element from the back of vector

	display(vec1);

	vector <int> :: iterator iter = vec1.end(); // use of iterator
	vec1.insert(iter,500); // use of insert();
	vec1.insert(iter-2,3,200); // insert multiple ammound of same element
	display(vec1);

	vector <int> vec2(3,10); // another way to declare vector
	display(vec2);
	return 0;
}
