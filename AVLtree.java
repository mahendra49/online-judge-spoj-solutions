import java.util.*;
class Node{
	int key,height;
	Node left,right;
	Node(int d){
		key=d;
		height=1;
	}
}
class AVLtree{
	Node root;
	//compute height here
	int height(Node N) {
        if (N == null)
            return 0;
 
        return N.height;
    }
	//rotate right
	int max(int a, int b) {
        return (a > b) ? a : b;
    }
    void preOrder(Node node) {
        if (node != null) {
            System.out.print(node.key + " ");
            preOrder(node.left);
            preOrder(node.right);
        }
    }
	Node rightRotate(Node y){
		//save references before rotating
		Node x=y.left;
		Node tree2=x.right;
		//done saving
		//Now we can rotate happily
		x.right=y; //This is preety simple
		y.left=tree2;
		//update heights
		y.height=max(height(y.left),height(y.right))+1;
		x.height=max(height(x.left),height(x.right))+1;
		//all done now new root is x;
		//keep is mind everything else is recursion
		return x;
	}
	//rotate left
	Node leftRotate(Node x){
		Node y=x.right;
		Node tree2=y.left;
		//done saving
		//now rotate
		y.left=x;
		x.right=tree2;
		//done rotating
		x.height=1+max(height(x.left),height(x.right));
		y.height=1+max(height(y.left),height(y.right));		
		return y;
	}
	int findBalance(Node N){
		if(N==null)
			return 0;
		return height(N.left)-height(N.right);
	}
	Node insert(Node node,int key){
		if(node == null)
			return(new Node(key));
		//if key is less than current node
		if(key < node.key)
			node.left=insert(node.left,key);
		//if key is geater than current node
		else if(key > node.key)
			node.right=insert(node.right,key);
		//else same key is already present ,so no need to insert again
		else 
			return node ;
		
		//inserted successively now update height and check for balance
		node.height = 1 + max(height(node.left),height(node.right));
		
		//height is updated now get the balance factor
		int balance=findBalance(node);
		//rotations here..put on paper for pure understanding
		if(balance > 1 && key < node.left.key)
			return rightRotate(node);
		if(balance < -1 && key > node.right.key)
			return leftRotate(node);
		if(balance > 1 && key >node.left.key){
			node.left=leftRotate(node.left);
			return rightRotate(node);
		}
		if(balance < -1 && key < node.right.key){
			node.right=rightRotate(node.right);
			return leftRotate(node);
		}
		//else simply return 
		return node;
	}
	public static void main(String args[]){
		AVLtree tree= new AVLtree();
		System.out.print("lets see if this works :");
		Scanner s=new Scanner(System.in);
		while(true){
			System.out.println("1-insert/n 2-preorder");
			int qq=s.nextInt();
			if(qq==1){
				int val;
				System.out.print("enter value to add to tree :");
				val=s.nextInt();
				tree.root=tree.insert(tree.root,val);
			}	
			else if(qq==2){
				tree.preOrder(tree.root);
			}
			else
				//break for any wrong value...just being lazy here :P
				break;
		}
		tree.preOrder(tree.root);
	}
}
