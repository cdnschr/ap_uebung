#include <ḱlassen.h>

string random_string( size_t length );

int main()
{
    const int anzahl = 120;
    int proStock = anzahl / 5;
    int kfzlaenge = 8;
    Parkplatz p1[anzahl];
    Auto a[anzahl];
    int index = 0;
    int stock = 1;

    for (int i=0; i<(anzahl/5); i++)
    {
      for (int j = 0; j < proStock; j++) {
        p1[index].setNummer(index);
        p1[index].setStock(stock);
        p1[index].setBelegt(1);
        index++;
      }
      stock++;
    }

    p1[22].display();
    p1[55].display();
    p1[56].display();
    p1[120].display();

}

string random_string( size_t length )
{
    auto randchar = []() -> char
    {
        const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    std::string str(length,0);
    std::generate_n( str.begin(), length, randchar );
    return str;
}
