#include<iostream>
using namespace std;
class logger{
    private:
    logger() {}
    public:
    static logger& getInstance() {
        static logger instance;
        return instance;
    }
    logger(const logger&) = delete;
    logger& operator=(const logger&) = delete;
};
int main() {
    return 0;
}