class RBNode:
    def __init__(self,val):

        self.red=False 
        self.parent=None
        self.val=val 
        self.left=None 
        self.right=None 

class RBTree:
    def __init__(self):
        self.nil=RBNode(0)
        self.nil.red=False 
        self.nil.left=None
        self.nil.right=None
        self.root=self.nil 

def insert(self,val):
    new_node=RBNode(val)
    new_node.parent=None
    new_node.left=self.nil
    new_node.right=self.nil
    new_node.red=True

    parent=None 

    current=self.root 

    




