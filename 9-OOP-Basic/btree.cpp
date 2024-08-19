// FULL BTREE CLASS DECLARATION, W/ HELPER FUNCTIONS
class Btree {
public:
     Btree() {root = NULL; }
     void insert(string s) 
         {root = insert_at_sub(s, root);}
     void print() {print_sub(root);}
private:
     Bnode* root;
     Bnode* insert_at_sub(string s, Bnode* p);
     void   print_sub(Bnode* p);
};
Bnode* Btree::insert_at_sub(string s, Bnode* p) {
    if (!p) {
        return new Bnode(s);
    } else if (s < p->val) {
        p->pLeft = insert_at_sub(s, p->pLeft);
    } else if (s > p->val) {
        p->pRight = insert_at_sub(s, p->pRight);
    }
    return p;
}

void Btree::print_sub(Bnode* p) {
    if (p) {
        print_sub(p->pLeft);
        cout << p->val << endl;
        print_sub(p->pRight);
    }
}

