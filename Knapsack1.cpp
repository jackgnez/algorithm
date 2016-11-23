#include <iostream>
#include <algorithm>
using namespace std;
#define CAPACITY 10
#define NUM 5
int optimal[CAPACITY] = { 0 };
int	weight[NUM] = { 4,5,6,2,2 };
int value[NUM] = { 6,4,5,3,6 };
int main(){
	for (int i = 0; i < NUM; i++) {
		for (int j = CAPACITY; j >= weight[i]; j--) {
			optimal[j] = max(optimal[j], optimal[j - weight[i]] + value[i]);
			cout << optimal[j] << " ";
		}
		cout << endl;
	}
	cout << endl << "the optimal solution is " << optimal[CAPACITY-1] << endl;
	system("pause");
	return 0;
}