# include <iostream>//
# include <vector>
using namespace std;
vector <int> verycap;
vector <int> vec1(10);
vector <int> vec2(6,4); //? This will create a 6 membered vector with all elements as 4
void display(vector<int> &v )
{
    for( int i=0 ;i<v.size();i++ ){
        cout<<v.at(i)<<endl;  //? Here we are using at operator to indicate the location of iterator of this  vector
    }
}

int main (){
verycap.push_back(4);verycap.push_back(5);verycap.push_back(6);verycap.push_back(7);verycap.push_back(8);verycap.push_back(9);verycap.push_back(10);verycap.push_back(4);verycap.push_back(4);verycap.push_back(4);

    vector<int> :: iterator iter = verycap.begin();  ///?This is how You'll Create an Iterator in CPP
    verycap.insert(iter+5,600,566); //? n:6 means that 6 copies will be inserted
    display(verycap);



}