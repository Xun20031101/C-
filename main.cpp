#include <iostream>

using namespace std;

int main()
{
    int n,k,l;
    cout << "�п�J�ǥͤH��:";
    cin>>n;
    int a[50];
    string b[50],v;
    double c[50],d[50],e[50],f[50];
    cout<<"�п�J �y�� �m�W ��� �^�� �ƾ� ���Z";
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
        f[i]=c[i]+d[i]+e[i];
    }
    cout<<"(1) �C�X�Ҧ��ǥͦ��Z(�t�`���B����)"<<endl<<"(2) �H�y���d�ߦ��Z"<<endl<<"(3) �H�m�W�d�ߦ��Z"<<endl<<"(4) �����d��"<<endl<<"�п�ܭn�i�檺�ާ@(1-4):";

    while(cin>>k)
    {
        if(k==1)
        {
            cout<<"�y�� �m�W ��� �^�� �ƾ� �`�� ����"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<' '<<b[i]<<' '<<c[i]<<' '<<d[i]<<' '<<e[i]<<' '<<f[i]<<' '<<(f[i]/3)<<endl;
            }
        }
        if(k==2)
        {
            cout<<"�п�J�y��:";

            cin>>l;
            l=l-1;
            cout<<"�y�� �m�W ��� �^�� �ƾ� �`�� ����"<<endl<<a[l]<<' '<<b[l]<<' '<<c[l]<<' '<<d[l]<<' '<<e[l]<<' '<<f[l]<<' '<<(f[l]/3)<<endl;

        }
        if(k==3)
        {
            for(int j=0;j<n;j++)
            {
                cin>>v;
                if(b[j]==v)
                {
                    cout<<"�y�� �m�W ��� �^�� �ƾ� �`�� ����"<<endl<<a[j]<<' '<<b[j]<<' '<<c[j]<<' '<<d[j]<<' '<<e[j]<<' '<<f[j]<<' '<<(f[j]/3)<<endl;

                }
            }
        }
        if(k==4)
        {
            break;
        }
        cout<<"(1) �C�X�Ҧ��ǥͦ��Z(�t�`���B����)"<<endl<<"(2) �H�y���d�ߦ��Z"<<endl<<"(3) �H�m�W�d�ߦ��Z"<<endl<<"(4) �����d��"<<endl<<"�п�ܭn�i�檺�ާ@(1-4):";


    }
}
