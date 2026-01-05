class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int x) {
        this.val = x;
        this.left = null;
        this.right = null;
    }
}

 class BinaryTreeTraversal {

    static void inOrderTraversal(TreeNode root) {
        if (root == null) {
            return;
        }

        inOrderTraversal(root.left);
        System.out.print(root.val + " ");
        inOrderTraversal(root.right);
    }

    public static void main(String[] args) {
        // Crear árpublicbol
        TreeNode root = new TreeNode(2);
        root.left = new TreeNode(8);
        root.right = new TreeNode(4);
        root.left.left = new TreeNode(3);
        root.left.right = new TreeNode(7);
        root.right.right = new TreeNode(1);
        root.right.right.left = new TreeNode(6);

        // Ejecutar
        System.out.print("In-Order: ");
        inOrderTraversal(root);
        System.out.println();
    }
}
