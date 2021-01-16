int countNodesinLoop(struct Node *head)
{
     map <Node *,int> mp;
     Node * it=head;
     while(it!=NULL&&!mp[it]) mp[it]=1,it=it->next;
     if(it==NULL) return 0;
     int l=1; Node * strt=it; it=it->next;
     while(it!=strt) l++,it=it->next;
     return l;
}
