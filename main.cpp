#include <iostream>

using namespace std;

int main()
{
    int n,k,l;
    cout << "請輸入學生人數:";
    cin>>n;
    int a[50];
    string b[50],v;
    double c[50],d[50],e[50],f[50];
    cout<<"請輸入 座號 姓名 國文 英文 數學 成績";
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
        f[i]=c[i]+d[i]+e[i];
    }
    cout<<"(1) 列出所有學生成績(含總分、平均)"<<endl<<"(2) 以座號查詢成績"<<endl<<"(3) 以姓名查詢成績"<<endl<<"(4) 結束查詢"<<endl<<"請選擇要進行的操作(1-4):";

    while(cin>>k)
    {
        if(k==1)
        {
            cout<<"座號 姓名 國文 英文 數學 總分 平均"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<' '<<d[i]<<' '<<e[i]<<' '<<f[i]<<' '<<(f[i]/3)<<endl;
            }
        }
        if(k==2)
        {
            cout<<"請輸入座號:";

            cin>>l;
            l=l-1;
            cout<<"座號 姓名 國文 英文 數學 總分 平均"<<endl<<a[l]<<' '<<b[l]<<' '<<c[l]<<' '<<d[l]<<' '<<e[l]<<' '<<f[l]<<' '<<(f[l]/3)<<endl;

        }
        if(k==3)
        {
            for(int j=0;j<n;j++)
            {
                cin>>v;
                if(b[j]==v)
                {
                    cout<<"座號 姓名 國文 英文 數學 總分 平均"<<endl<<a[j]<<' '<<b[j]<<' '<<c[j]<<' '<<d[j]<<' '<<e[j]<<' '<<f[j]<<' '<<(f[j]/3)<<endl;

                }
            }
        }
        if(k==4)
        {
            break;
        }
        cout<<"(1) 列出所有學生成績(含總分、平均)"<<endl<<"(2) 以座號查詢成績"<<endl<<"(3) 以姓名查詢成績"<<endl<<"(4) 結束查詢"<<endl<<"請選擇要進行的操作(1-4):";


    }
}
