#ifndef PRIMESIEVE_H
#define PRIMESIEVE_H
#include <vector>

struct prime
{
    int value;
    std::vector<int> mInt;
};

class primeSieve
{
    public:
        primeSieve(int);
        virtual ~primeSieve();
        void build();
        void iInsert(int);
        bool vSearch(int);
        void printPrime();
        void MaxGap();
        void checkPrime(int);
        void primeFactor(int);
        void primeFactorAll();

    protected:
    private:
        bool isprime(int);
        int maxNum;
        std::vector<prime> vTable;

};

#endif // PRIMESIEVE_H
