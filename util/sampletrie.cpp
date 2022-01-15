#include<bits/stdc++.h>
using namespace std;

#define CHAR_TO_INDEX(c) ((int)c - (int)'a')



struct TrieNode{

  struct TrieNode *children[26]; ///0 - 25 
  bool isEndWord; 
}

struct TrieNode* getNode(){


        struct TrieNode *pNode = new TrieNode;

        pNode->isEndWord = false;  
            
        for(int i=0;i<26;i++){ 

            pNode->children[i]= NULL;

        }
        return pNode;

}

"shubh"
level 0-4

[s,h,u,b,h]

key[0] = "s"


if(!NULL)

if(==)


if(pCrawl->children[index] == NULL)

if(!pCrawl->children[index]) 


void insert(struct TrieNode* root,  string key){

    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++) ///shubh
    {
        int index = (int)key[i] - (int)'a';    //18 ascii

        if (pCrawl->children[index] == NULL){              //pcrawl->children[18]
            pCrawl->children[index] = getNode();
        }   
 
        pCrawl = pCrawl->children[index];
    }
 
    // mark last node as leaf
    pCrawl->isWordEnd = true;

}


int main(){

    struct TrieNode* root = getNode(); 

    insert(root,"shubh");
    insert(root,"sukh");
    insert(root,"sukriti")


    return 0;
}
/*


 root   |a | | | | | | | |z |       
            





*/