#include<bits/stdc++.h>
using namespace std;
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
 
// Converts key current character into index
// use only 'a' through 'z' and lower case
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
// trie node
struct TrieNode
{
    struct TrieNode *children[26]; ///array
 
    // isWordEnd is true if the node represents
    // end of a word
    bool isWordEnd;
};
 
// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode = new TrieNode;
    pNode->isWordEnd = false;
 
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;
 
    return pNode;
}
 
// If not present, inserts key into trie.  If the
// key is prefix of trie node, just marks leaf node
void insert(struct TrieNode *root,  const string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int level = 0; level < key.length(); level++)
    {
        int index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
         pCrawl = pCrawl-> next;  //ll

    }
 
    // mark last node as leaf
    pCrawl->isWordEnd = true;
}
 
// Returns true if key presents in trie, else false
bool search(struct TrieNode *root, const string key)
{
    int length = key.length();
    struct TrieNode *pCrawl = root;
    for (int level = 0; level < length; level++)
    {
        int index = CHAR_TO_INDEX(key[level]);
 
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    return (pCrawl != NULL && pCrawl->isWordEnd);
}


NULL = 0  false


if(NULL){

} 



// Returns 0 if current node has a child
// If all children are NULL, return 1.
bool isLastNode(struct TrieNode* root)
{
    for (int i = 0; i < 26 i++){

        if (root->children[i]!=NULL){
            return false;
        }    
    }        
    return true;
}


"shubhs"

helping

// Recursive function to print auto-suggestions for given
// node.
void suggestionsRec(struct TrieNode* root, string currPrefix)    //(hel)    help, helps,helping
{
    // found a string in Trie with the given prefix
    if (root->isWordEnd)
    {
        cout << currPrefix;
        cout << endl;
    }
 
    // All children struct node pointers are NULL
    if (isLastNode(root)){
        return;
    }
 
    for (int i = 0; i < 26; i++)
    {
        if (root->children[i])
        {
            // append current character to currPrefix string
            currPrefix.push_back(97 + i);
 
            // recur over the rest
            suggestionsRec(root->children[i], currPrefix);      
            // remove last character
            currPrefix.pop_back();      
        }
    }

   
}
 
// print suggestions for given query prefix.
int printAutoSuggestions(TrieNode* root, const string query)
{
    struct TrieNode* pCrawl = root;
 
    // Check if prefix is present and find the
    // the node (of last level) with last character
    // of given string.
    int level;
    int n = query.length();
    for (level = 0; level < n; level++)
    {
        int index = CHAR_TO_INDEX(query[level]);
 
        // no string in the Trie has this prefix
        if (!pCrawl->children[index])
            return 0;
 
        pCrawl = pCrawl->children[index];
    }
 
    // If prefix is present as a word.
    bool isWord = (pCrawl->isWordEnd == true);  //true
 
    // If prefix is last node of tree (has no
    // children)
    bool isLast = isLastNode(pCrawl);     //true
 
    // If prefix is present as a word, but
    // there is no subtree below the last
    // matching node.
    if (isWord && isLast)        true AND true   ->   true     ||
    {
        cout << query << endl;
        return -1;
    }
 
    // If there are are nodes below last
    // matching character.
    if (!isLast)
    {
        string prefix = query;
        suggestionsRec(pCrawl, prefix);
        return 1;
    }
}
 
// Driver Code
int main()
{
    struct TrieNode* root = getNode();
    insert(root, "hello");
    insert(root, "dog");
    insert(root, "hell");
    insert(root, "cat");
    insert(root, "a");
    insert(root, "hel");
    insert(root, "help");
    insert(root, "helps");
    insert(root, "helping");
    int comp = printAutoSuggestions(root, "hel");
 
    if (comp == -1)
        cout << "No other strings found with this prefix\n";
 
    else if (comp == 0)
        cout << "No string found with this prefix\n";

    return 0;
}






// a = 2
// b = 3


// int olda = a 
// a = b
// b = olda


// a = b
// b = a



a= 3
b= 2



int* p =&a


*p //3
p 

 //address of 3




int arr[10] = {1,2,3,4,5,6}
arrays are datastructure
arr[0]
arr[4]


struct custom{
    int arr[100];
    int data;
}

tree  

Search Auto complete

TRIE - custom datastructure


a-z ->26

sukh
sukhpreet
sukhkarman
aman
amrit
simran

| a | b |c  | d   |e  |  |  |  |    | |  |  | s *|    | |  |  |  |    | |  |  |  | z   |
                                              |
                                              |
   | a | b |c  | d   |e  |  |  | i* |    | |  |  | s |    | |  |  |  |    | | u *|  |  | z   |                                                 
                                                                            |
      | a | b |c  | d   |e  |  |  |  |   k* | |  |  | s |    | |  |  |  |    | | u |  |  | z   |                                                                           
                                         |
   | a | b |c  | d   |e  |  | h* |  |    | |  |  | s |    | |  |  |  |    | | u *|  |  | z   |  ) lastnum =true

                                            
amr


s

sukh
sukhpreet
sukhkarman


int arr[10]={1 ,2 ,4 ,5 ,6 ,7 ,8 }

int* arr[10]

*p =&a

{,,,,,,,,}
*





AND    &&
OR     ||
NOT     !



!TRUE = false


true || false   => true
false|| false   => false



















||
|sr5  |
|sr4 |
|sr3  |
|sr2  |
|sr1  |




array[]  = [1,2,3,4,5,6,7]


array[3] = 4   time complexity - O(1)



calculate sum of elements in an array

int sum = 0;
for( int i=0;i<array.length;i++){

    sum = sum + array[i];

}
return sum

o(n)




calculate sum of first n natural numbers;


int sum = 0;

for( int i=0;i<n;i++){
  for(int j=0;j<m;j++)
    sum = sum + i;

}
return sum
time complexity o(N*N)
space comlexity o(1)


1+2+3+4+5 = 15
(5*6)/2

sum = (n*(n+1))/2;

time complexity O(1);


binary search




array[]  = [1,2,3,4,5,6,7]
search 5

[2,4,6,8,9,10,56,300]
l         mid         r

search 10



for(int i=0;i<arr.length;i++){

    if(arr[i]==10){
        return i;
    }

}
O(N)
binary search  (array should be sorted)

O(log(n))

O(1)
time complexity
space complexity



map

["key","value"]
1 -> 2
 
a -> 97
b -> 98




given an array

[1,1,1,2,2,3,4,4]

int temp = arr[0];
int count=1;
int minCount = Integer.MAX_VALUE;
for(int i=1;i<arr.length;i++){

    if(arr[i]==temp){
        count++;
    }else{
        temp = arr[i];
        if(minCount> count){
            minCount= count;
        } 
        count= 1;
    }

}

return minCount;





arr[]={1,2,3,4,5,6,7,8}
3 - 10
o(N)


LINKEDLIST

[] -> [] -> [] -> []


BINARY TREES

   []

[]    []



Class -real world example , Objects ,  Inheretence , polymorphism




            (Shapes)
            no of edges

        triangle   polygon
            
scalene  eq  iso      rectangle    square
