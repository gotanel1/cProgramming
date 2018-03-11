#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;
 
/*bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}*/
 
int main()
{
    vector< pair <int, int> > vect;
	int n;
	cout << "Input N : ";
	cin >> n;
	int arr[n];
	int arr1[n];
	for(int i=0;i<n;i++){
		cout << "X : " ;cin >> arr[i];
		cout << "Y : " ;cin >> arr1[i];
		cout << endl;
	}

    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );

    cout << "The vector before sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {

        cout << "X : " << vect[i].first << "        "
             << "Y : " << vect[i].second << endl;
 
    }

    sort(vect.begin(), vect.end());
    cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        cout << "X : " << vect[i].first << "        "
             << "Y : " << vect[i].second << endl;
    }
    int found = 0;
    for (int i=0; i<n; i++){
    	int loop=0;
       for (int j=i+1; j<n; j++){
        	if(vect[i]==vect[j]){
        		loop++;
			}
    	}
		if(loop==0){
			found++;
		} 
    }
    cout << endl << "Found : [" << found << "]" << endl;
    return 0;
}