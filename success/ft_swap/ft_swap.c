void ft_swap(int *a, int *b)
{
    if (a != b) // Check if the pointers are not pointing to the same memory location
    {
        int temp = *a;  // Store the value pointed to by 'a' in a temporary variable
        *a = *b;        // Copy the value pointed to by 'b' into the location pointed to by 'a'
        *b = temp;      // Copy the stored value from the temporary variable into the location pointed to by 'b'
    }
}
