/*
a b c d
a b d c
a c b d
a c d b
a d b c
a d c b

b a c d
b a d c
b c a d
b c d a
b d a c
b d c a

c a b d
c a d b
c b a d
c b d a
c d a b
c d b a

d a b c
d a c b
d b a c
d b c a
d c a b
d c b a
*/
#include <iostream>
using namespace std;
int main() {
    unsigned short a = 0, b = 0, c = 0, d = 0;
    unsigned short n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cin >> a >> b >> c >> d;
    if ( a < b && a < c && a < d) { // a x x x
        n1 = a;
        if ( b < c && b < d ) {     // a b x x
            n2 = b;
            if ( c < d ) {          // a b c d *
                n3 = c;
                n4 = d;
            } else {                // a b d c *
                n3 = d;
                n4 = c;
            }
        } else if ( c < d ) {       // a c x x
            n2 = c;
            if ( b < d ) {          // a c b d *
                n3 = b;
                n4 = d;
            } else {                // a c d b *
                n3 = d;
                n4 = b;
            }
        } else {                    // a d x x
            n2 = d;
            if ( b < c ) {          // a d b c *
                n3 = b;
                n4 = c;
            } else {                // a d c b *
                n3 = c;
                n4 = b;
            }
        }
    } else if ( b < c && b < d ) {  // b x x x
        n1 = b;
        if ( a < c && a < d ) {     // b a x x
            n2 = a;
            if ( c < d ) {          // b a c d *
                n3 = c;
                n4 = d;
            } else {                // b a d c *
                n3 = d;
                n4 = c;
            }
        } else if ( c < d ) {       // b c x x
            n2 = c;
            if ( a < d ) {          // b c a d *
                n3 = a;
                n4 = d;
            } else {                // b c d a *
                n3 = d;
                n4 = a;
            }
        } else {                    // b d x x
            n2 = d;
            if ( a < c ) {          // b d a c *
                n3 = a;
                n4 = c;
            } else {                // b d c a *
                n3 = c;
                n4 = a;
            }
        }
    } else if ( c < d) {
        n1 = c;
        if ( a < b && a < d ) {     // c a x x
            n2 = a;
            if ( b < d ) {          // c a b d *
                n3 = b;
                n4 = d;
            } else {                // c a d b *
                n3 = d;
                n4 = b;
            }
        } else if ( b < d ) {       // c b x x
            n2 = b;
            if ( a < d ) {          // c b a d *
                n3 = a;
                n4 = d;
            } else {                // c b d a *
                n3 = d;
                n4 = a;
            }
        } else {                    // c d x x
            n2 = d;
            if ( a < b ) {          // c d a b *
                n3 = a;
                n4 = b;
            } else {                // c d b a *
                n3 = b;
                n4 = a;
            }
        }
    } else {
        n1 = d;
        if ( a < b && a < c ) {     // d a x x
            n2 = a;
            if ( b < c ) {          // d a b c *
                n3 = b;
                n4 = c;
            } else {                // d a c b *
                n3 = c;
                n4 = b;
            }
        } else if ( b < c ) {       // d b x x
            n2 = b;
            if ( a < c ) {          // d b a c *
                n3 = a;
                n4 = c;
            } else {                // d b c a *
                n3 = c;
                n4 = a;
            }
        } else {                    // d c x x
            n2 = c;
            if ( a < b ) {          // d c a b *
                n3 = a;
                n4 = b;
            } else {                // d c b a *
                n3 = b;
                n4 = a;
            }
        }
    }
    cout << n1 << " " << n2 << " " << n3 << " " << n4;
    return 0;
}