//
//  main.cpp
//  CSL201Ass2
//
//  Created by Robin Malhotra on 24/08/13.
//  Copyright (c) 2013 Robin's code kitchen. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
static std::fstream f1;

struct node
{
    char s[80];
    node *next;
    node *prev;
};

class list
{
    
    node *first,*last;
    
public:
    list()
    {
        first=new node;
        last=new node;
        
        first->next=last;
        last->prev=first;
    }
    
    
    void insertqueue(char s2[])
    {
        node *temp= new node;
        
        strcpy(temp->s , s2);
        
        last->prev->next=temp;
        temp->next=last;
        
    }
    
    
    void display()
    {
        node *temp=new node;
        
        temp=first;
        if (first->next==last)
        {
            std::cout<<"list is empty";
        }
        
        else
        {temp=temp->next;
            while (temp!=last)
            {
                puts(temp->s);
                std::cout<<"     ";
                
                temp=temp->next;
                
            }
        }
    }

};


list l1;
char s[80];



//options
void createandprintlist()//option1
{
    
    
    
    char x[80];
    
    
    while (((s[0])>'9' || (s[0])<'0') && !f1.eof())
    {
        f1.getline(s, 80, ' ');
        l1.insertqueue(x);
        
       
    }
    
    
    l1.display();
    


}




void sortlist()//option2
{
    
}





void nextinsert()//option3
{
    
}





void searchlist()//option4
{
    
}



void deletenext()//option5
{
    
}


void deduplicate()//option6
{
    
}


void mergesortthing()//option7
{
    
}





void credits()//option8
{
    std::cout<<"\nSource code by Robin Malhotra\n"<<"Entry no:2012TT10951";
}

//close options

int main()
{
    
    f1.open("/Users/robinmalhotra2/Desktop/csl201check.txt",std::ios::in|std::ios::out);
    
    f1.getline(s, 80, ' ');
        while (f1.good())
    {

        
        
        
       
        std::cout<<"addasd";
        if ((strlen(s)==1) && (s[0])<'9' && (s[0])>'0')
            
        {
            switch ((s[0]))
            {
                    
                case '1':
                    createandprintlist();
                    
                
                    break;
                    
                case '2':
                    sortlist();
                    break;
                    
                case '3':
                    nextinsert();
                    break;
                    
                case '4':
                    searchlist();
                    break;
                    
                case '5':
                    deletenext();
                    break;
                    
                case '6':
                    deduplicate();
                    break;
                    
                case '7':
                    mergesortthing();
                    break;
                    
                case '8':
                    credits();
                    break;
                    
                    
                    
                default:
                    break;
            }
        }
        
        
    }
    f1.close();
    
    
    
}

