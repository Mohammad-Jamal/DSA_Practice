#include <iostream>
#include <vector>
using namespace std;

int main()
{
  create vector and declare
      vector<int>
          v;
  vector<int> v1(5, 4); // vector initialize
  // size and capacity of the vector
  cout << "Size of vector v : " << v.size() << "\n";
  cout << "Capacity of vector v : " << v.capacity() << "\n";
  v.push_back(2);
  cout << "After inserting one element" << endl;
  cout << "Size of vector v : " << v.size() << endl;
  cout << "Capacity of vector v : " << v.capacity() << endl;
  cout << "After inserting one more element" << endl;
  v.push_back(5);
  cout << "Size of vector v : " << v.size() << endl;
  cout << "Capacity of vector v " << v.capacity() << endl;
  v.push_back(3);
  cout << "After inserting one more element" << endl;
  cout << "Size of vector v : " << v.size() << endl;
  cout << "Capacity of vector v : " << v.capacity() << endl;

  cout << "Size of vector v1 : " << v1.size() << endl;
  cout << "Capacity of vector v1 : " << v1.capacity() << endl;
  cout << "After the pushing new element in v2 vector " << endl;
  v1.push_back(6);
  cout << "Size of vector v1 : " << v1.size() << endl;         //? 5
  cout << "Capacity of vector v1 : " << v1.capacity() << endl; //* 10

  //? update the value
  v[0] = 1;

  //? vector ini
  vector<int> b = {1, 2, 3, 5, 4};
  cout << "Size of vector b : " << b.size() << endl;
  cout << "Capacity of vector b : " << b.capacity() << endl;

  //* delete value from the vector
  vector<int> v2;
  v2.push_back(1);
  v2.push_back(2);
  v2.push_back(12);
  v2.push_back(15);
  for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";
  cout << endl;
  cout << "Size of v2 : " << v2.size() << endl;
  cout << "Capacity 0f v2 : " << v2.capacity() << endl;
  cout << "After the delete" << endl;
  v2.pop_back();
  for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";
  cout << endl;
  cout << "Size of v2 : " << v2.size() << endl;
  cout << "Capacity 0f v2 : " << v2.capacity() << endl;
  //? delete certain element
  v2.erase(v2.begin() + 2);
  cout << "Delete the 12 element" << endl;
  for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";
  cout << endl;
  cout << "Size of v2 : " << v2.size() << endl;
  cout << "Capacity 0f v2 : " << v2.capacity() << endl;
  //* insert certain element in certain index
  v2.insert(v2.begin() + 1, 14);
  for (int i = 0; i < v2.size(); i++)
    cout << v2[i] << " ";
  cout << endl;

  // //* to remove all the elements in the vector
  v2.clear();
  cout << "After the deletion of all elements " << endl;
  cout << "Size of v2 : " << v2.size() << endl;
  cout << "Capacity 0f v2 : " << v2.capacity() << endl;

  //* copy values of one vector to another
  vector<int> v3;
  vector<int> v4;
  v3.push_back(10);
  v3.push_back(12);
  v3.push_back(15);
  v3.push_back(145);
  v4 = v3;
  cout << "Size of v4 : " << v4.size() << endl;
  cout << "Capacity of v4 : " << v4.capacity() << endl;

  //*front,back,at,empty
  cout << "front : " << v4[0] << endl;
  cout << "front : " << v4.front() << endl;
  cout << "back : " << v4[v4.size() - 1] << endl;
  cout << "back : " << v4.back() << endl;

  //* iterating methods of v4 vector
  //? one method :
  for (auto it = v4.begin(); it != v4.end(); it++)
    cout << *it << " ";
  cout << endl;
  //? short and simple way :
  for (auto i : v4)
    cout << i << " ";
  cout << endl;

  //* sorting in vector
  vector<int> w;
  w.push_back(12);
  w.push_back(10);
  w.push_back(54);
  w.push_back(2);
  w.push_back(14);
  cout << "Before sort" << endl;
  for (auto i = w.begin(); i != w.end(); i++)
    cout << *i << " ";
  cout << endl;
  sort(w.begin(), w.end());
  cout << "After sort" << endl;
  for (auto i : w)
    cout << i << " ";
  cout << endl;
  ? sort in decreasing order
        sort(w.begin(), w.end(), greater<int>()); // one way of sorting in decreasing order
  sort(w.rbegin(), w.rend());                     // another way of sorting in decreasing order

  //* Binary search in vector
  vector<int> i;
  i.push_back(12);
  i.push_back(13);
  i.push_back(54);
  i.push_back(255);
  i.push_back(300);
  cout << binary_search(i.begin(), i.end(), 12);    //? returns 1 or 0 if ele exits or not
  cout << find(i.begin(), i.end(), 12) - i.begin(); //? returns index of 12
}