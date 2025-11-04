import java.util.ArrayList;
import java.util.List;

public class Permutations {
    
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> resultList = new ArrayList<>();
        backtrack(resultList, new ArrayList<>(), nums);
        return resultList;
    }
    
    private void backtrack(List<List<Integer>> resultList, 
                          ArrayList<Integer> tempList, 
                          int[] nums) {
        // If we match the length, it is a permutation

        if (tempList.size() == nums.length) {
            resultList.add(new ArrayList<>(tempList));
            return;
        }
        
        for (int number : nums) {
            // Skip if we get same element
            if (tempList.contains(number))
                continue;
            
            // Add the new element
            tempList.add(number);
            
            // Go back to try other element
            backtrack(resultList, tempList, nums);
            
            // Remove the element
            tempList.remove(tempList.size() - 1);
        }
    }
    
    // Main method para probar
    public static void main(String[] args) {
        Permutations solution = new Permutations();
        
        // Array de prueba [1, 2, 3]
        int[] nums = {1, 2, 3};
        
        List<List<Integer>> result = solution.permute(nums);
        
        // Imprimir resultados
        System.out.println("Permutaciones de [1, 2, 3]:");
        System.out.println("Total de permutaciones: " + result.size());
        System.out.println();
        
        for (int i = 0; i < result.size(); i++) {
            System.out.println((i + 1) + ". " + result.get(i));
        }
    }
}
