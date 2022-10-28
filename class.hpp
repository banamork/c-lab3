#include <iostream>
#include <string>
#include <cassert>
#include <time.h>

using namespace std;
class timing_diagram {
    public:
        timing_diagram(char classiq = '1'){
            for(int i; i <= 10; i++){
                signal[i] = classiq;
            }
        }
        int set_durability(char user_choice){
            if (user_choice != 'x' || user_choice != '1' || user_choice != '0'){
                return 1;
            }
            else{
                for(int i; i <= 10; i++){
                signal[i] = user_choice;
                }
                return 0;
            }
        }
        void set_ascii(){
            char user_input;
            for(int i; i <= 10; i++){
                cin >> user_input;
                signal[i] = user_input;
            }
        }
        void print(){
            for (int i; i <= 10; i++){
                cout << signal[i] << " ";
            }
            cout << endl;
        }
    private:
        int durability;
        char signal[10];
};
