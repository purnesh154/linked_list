#include<iostream>
#include"list.h"
using namespace std;
//linkedlist
int main(){
    Node list;
    int ch=-1;
    do{
        cout<<"1.Display the List"<<endl;
        cout<<"2.Insert the element in List"<<endl;
        cout<<"3.Delete the element from List"<<endl;
        cout<<"4.Search the element in the List"<<endl;
        cout<<"5.Reverse the List"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
        if(ch==1)
            list.display();
        else if(ch==2){
            int no, c=-1;
            do{
                cout<<"1.Insert the element at Head"<<endl;
                cout<<"2.Insert the element at Tail"<<endl;
                cout<<"3.Insert the element at any Position"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"\nEnter Your Choice: ";
                cin>>c;
                if(c==1){
                    int m;
                    cout<<"Enter Numbers you want to add: ";
                    cin>>m;
                    for(int i=0;i<m;i++){
                        cout<<"Enter Number: ";
                        cin>>no;
                        list.insertathead(no);
                    }
                }
                else if(c==2){
                    int m;
                    cout<<"Enter Numbers you want to add: ";
                    cin>>m;
                    for(int i=0;i<m;i++){
                        cout<<"Enter Number: ";
                        cin>>no;
                        list.insertattail(no);
                    }
                }
                else if(c==3){
                    int pos;
                    cout<<"Enter Number: ";
                    cin>>no;
                    cout<<"Enter Position: ";
                    cin>>pos;
                    list.insertatanypos(pos,no);
                }
                else if(c==4)
                    cout<<"Return..."<<endl;
            }while(c<4);
        }
        else if(ch==3){
            int no, c=-1;
            do{
                cout<<"1.Delete Head"<<endl;
                cout<<"2.Delete any Node"<<endl;
                cout<<"3.Delete Node at any Position"<<endl;
                cout<<"4.Exit"<<endl;
                cout<<"\nEnter Your Choice: ";
                cin>>c;
                if(c==1){
                    list.deletehead();
                }
                else if(c==2){
                    cout<<"Enter Number: ";
                    cin>>no;
                    list.deletenode(no);
                }
                else if(c==3){
                    int pos;
                    cout<<"Enter Position: ";
                    cin>>pos;
                    list.deletenodeatanypos(pos);
                }
                else if(c==4)
                    cout<<"Return..."<<endl;
            }while(c<4);
        }
        else if(ch==4){
            int no;
            cout<<"Enter the Number you to Search: ";
            cin>>no;
            list.search(no);
        }
        else if(ch==5){
            list.reverse();
        }
        else if(ch==6){
            cout<<"Thanks.."<<endl;
        }
        }while(ch<6);
}