// Engineering the list to get reversed
//but this time by recursion!!
void revListUsinRec(node* ptr){

	// trversing to the last node
	// and returning
	if(ptr->next == NULL){
		head = ptr;
		return;
	}
	revListUsinRec(ptr->next);

	//code to be executed after the last recursive call returns

	// the topmost layer initally in the stack at this time is
	//the node just before the last node.
	// we store the link feild of this node in temp
	//node *temp = ptr->next;
	// and link that temp to the initial node under
	// operation!! ye!!	
	//temp->next = ptr;
	//but what when its the firstnode?
	// so we set the ptr node under operation to point to null
	//and later modify its link to the prev node(node just before ptr).
	node* temp = ptr->next;
	temp->next = ptr;
	ptr->next = NULL;//******* Got the logic?
}
