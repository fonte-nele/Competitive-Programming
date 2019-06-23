/*input
2
3
5 2 7
9
8 3 10 14 6 4 13 7 1
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

struct node {
   int data;   
   struct node *leftChild;
   struct node *rightChild;
};

struct node *root = NULL;

void insert(int data) 
{
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

    // Se arvore estiver vazia, criar novo no
    if(root == NULL) 
    {
        root = tempNode;
    } 
    else 
    {
        current = root;
        parent  = NULL;
        while(1) 
        {                
            parent = current;

            if(data < parent->data)  // Ir para o lado esquerdo da arvore
            {
                current = current->leftChild;                
            
                if(current == NULL) // Inserir no lado esquerdo
                {
                    parent->leftChild = tempNode;
                    return;
                }
            }
            else // Ir para o lado direito da arvore 
            {
                current = current->rightChild;
                
                if(current == NULL) // Inserir no lado direito
                {
                    parent->rightChild = tempNode;
                   return;
                }
            }
        }            
    }
}
  
void pre_order_traversal(struct node* root) 
{
    if(root != NULL) 
    {
        cout << " " << root->data;
        pre_order_traversal(root->leftChild);
        pre_order_traversal(root->rightChild);
    }
}

void inorder_traversal(struct node* root) 
{
    if(root != NULL) 
    {
        inorder_traversal(root->leftChild);
        cout << " " << root->data;          
        inorder_traversal(root->rightChild);
    }
}

void post_order_traversal(struct node* root) 
{
    if(root != NULL) 
    {
        post_order_traversal(root->leftChild);
        post_order_traversal(root->rightChild);
        cout << " " << root->data;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant, cont = 1, n, elem;
    
    cin >> quant;
    while(quant--) 
    {
        cin >> n;
        root = NULL;
        f(0, n)
        {
            cin >> elem;
            insert(elem);
        }

        cout << "Case " << cont << ":" << endl;
        cout << "Pre.:";
        pre_order_traversal(root);
        cout << endl;
        cout << "In..:";
        inorder_traversal(root);
        cout << endl;
        cout << "Post:";
        post_order_traversal(root);
        cout << endl << endl;
        cont++;
    }
    return 0;
}