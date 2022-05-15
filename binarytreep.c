void display_preorder(node * binary_tree)
{
if (binary_tree) {
printf("%d\n",binary_tree->data);
display_preorder(binary_tree->left);
display_preorder(binary_tree->right);
}
}
void display_inorder(node * binary_tree)
{
if (binary_tree) {
display_inorder(binary_tree->left);
printf("%d\n",binary_tree->data);
display_inorder(binary_tree->right);
}
}
void display_postorder(node * binary_tree)
{
if (binary_tree) {
display_postorder(binary_tree->left);
display_postorder(binary_tree->right);
printf("%d\n",binary_tree->data);
}
}