  vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        // Vector to store union elements
        vector<int> Union;

        // Initialize two pointers for both arrays
        int i = 0, j = 0;

        // Loop until either pointer reaches the end
        while (i < n && j < m) {
            // If current element in arr1 is smaller
            if (arr1[i] < arr2[j]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++;  // Move pointer in arr1
            }
            // If current element in arr2 is smaller
            else if (arr2[j] < arr1[i]) {
                // Add element if union empty or different from last added
                if (Union.empty() || Union.back() != arr2[j])
                    Union.push_back(arr2[j]);
                j++;  // Move pointer in arr2
            }
            else {
                // Elements are equal, add once if not duplicate
                if (Union.empty() || Union.back() != arr1[i])
                    Union.push_back(arr1[i]);
                i++; j++;  // Move both pointers
            }
        }

        // Append remaining elements from arr1
        while (i < n) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

        // Append remaining elements from arr2
        while (j < m) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

        // Return the final union vector
        return Union;
    }