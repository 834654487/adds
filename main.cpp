#include <iostream>
#include <string>
#include "LinkedList.h"

int main(){
    
    LinkedList<int> S1;
    LinkedList<char> S2;
    char sz[1024] = { 0 };
    std::cin.getline(sz, 1024);
    std::string in(sz), out;
    int num = 0;
    int bits = 0;
    for(int i=in.size()-1;i>=0;i--){
        if(in[i] >= '0' && in[i] <= '9'){
            if(bits > 0){
                num = (in[i]-'0')*10+num;
            }
            else {
                num = in[i] - '0';
            }
            bits++;
        }
        else if(in[i] == '+'){
            if(S1.getSize() < 2){
                std::cout<<"Error"<<std::endl;
                exit(-1);
            }
            int num1 = S1.getItem(1);
            S1.deleteFront();
            int num2 = S1.getItem(1);
            S1.deleteFront();

            if(out.empty()){
                out = std::to_string(num1) + " + " + std::to_string(num2);
            }
            else{
                out = out + " + " + std::to_string(num2);
            }
            int num3 = num1 + num2;
            S1.addFront(num3);
            S2.addFront('+');
        }
        else if(in[i] == '-'){
            if(S1.getSize() < 2){
                std::cout<<"Error"<<std::endl;
                exit(-1);
            }
            int num1 = S1.getItem(1);
            S1.deleteFront();
            int num2 = S1.getItem(1);
            S1.deleteFront();

            if(out.empty()){
                out = std::to_string(num1) + " - " + std::to_string(num2);
            }
            else{
                out = out + " - " + std::to_string(num2);
            }
            int num3 = num1 - num2;
            S1.addFront(num3);

            S2.addFront('-');
        }
        else if(in[i] == '*'){
            if(S1.getSize() < 2){
                std::cout<<"Error"<<std::endl;
                exit(-1);
            }
            int num1 = S1.getItem(1);
            S1.deleteFront();
            int num2 = S1.getItem(1);
            S1.deleteFront();

            if(out.empty()){
                out = std::to_string(num1) + " * " + std::to_string(num2);
            }
            else{
                if(S2.getItem(1) == '+' || S2.getItem(1) == '-'){
                    out = '(' + out + ')';
                }
                out = out + " * " + std::to_string(num2);
            }
            int num3 = num1 * num2;
            S1.addFront(num3);

            S2.addFront('*');
        }
        else if(in[i] == '/'){
            if(S1.getSize() < 2){
                std::cout<<"Error"<<std::endl;
                exit(-1);
            }
            int num1 = S1.getItem(1);
            S1.deleteFront();
            int num2 = S1.getItem(1);
            S1.deleteFront();

            if(out.empty()){
                out = std::to_string(num1) + " / " + std::to_string(num2);
            }
            else{
                if(S2.getItem(1) == '+' || S2.getItem(1) == '-'){
                    out = '(' + out + ')';
                }
                out = out + " / " + std::to_string(num2);
            }
            int num3 = num1 / num2;
            S1.addFront(num3);

            S2.addFront('/');
        }
        else if(in[i] == ' '){
            if (bits > 0) {
                if (num < 0 || num > 99) {
                    std::cout << "Error" << std::endl;
                    exit(-1);
                }
                S1.addFront(num);
                num = 0;
                bits = 0;
            }
        }
        else{
            std::cout<<"Error"<<std::endl;
            exit(-1);
        }
    }
    if(S1.getSize() > 1 || S2.getSize() > 0){
        std::cout<<"Error"<<std::endl;
        exit(-1);
    }
    std::cout<<out<<" = "<<S1.getItem(1)<<std::endl;
    return 0;
}

