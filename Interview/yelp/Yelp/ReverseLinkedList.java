package Yelp;

public class ReverseLinkedList {

	static Node head=null;
	static class Node{
		Node next;
		int data;
		Node(int data)
		{
			this.data=data;
			next=null;
		}
	}

	static void printList(){
		Node cur=head;
		while(cur!=null){
			System.out.print(cur.data+" ");
			cur=cur.next;
		}
		System.out.println();
		
	}
	
	static Node reverse(Node headref){
		Node cur=head,next=null,prev=null;
		if(head==null || head.next==null)
			return head;
		while(cur!=null){
			next=cur.next;
			cur.next=prev;
			prev=cur;
			cur=next;
			
		}
		headref=prev;
		return headref;
		
	}
	public static void main(String[] args) {
		ReverseLinkedList list=new ReverseLinkedList();
		list.head=new Node(10);
		list.head.next=new Node(20);
		list.head.next.next=new Node(30);
		printList();
		head=reverse(head);
		printList();

	}

}
