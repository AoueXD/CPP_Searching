#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int sequential_search(int list[], int n, int key);

int main() {
	srand(time(0));
	int i, j , k, size = 10, a[size];
	
	cout << "�n���: ";
	cin >> k;
	for(i = 0; i < size; i ++) 
	{
		a[i] = (rand () % 7);
		cout << a[i] << "  ";
	}
	cout << endl;
	
	sequential_search(a, size, k);

	
	return 0;
}

int sequential_search(int list[], int n, int key)
{
  int i, temp = 0;
  for (i = 0; i < n; i++)
    {
    if (list[i] == key) 
		cout << "�b��" << i + 1 ;
	else 
		temp++;
    //���}�C������ƬO�_������j�M������
    //�Y���ŦX���󪺸�ơA�N�Ǧ^�����
    cout << endl;
    }
    if(temp == n)
    	cout << "NO FOUND";
    return(-1);    
    //�Y�䤣��ŦX���󪺸�ơA�N�Ǧ^ -1
}
