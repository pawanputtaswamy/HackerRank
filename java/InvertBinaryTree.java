package Yelp;

public class InvertBinaryTree {

	static Node root=null;
	static class Node{
		Node left,right;
		int key;
		Node(int key){
			this.key=key;
			left=right=null;
		}
		
	}
	
	static void printTree(){
		Node rootref=root;
		if(root==null)
			return ;
		if(root.left==null)
		{
			System.out.println(root.key);
			return ;
		}
		while(rootref!=null){
			System.out.print(root.key+" ");
			if(root.left!=null)
				System.out.print(root.left.key+" ");
			if(root.right!=null)
				System.out.print(root.right.key+" ");
			if(rootref.left!=null && rootref.left.left!=null){
				rootref=rootref.left.left;}
			else 
			{
				
				break;}
		}
		
	}
	
	static void inorderPrint(Node rootref){
		if(rootref==null)
			return;
		inorderPrint(rootref.left);
		System.out.print(rootref.key+"  ");
		inorderPrint(rootref.right);
	}
	
	static Node invert(Node root){
		Node rootref=root;
		if(rootref==null)
			return null;
		Node temp=rootref.left;
		rootref.left=rootref.right;
		rootref.right=temp;
		invert(rootref.left);
		invert(rootref.right);
		return rootref;
	}
	public static void main(String[] args) {
		
		InvertBinaryTree Tree=new InvertBinaryTree();
		Tree.root=new Node(4);
		Tree.root.left=new Node(2);
		Tree.root.right=new Node(7);
		Tree.root.left.left=new Node(1);
		Tree.root.left.right=new Node(3);
		Tree.root.right.left=new Node(6);
		Tree.root.right.right=new Node(9);
		//Tree.printTree();
		Tree.inorderPrint(root);
		root=Tree.invert(root);
		System.out.println("\n");
		Tree.inorderPrint(root);
	}

}
