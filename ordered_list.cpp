#include <iostream>
using namespace std;

class ordlst{

    string arr[70];

    public:
    int add(int i){
        cout<< "enter the no of elements to be added\n";
        int n;
        cin>>n;
        cout<< "start entering the elements";
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        return n;

    }
    void read(int n){
        for(int j=0;j<n;j++){
            cout<<arr[j];
            cout<<" ";
        }
        cout<<endl;
    }
    void retrieve(int n){
        cout<<"enter the position of element to retrieve\n";
        int x;
        cin>>x;
        if(x>n||x<=0){
            cout<<"invalid choice";
            return;
        }
        cout<<endl;
        cout<<arr[x-1]<<endl;
    }
    void store(int n){
        cout<<"enter the position no. where u want new element\n";
        int index;
        cin>>index;
        for(int i=n;i>index-1;i--){
            if(i==0){
                goto label;
            }
            arr[i]=arr[i-1];
        }
        label:
        cout<<"enter the new element"<<endl;
        string element;
        cin>>element;
        arr[index-1]=element;
        cout<<"the new list is: "<<endl;
        for(int j=0;j<n+1;j++){
            cout<<arr[j];
            cout<<" ";
        }
        cout<<endl;
    }
        void del(int n){
        cout<<"enter the position no. of element to be deleted\n";
        int index;
        cin>>index;
        for(int i=index-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        cout<<"the updated list is: "<<endl;
        for(int j=0;j<n-1;j++){
            cout<<arr[j];
            cout<<" ";
            
        }
        cout<<endl;
    }

};

int main(){
    int size;
    ordlst a1;
    cout << "#table\npress 1 to create data" << endl;
    cout << "press 2 to retrieve an element" << endl;
    cout << "press 3 to add element in between " << endl;
    cout << "press 4 to delete a specific element" << endl;
    cout << "press 5 to read" << endl;
    while(true){
        cout<<"#select operation from table\n";
        int z;
        cin >> z;
        switch (z)
        {
        case 1:
            size=a1.add(1);
            break;

        case 2:
            a1.retrieve(size);
            break;

        case 3:
            a1.store(size);
            size++;
            break;

        case 4:
            a1.del(size);
            size--;
            break;

        case 5:
            a1.read(size);
            break;

        default:
            goto label;
            break;
        }
    }
    // size = a1.add(1);
    // a1.read(size);
    // a1.store(size);
    // size++;
    // a1.del(size);
    // size--;
    // a1.retrieve();

    label:
    cout<<"end of programme";
    return 0;
}