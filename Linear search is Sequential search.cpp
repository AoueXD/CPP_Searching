#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int sequential_search(int list[], int n, int key);

int main() {
	srand(time(0));
	int i, j , k, size = 10, a[size];
	
	cout << "要找誰: ";
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
		cout << "在第" << i + 1 ;
	else 
		temp++;
    //比對陣列內的資料是否等於欲搜尋的條件
    //若找到符合條件的資料，就傳回其索引
    cout << endl;
    }
    if(temp == n)
    	cout << "NO FOUND";
    return(-1);    
    //若找不到符合條件的資料，就傳回 -1
}
