#include <string>

using namespace std;

class Item {
    private:
        static int totalItems;
        string name;
        int value;

    public:
        Item();
        static int getTotalItems();
        static void incrementTotalItems();
        string getName() const;
        int getValue() const;
        void display() const;
};