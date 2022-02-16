#include <iostream>
#include <cmath>
using namespace std;

long double dur;
int sumr;

class ifo{
    private:
        int x, y, r;
    public:
        ifo(){}
        void si(int x_, int y_, int r_){
            x = x_;
            y = y_;
            r = r_;
        }
        int px(){
            return x;
        }
        int py(){
            return y;
        }
        int pr(){
            return r;
        }
        ~ifo(){}
};

void cal(ifo j, ifo r) {
    int x1 = j.px();
    int x2 = r.px();
    int y1 = j.py();
    int y2 = r.py();
    dur = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    sumr = j.pr() + r.pr();
}

int main() {
    int rep;
    
    cin >> rep;
    
    int *ans = new int[rep];
    
    for(int j = 0; j < rep; j++) {
        int inf[6];
        
        for(int i = 0; i < 6; i++){
            cin >> inf[i];
        }
        
        ifo J, R;
        
        J.si(inf[0], inf[1], inf[2]);
        R.si(inf[3], inf[4], inf[5]);
        
        cal(J, R);
        
        if(dur > (long double)sumr)
            ans[j] = 0;
        else if(dur == (long double)sumr)
            ans[j] = 1;
        else if(dur == 0) {
            if(J.pr() == R.pr())
                ans[j] = 1;
            else
                ans[j] = 0;
        }
        
        else {
            if(J.pr() < R.pr()){
                if((dur + (long double)J.pr()) < (long double)R.pr())
                    ans[j] = 0;
                else if((dur + (long double)J.pr()) == (long double)R.pr())
                    ans[j] = 1;
                else
                    ans[j] = 2;
            }
            else if(J.pr() < R.pr()){
                if((dur + (long double)J.pr()) < (long double)R.pr())
                    ans[j] = 0;
                else if((dur + (long double)J.pr())== (long double)R.pr())
                    ans[j] = 1;
                else
                    ans[j] = 2;
            }
        }
    }
    for(int i = 0; i < rep; i++)
        cout << ans[i] << "\n";
    
    delete[] ans;
}
