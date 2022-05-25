#include <iostream>
#include <vector>
#include <map>
#include <algorithm> //za sortiranje

using namespace std;

	 bool sortByVal(const pair<string, int> &a,
					const pair<string, int> &b)
	{
		return (a.second < b.second); //Za vtorata vrednost od mapata
	}

int main(){

	map<string,int> pod = {
	{"Bitola", 15}, {"Skopje", 42}, {"Veles", 2}, {"Prilep", 1}, {"Gostivar", 3}, {"Struga", 1}, {"Kicevo", 2}, {"Negotino", 4}, {"Ohrid", 1}, {"Resen", 4}};
	int broj = 0;
	int broj2 = 0;
	int broj3 = 0;
	string d;
	vector<pair<string, int>> vec;

	while(broj != 3){ //Programata raboti se dodeka broj != 3
		cout<<"1. Vnesi podatoci."<<endl;
		cout<<"3. Ispecati gi podatocite."<<endl;
		cout<<"3. Iskluci"<<endl;
		cin>>broj;

		if(broj == 1){ //Vnes na podatoci
			cout<<"Vnesete string: ";
			cin>>d;
			cout<<"Vnesete int: ";
			cin>>broj2;
			pod.insert(pair<string, int>(d, broj2)); //Vnesuvnje vo mapata

		}else if(broj == 2){ //Pecatenje podatoci
			map<string, int> :: iterator it; //Kreiranje iterator
		for (it=pod.begin(); it!=pod.end(); it++)
		{
			vec.push_back(make_pair(it->first, it->second)); //Dodavanje vrednosti od map vo vektorot
		}

		sort(vec.begin(), vec.end(), sortByVal); //Sortiranje od najmaliot do najgolemiot spored vtorata vrednost na mapata

		broj3 = vec.size(); //broj3 = vkupniot broj na elementi vo vektorot
		cout << "Mapata sortirana po vrednosti: " << endl;
		for (int i = 0; i < broj3; i++)
		{
			cout << vec[i].first << ": " << vec[i].second << endl; //Pecatenje na sortiranata mapata
		}
			}
	}
	return 0;
}
