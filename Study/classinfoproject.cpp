#include<bits/stdc++.h>
using namespace std;
int main()
{
    int id;

    int roll[]={1296,1297,1298,1299,1300,1301,1302,1303,1304,1305,1306,1307,1308,1309,1310,1311,1312,1313,1314,1315,1316,1317,1318,1319,1320,1321,1322,1323,1324,1325,1326,1327,1328,1329,1330,1331,1332,1333,1334,1335,1336,1337,1338,1339,1340,1341,1342,1343,1344,1345,1346,1347,1348,1349,1350};
    int size=sizeof(roll)/4;
    cout << size << endl;
    cout<<"Enter your Roll: "<<endl;
    cin>>id;
    for(int i=0;i< size;i++)
    {
        if(roll[i]==1315)
        {
            cout<<"name sajib\nid"<< roll[i]<< "\ncse department\n";
        }
        else if(roll[i]==1316 ){
            cout<<"name xdfdfdfgdf\nid"<< roll[i]<< "\ncse department\n";
        }

    }
}
