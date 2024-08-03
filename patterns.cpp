//PATTERN 1 
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i<=n) {
        
        int j = 1;
        while(j<=n) {
            cout<< "*";
            j = j+1; 
        }
        cout<<endl; 

        i = i+1;
    } 
}
//PATTERN 2 
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;

    while(i<=n) {

        int j = 1;
        while(j<=n) {
            cout << i;
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }
}

//PATTERN 3 

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 1;
    while(row <= n) {

        int col = 1;
        while(col <= row) {
            cout<< row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}

//PATTERN 4 

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int row = 1;

    while(row<=n) {

        int col = 1;
        int value = row;
        while(col <= row) {
            cout<<value;
            value = value + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}

//PATTERN 5 

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    
    while(i <= n) {

        int j = 1;
        while(j <= i) {
            cout<<(i-j+1)<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
    return 0;
}

//PATTERN 6 #include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;
    while(row <= n) {

        int col = 1;

        while(col <= n) {
            char ch = 'A' + row - 1;
            cout<< ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}

//PATTERN 7 
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        int col = 1;

        while(col <= row) {
            char ch = ('A' + row + col - 2);
            cout<<ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;

    }
    return 0;
}
//PATTERN 8 
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        int col = 1;
        char start = 'A' + n - row;
        while(col <= row) {
            cout<< start;
            start = start + 1;
            col = col + 1;
        }
        cout<< endl;
        row = row + 1;
    }
    return 0;
}
//PATTERN 9
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row = 1;

    while(row <= n) {

        //space print karlo
        int space = n - row;
        while(space) {
            cout<<" ";
            space = space - 1;
        }

        //stars print karlo
        int col = 1;
        while( col <= row ) {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    return 0;
}