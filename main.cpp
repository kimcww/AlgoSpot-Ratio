#include <iostream>

using namespace std;

const long long L = 2000000000;

int Ratio(long long a, long long b)
{
    return (a* 100)/b;
}

//int Calculation(double N, double M)
//{

//    int Ratio = 0;
//    int ResultRatio = 0;
//    int Count = 1;
//    bool flag = true;
//    cout<<Ratio<<endl;
//    while(flag){

//        if( Ratio > 99.0 ){
//            flag = false;
//            break;
//        }
//        if( Count > L){
//            flag = false;
//            break;
//        }
//        ResultRatio = ((M+Count)/(N+Count))*100.0;
//        int minus = ResultRatio - Ratio;

//        if(minus >= 1){
//            flag = false;
//            return Count;
//        }
//        Count++;
//    }

//    return -1;
//}

int Calculation(long long N, long long M)
{
    if( Ratio(N,M) == Ratio(N+L, M+L)){
        return -1;
    }

    if( )

}

int main()
{
    int Input;
    cin>>Input;
        for(int i = 0; i < Input ; i++){
            int N;
            int M;
            cin>>N>>M;
            if( (N < 1) || (N > 1000000000) || (M>N)||(M<1)){
                return -1;
            }
            long long N2 = (long long)N;
            long long M2 = (long long)M;
            cout<<Calculation(N2,M2)<<endl;
        }
}
