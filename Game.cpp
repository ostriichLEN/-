#include <bits/stdc++.h>
#include <ctime>
using namespace std;
void dices_show(int n);
void start(void);
void end(int m,double e);
int  show(void);
void road_map(void);
vector <char> odd_even;
vector <char> big_small;
vector <int> sum;
vector <int> combination;

void road_map(){
    cout <<"�i��/���j"<<'\n';
    cout <<'\t';
    for (int i=0;i<odd_even.size();i++){
        cout <<odd_even[i]<<' ';
    }
    cout <<'\n';

    cout <<"�i�j/�p�j"<<'\n';
    cout<<'\t';
    for (int i=0;i<big_small.size();i++){
        cout<<big_small[i]<<' ';
    }
    cout <<'\n';
    
    cout <<"�i�`�M�j"<<'\n';
    cout <<'\t';
    for (int i=0;i<sum.size();i++){
        cout <<sum[i]<<' ';
    }
    cout <<'\n';

    cout <<"�i�զX�j"<<'\n';
    cout <<'\t';
    for (int i=0;i<combination.size();i+=3){
        cout <<combination[i]<<combination[i+1]<<combination[i+2]<<' ';
    }
    cout <<'\n';

    system("pause");
}

void end(int m,double e){
	system("cls");
	cout <<"-------------------------------"<<'\n';
	cout <<"|   G  A  M  E    O  V  E  R  |"<<'\n';
	cout <<"-------------------------------"<<'\n';
	cout <<'\n'<<"�����@�a��"<<m<<"��"<<'\n';
	cout <<"�@�@";
	if (m>=10000){
		cout <<"��Q"<<m-10000<<"��"<<'\n';
	} 
	else{
		cout <<"���l"<<10000-m<<"��"<<'\n';
	}
	
	cout <<"�ھڴ���ȡA�̷ӱz���U�`�Ҧ��z�w�p���q��:"<<e-10000<<"��"<<'\n';
	cout <<"�P����Ȭۤ�A�z��";
	if (m>e){
		cout <<"���B"<<(m/e)*100<<"%"<<'\n';		
	} 
	else{
		cout<<"�˷�"<<(e/m)*100<<"%"<<'\n';
	}
	system("pause");
}

