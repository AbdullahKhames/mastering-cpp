#include "selection.h"
void doArihmetic() {
    int a,b;
    cin >> a >>b;
    bool isEvenA = a % 2 == 0; 
    bool isEvenB = b % 2 == 0;
    if (isEvenA && isEvenB)
    {
        cout << a / b << endl;
    }else if (!isEvenA && !isEvenB){
        cout << a * b << endl;
    }else if (!isEvenA && isEvenB){
        cout << a + b << endl;
    }else{
        cout << a - b << endl;
    }
    
}


void findMax() {
    int a, b, c, max;
    cin >> a >> b >> c;
    if (a < 100 && b < 100 && c < 100)
    {
        if (a > b && a > c)
        {
            max = a;
        } else if (b > a && b > c)
        {
            max = b;
        } else {
            max = c;
        }
    } else if (a < 100 && b < 100)
    {
        if (a > b)
        {
            max = a;
        } else {
            max = b;
        }
        
    } else if (a < 100 && c < 100)
    {
        if (a > c)
        {
            max = a;
        } else {
            max = c;
        }
    } else if (b < 100 && c < 100)
    {
        if (b > c)
        {
            max = b;
        } else {
            max = c;
        }
    } else if (a < 100)
    {
        max = a;
    } else if (b < 100)
    {
        max = b;
    } else if (c < 100)
    {
        max = c;
    } else
    {
        max = -1;
    }
    cout << max << endl;
}

void findMaxOfTen() {
    int x, max;
    cin >> x;
    max = x;
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cin >> x;
    if (x > max)
    {
        max = x;
    }
    cout << max << endl;
}


void findMaxUpToTen() {
    int n, x, max;
    cin >> n;
    if (n >= 2 && n <=10)
    {
        cin >> x;
        n -= 1;
        max = x;
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        if (n >= 2) {
            cin >> x;
            n -= 1;
        }
        
        if (x > max)
        {
            max = x;
        }
        cout << max << endl;
    } else {
        cout << "invalid value!\n";
    }
}

void intervals1() {
    int x, s1, e1, s2, e2, s3, e3, count = 0;
    cin >> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    if (x >= s1 && x <= e1)
    {
        count++;
    }
    if (x >= s2 && x <= e2)
    {
        count++;
    }
    if (x >= s3 && x <= e3)
    {
        count++;
    }
    
    cout << count << endl;
}

void intervals2 () {
    cout << "intervals2\n";
    int s1, e1, s2, e2, s3, e3;
    cin >> s1 >> e1 >> s2 >> e2;

    if (s2 >= s1)
    {
        s3 = s2;
        if (s2 < e1)
        {
            if (e1 <= e2)
            {
                e3 = e1;
            }else {
                e3 = e2;
            }
        }else if (s2 == e1) {
            e3 = e1;
        } else {
            cout << -1;
            return;
        }
        cout << s3 << " " << e3 << endl;
    } else if (s1 >= s2)
    {
        s3 = s1;
        if (s1 < e2)
        {
            if (e2 <= e1)
            {
                e3 = e2;
            }else {
                e3 = e1;
            }
        }else if (s1 == e2) {
            e3 = e2;
        } else {
            cout << -1;
            return;
        }
        cout << s3 << " " << e3 << endl;
    } else {
        cout << -1;
    }
}
