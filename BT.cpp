BTnode*root=new BTnode(val);
queue<BTnode*>q;
while(!q.empty())
{ BTnode*f=q.front();
  q.pop();
cout<<"Enter left chilf of "<<f->val<<" node"<<endl;
int lc;
cin>>lc;
if(lc!=-1)
{ BTnode*leftC=new BTnode(lc);
f->left=leftC;
q.push(leftC);
}
cout<<"Enter right child of"<<f->val<<" node"<<endl;
int rc;
cin>>rc;
if(rc!=-1)
{
BTnode*rightC=new BTnode(rc);
f->right=rightC;
q.push(rightC);
}
}
return root;
}
void print(BTnode*root){
if(root==NULL){
return;
}
cout<<root->val<<": ";
if(root->left){
cout<<root->left->val<<" ";
}
if(root->right){
cout<<root->right->val<<" ";
}
cout<<endl;
print(root->left);
print(root->right);
return ;
}
BTnode* del(BTnode*root,int target){
if(root == NULL)return root;
if(root->left){
root->val = root->left->val;
root->left = del(root->left,root->left->val);
}else if(root->right){
root->val=root->right->val;
root->right=del(root->right,root->right->val);
}else{
return NULL;
}
  return root;
}
root->left=del(root->left,target);
root->roght=del(root->right,target);
return root;
}
int main(){
  BTnode*root=make_bt_level_wise();
print(root);
  BTnode*root=del(root,5);
return 0;
}