void dices_show(int n){
    for (int i=0;i<2;i++){
        for (int j=0;j<6;j++){
            if (j==0){
                cout <<"---------"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"|   ��  |"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"�I!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==1){
                cout <<"---------"<<'\n';
                cout <<"|     ��|"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"| ��    |"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"�I!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==2){
                cout <<"---------"<<'\n';
                cout <<"|     ��|"<<'\n';
                cout <<"|   ��  |"<<'\n';
                cout <<"| ��    |"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"�I!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==3){
                cout <<"---------"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"|       |"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"�I!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==4){
                cout <<"---------"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"|   ��  |"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"�I!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
            else if (j==5){
                cout <<"---------"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"| ��  ��|"<<'\n';
                cout <<"---------"<<'\n';
                if (i==1 && n-1==j){
                    cout <<'\n'<<n<<"�I!"<<'\n';
                    _sleep(2000);
                    system("cls");
                    return ;
                }
                _sleep(500);
                system("cls");
            }
        }
    }
}

int  show (){
    int n;
    
    cout <<"�i�Ĥ@�� �j�B�p�B��B���j"<<'\n'<<"�H�U�|�� �@�ߤ@ : "<<'\n';
    cout <<"(1).�j"<<'\t'<<"(2). �p"<<'\t'<<"(3). ��"<<'\t'<<"(4). ��"<<'\n'<<'\n';

    cout <<"�i�ĤG�� �I�ơj"<<'\n'<<"�H�U���� �@�ߤ@"<<'\n';
    cout <<"(5). 1�I"<<'\t'<<"(6). 2�I"<<'\t'<<"(7). 3�I"<<'\t'<<"(8). 4�I"<<'\t'<<"(9). 5�I"<<'\t';
    cout <<"(10). 6�I"<<'\n'<<'\n';

    cout <<"�i�ĤT�� �զX�j"<<'\n'<<"�H�U�Q���� �@�ߤ�"<<'\n';
    cout <<"(11). �@�B�G"<<'\t'<<"(12). �G�B�|"<<'\t'<<"(13). �@�B�|"<<'\t'<<"(14). �G�B�T"<<'\t'<<"(15). �T�B�|"<<'\n';
    cout <<"(16). �G�B��"<<'\t'<<"(17). �T�B��"<<'\t'<<"(18). �G�B��"<<'\t'<<"(19). �|�B��"<<'\t'<<"(20). �T�B��"<<'\n';
    cout <<"(21). �@�B��"<<'\t'<<"(22). �@�B��"<<'\t'<<"(23). �|�B��"<<'\t'<<"(24). ���B��"<<'\t'<<"(25). �@�B�T"<<'\n'<<'\n';

    cout <<"�i�ĥ|�� �`�M�j"<<'\n';
    cout <<"�H�U�|�� �@�ߤ�"<<'\n';
    cout <<"(26). 9"<<'\t'<<"(27). 10"<<'\t'<<"(28). 11"<<'\t'<<"(29). 12"<<'\n';
    cout <<"�H�U�G�� �@�ߤK"<<'\n';
    cout <<"(30). 13"<<'\t'<<"(31). 8"<<'\n';
    cout <<"�H�U�G�� �@�ߤQ�G"<<'\n';
    cout <<"(32). 14"<<'\t'<<"(33). 7"<<'\n';
    cout <<"�H�U�G�� �@�ߤQ�|"<<'\n';
    cout <<"(34). 15"<<'\t'<<"(35). 6"<<'\n';
    cout <<"�H�U�G�� �@�ߤQ�K"<<'\n';
    cout <<"(36). 16"<<'\t'<<"(37). 5"<<'\n';
    cout <<"�H�U�G�� �@�ߤ��Q"<<'\n';
    cout <<"(38). 17"<<'\t'<<"(39). 4"<<'\n'<<'\n';

    cout <<"�i�Ĥ��� ��l�j"<<'\n'<<"�H�U���� �@�ߤK"<<'\n';
    cout <<"(40). ��@"<<'\t'<<"(41). ��G"<<'\t'<<"(42). ��T"<<'\t';
    cout <<"(43). ��|"<<'\t'<<"(44). �來"<<'\t'<<"(45). �碌"<<'\n'<<'\n';

    cout <<"�i�Ĥ��� ����(�T�ӻ�l�P��)�j"<<'\n'<<"�H�U�@�� �@�ߤG�Q�|"<<'\n';
    cout <<"(46). ����"<<'\n'<<'\n';

    cout <<"�i�ĤC�� ���(�T�ӻ�l�P�� �B�����w�Ʀr"<<'\n';
    cout <<"�H�U���� �@�ߤ@�ʤ��Q"<<'\n';
    cout <<"(47). ��@"<<'\t'<<"(48). ��G"<<'\t'<<"(49). ��T"<<'\t';
    cout <<"(50). ��|"<<'\t'<<"(51). ��"<<'\t'<<"(52). ��"<<'\n';

    cout <<"�п�ܭn�U�`���� : "<<'\n';
    cout <<"��J99�i�H�d�ݽ䧽RoadMap"<<'\n';
    cout <<"�Ϊ̡A�z�i�H��J88��������"<<'\n'; 
    cin>>n;
    return n;
}


void start(){
    cout <<"���_�C��"<<'\n';
    cout <<"�п�J���N��}�l�C��"<<'\n';
    system ("pause");
}


int main(){
    start();
    system("cls"); 
    double expected=10000;
    int money=10000;
    int bet;
    while (true){
        if (money==0){
            break;
        }
        srand( time(NULL)); 
        int dices[3];
        for (int i=0;i<3;i++){
            dices[i]=rand() % (6 - 1 + 1) + 1;
        }
        //dices[0]=2;
        //dices[1]=2;
        //dices[2]=5;
        int n;
        n=show();
        system("cls");
        
        if (n==99){
        	road_map();
        	system("cls");
		}
        
        else if (n==88){
        	break;
		}
        
        else if (n<1 || n>50){
            cout <<"�z���i�H��J�W�L�U�`�d�򪺯���"<<'\n';
        }
        else {

            do{
                cout <<"�z�ثe���겣 : "<<money<<"��"<<'\n';
                cout <<"�п�J�z�n�U�`�����B : "<<'\n';
                cin>>bet;
            }
            while (bet>money || bet<=0);
            
            /*for (int i=0;i<3;i++){
                dices_show(dices[i]);
            }*/

            //big_small
            int t=0;
            for (int i=0;i<3;i++){
                t+=dices[i];
            }
            if (dices[0]==dices[1] && dices[1]==dices[2]){
                big_small.push_back('X');
            }
            else if (t>=4 && t<=10){
                big_small.push_back('S');
            }
            else if (t>=11 && t<=17){
                big_small.push_back('B');
            }
            

            //odd_even
            if (dices[0]==dices[1] && dices[1]==dices[2]){
                odd_even.push_back('X');
            }
            else if (t%2==0){
                odd_even.push_back('E');
            }
            else{
                odd_even.push_back('O');
            }

            //sum
            sum.push_back(t);

            //combination
            for (int i=0;i<3;i++){
                combination.push_back(dices[i]);
            }

            cout <<dices[0]<<' '<<dices[1]<<' '<<dices[2]<<'\n';
            if (n<=4){
            	expected-=bet*0.0278;
                int total=0;
                for (int i=0;i<3;i++){
                    total+=dices[i];
                }
                if (n==1){
                    if (total>=11 && total<=17){
                        money+=bet;
                        cout <<"�z���! Ĺ�o"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                    else {
                        money-=bet;
                        cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                }
                else if (n==2){
                    if (total>=4 && total<=10){
                        money+=bet;
                        cout <<"�z���! Ĺ�o"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                    else {
                        money-=bet;
                        cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                }
                else if (n==3){
                    if (total%2!=0){
                        money+=bet;
                        cout <<"�z���! Ĺ�o"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                    else{
                        money-=bet;
                        cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                }
                else if (n==4){
                    if (total%2==0){
                        money+=bet;
                        cout <<"�z���! Ĺ�o"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                    else{
                        money-=bet;
                        cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                }
            }
            else if (n<=10){
            	expected-=0.079*bet;
            	
                int k=n-4;
                int com=0;
                for (int i=0;i<3;i++){
                    if (dices[i]==k){
                        com++;
                    }
                }
                if (com==0){
                    money-=bet;
                    cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                    system("pause");
                }
                else{
                    money+=bet*com;
                    cout <<"�z���! Ĺ�o"<<bet*com<<"��"<<'\n';
                    system("pause");
                }
            }
            else if (n<=25){
            	expected-=0.1667*bet;
                int k1,k2;
                if (n==11)  {
                    k1=1;
                    k2=2;
                }
                else if (n==12){
                    k1=2;
                    k2=4;
                }
                else if (n==13){
                    k1=1;
                    k2=4;
                }
                else if (n==14){
                    k1=2;
                    k2=3;
                }
                else if (n==15){
                    k1=3;
                    k2=4;
                }
                else if (n==16){
                    k1=2;
                    k2=5;
                }
                else if (n==17){
                    k1=3;
                    k2=5;
                }
                else if (n==18){
                    k1=2;
                    k2=6;
                }
                else if (n==19){
                    k1=4;
                    k2=5;
                }
                else if (n==20){
                    k1=3;
                    k2=4;
                }
                else if (n==21){
                    k1=1;
                    k2=5;
                }
                else if (n==22){
                    k1=1;
                    k2=6;
                }
                else if (n==23){
                    k1=4;
                    k2=6;
                }
                else if (n==24){
                    k1=5;
                    k2=6;
                }
                else if (n==25){
                    k1=1;
                    k2=3;
                }

                for (int i=0;i<3;i++){
                    if (dices[i]==k1){
                        k1=0;
                    }
                    if (dices[i]==k2){
                        k2=0;
                    }
                }

                if (k1==k2){
                    money+=bet*5;
                    cout <<"�z���! Ĺ�o"<<bet*5<<"��"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                    system("pause");
                }
            }
            else if (n<=39){
                int total=0;
                for (int i=0;i<3;i++){
                    total+=dices[i];
                }
                if (n<=29){
                	expected-=0.125*bet;
                    if (n-17==total){
                        money+=bet*6;
                        cout <<"�z���! Ĺ�o"<<bet*6<<"��"<<'\n';
                        system("pause");
                    }
                    else{
                        money-=bet;
                        cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                        system("pause");
                    }
                }
                else {
                	if (n==30){
                		expected-=0.1252*bet;
                		if (total==13){
                			money+=bet*8;
                			cout <<"�z���! Ĺ�o"<<bet*8<<"��"<<'\n';
                			system("pause");
						}
						else{
							money-=bet;
							cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
						}
					}
					else if (n==31){
						expected-=0.1252*bet;
						if (total==8){
                            money+=bet*8;
                            cout <<"�z���! Ĺ�o"<<bet*8<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
					}
                    else if (n==32){
                    	expected-=bet*0.0978;
                        if (total==14){
                            money+=bet*12;
                            cout <<"�z���! Ĺ�o"<<bet*12<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==33){
                    	expected-=bet*0.0978;
                        if (total==7){
                            money+=bet*12;
                            cout <<"�z���! Ĺ�o"<<bet*12<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==34){
                        if (total==15){
                        	expected-=0.3055*bet;
                            money+=bet*14;
                            cout <<"�z���! Ĺ�o"<<bet*14<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==35){
                    	expected-=0.3055*bet;
                        if (total==6){
                            money+=bet*14;
                            cout <<"�z���! Ĺ�o"<<bet*14<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==36){
                    	expected-=bet*0.4718;
                        if (total==16){
                            money+=bet*18;
                            cout <<"�z���! Ĺ�o"<<bet*18<<"��"<<'\n';
                            system("pause");
                        }
                        else{
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==37){
                    	expected-=bet*0.4718;
                        if (total==5){
                            money+=bet*18;
                            cout <<"�z���! Ĺ�o"<<bet*18<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==38){
                    	expected-=bet*0.2911;
                        if (total==17){
                            money+=bet*50;
                            cout <<"�z���! Ĺ�o"<<bet*50<<"��"<<'\n';
                            system("pause");
                        }
                        else {
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }

                    else if (n==39){
                    	expected-=bet*0.2911;
                        if (total==4){
                            money+=bet*50;
                            cout <<"�z���! Ĺ�o"<<bet*50<<"��"<<'\n';
                            system("pause");
                        }
                        else{
                            money-=bet;
                            cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                            system("pause");
                        }
                    }
                }

            }

            else if (n<=45){
            	expected-=0.3333*bet;
                int k=n-39;
                bool w=false;
                for (int i=0;i<3;i++){
                    if (dices[i]==k){
                        for (int j=i+1;j<3;j++){
                            if (dices[j]==k){
                                w=true;
                            }
                        }
                    }
                }
                if (w==true){
                    money+=bet*8;
                    cout <<"�z���! Ĺ�o"<<bet*8<<"��"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                    system("pause");
                }
            }

            else if (n<=46){
            	expected-=0.3056*bet;
                if (dices[0]==dices[1] && dices[1]==dices[2]){
                    money+=bet*24;
                    cout <<"�z���! Ĺ�o"<<bet*24<<"��"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                    system("pause");
                }
            }

            else if (n<=52){
            	expected-=0.3009*bet;
                int k=n-44;
                bool w=true;
                for (int i=0;i<3;i++){
                    if (dices[i]!=k){
                        w=false;
                    }
                }
                if (w==true){
                    money+=bet*150;
                    cout <<"�z���! Ĺ�o"<<bet*150<<"��"<<'\n';
                        system("pause");
                }
                else {
                    money-=bet;
                    cout <<"�ܿ��! �z���ѤF �@��"<<bet<<"��"<<'\n';
                    system("pause");
                }
            }
        }
    }
	end(money,expected);


    return 0;
}
