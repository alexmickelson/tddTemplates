public class node {

    public node(){

    }

    node head;
    node nextnode = null;
    int data = 0;
    node prevNode = null;

    public int getData(){
        return data;
    }

    public void setData(int userinput) {
        data = userinput;
    }


    // this adds a new node onto the end of the linked list.
    public void append(node incomingNode) {
        if(nextnode == null){
            nextnode = incomingNode;
        }
        else{
            nextnode.append(incomingNode);
        }
    }


    //This returns the length of the linked list.
    public int length() {
        int len = 0;
        if(nextnode == null){
           return 1;
        }
        else{
            return 1+ nextnode.length();
        }
    }

    public boolean changeData(int index, int incomVal) {
        int posChange;
        if(index == 0){
            data = incomVal;
            return true;
        }
        else if(nextnode == null){
            return false;
        }
        else{
            index--;
            nextnode.changeData(index, incomVal);
            return true;
        }
    }

    public int getData(int index) {
        if(index == 0){
            return data;
        }
        else{
            index--;
           return nextnode.getData(index);
        }

    }

    public void addNewNode(int index, int dataAdded) {
        if(index == 1){
           node inserted = new node();
           inserted.setData(dataAdded);
           inserted.nextnode = nextnode;
           nextnode = inserted;
        }
        else{
            index--;
            nextnode.addNewNode(index, dataAdded);
        }
    }
}
