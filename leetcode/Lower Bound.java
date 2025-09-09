import java.util.Arrays;

class Main {
    public int bs(int[] arr, int target) {
        Arrays.sort(arr);
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < target) {
                start = mid + 1;
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else {
                return mid;
            }
        }
        return start;
    }

    public static void main(String[] args) {
        Main sol = new Main();
        int[] arr = { 1, 2, 5, 5, 8, 9, 10 };
        int target = 99;

        int result = sol.bs(arr, target);
        if (result < arr.length) {
            System.out.println("Lower bound of " + target + " is: " + arr[result] + " and position is " + result);
        } else {
            System.out.println("No element greater than or equal to " + target + " exists." + result);
        }
    }
}