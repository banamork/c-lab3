#include <iostream>
#include <string>

using namespace std;

class timing_diagram{
    public:
        void classiq(char classiq = '1'){
            for(int i = 0; i <= msize; i++){
                signal[i] = classiq;
                nsize = nsize + 1;
                durability = durability + time[2];
            }
        }
        int set_durability(unsigned char user_choice){
            if (nsize >= msize){
                return 1;
            }
            else{
                for(nsize; nsize < msize; nsize++){
                    signal[nsize] = user_choice;
                    switch(user_choice){
                        case '0':
                            durability = durability + time[1];
                            break;
                        case '1':
                            durability = durability + time[2];
                            break;
                        case 'x':
                            durability = durability + time[0];
                            break;
                        default:
                            break;
                    }
                }
                return 0;
            }
        }
        int set_ascii(unsigned char user_input){
            if(nsize >= msize){
                return 1;
            }
            else{
                signal[nsize] = user_input;
                nsize = nsize + 1;
                switch(user_input){
                    case '0':
                        durability = durability + time[1];
                        break;
                    case '1':
                        durability = durability + time[2];
                        break;
                    case 'x':
                        durability = durability + time[0];
                        break;
                    default:
                        break;
                    }
                return 0;
            }
        }
        int set_normal(unsigned char user_choice){
            if(nsize >= msize){
                return 1;
            }
            else{
                signal[nsize] = user_choice;
                nsize = nsize + 1;
                switch(user_choice){
                    case '0':
                        durability = durability + time[1];
                        break;
                    case '1':
                        durability = durability + time[2];
                        break;
                    case 'x':
                        durability = durability + time[0];
                        break;
                    default:
                        break;
                }
                return 0;
            }
        }
        void print(){
            for (int i = 0; i < msize; i++){
                cout << signal[i] << " ";
            }
            cout << endl;
            cout << durability << endl;
            cout << nsize << endl;
        }
        int copy(int number){
            int comparison = number * nsize;
            if(comparison < msize){
                int i = 0;
                while(nsize != comparison){
                    signal[nsize] = signal[i];
                    i = i + 1;
                    nsize = nsize + 1;
                }
                return 0;
            }
            else return 1;
        }
        int move_right(int number){
            if(durability - number > 0){
                while(number >= 0){
                    int i = 0;
                    unsigned char choice = signal[i];
                    int del;
                    switch(choice){
                        case '0':
                            del = time[1];
                            break;
                        case '1':
                            del = time[2];
                            break;
                        case 'x':
                            del = time[0];
                            break;
                        default:
                            del = time[0];
                            break;
                    }
                    number = number - del;
                    unsigned char tmp;
                    tmp = signal[msize - 1];
                    for (int i = msize - 1; i >= 0; i--){
                        signal[i] = signal[i-1];
                    }
                    signal[0] = tmp;
                }
                return 0;
            }
            else return 1;
        }
        int move_left(int number){
            if(durability - number > 0){
                while(number >= 0){
                    int i = 0;
                    unsigned char choice = signal[i];
                    int del;
                    switch(choice){
                        case '0':
                            del = time[1];
                            break;
                        case '1':
                            del = time[2];
                            break;
                        case 'x':
                            del = time[0];
                            break;
                        default:
                            del = time[0];
                            break;
                    }
                    number = number - del;
                    unsigned char tmp;
                    tmp = signal[0];
                    for (int i = 0; i <= msize; i++){
                        signal[i] = signal[i + 1];
                    }
                    signal[msize - 1] = tmp;
                }
                return 0;
            }
            else return 1;
        }
    private:
        int durability = 0;
        int msize = 32;
        int nsize = 0;
        unsigned char signal[32];
        int time[3]= {0, 1, 2};  //NON, ZERO, ONE
};
