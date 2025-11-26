class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        for (int number : nums)
        {
            sum += number;
        }

        int n = nums.size();
        int correct_sum = n * (n + 1) / 2; // cantidad de pares * lo que suma cada par
        return correct_sum - sum;
    }
    // por que la suma de 0 a n es n*(n+1)/2?
    // porque hay n+1 numeros incluyendo al cero, pero en mi array solo me dan n numeros
    // asi que cuando tengo los numeros completos, uno de ellos es 0,
    // si lo quito, solo tengo n numeros, puedo quitar el 0 porque no afecta a la suma
    // asi que ahora calculo la suma de 1 a n, que es cantidad de numeros/2 para tener los pares que se forma
    // por (n+1) que es la suma de cada par
};