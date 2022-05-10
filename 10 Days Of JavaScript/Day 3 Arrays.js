/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    let max = -Infinity, result = -Infinity;
    for (const value of nums) {
        const nr = Number(value)
        if (nr > max) {
            [result, max] = [max, nr]
        } 
        else if (nr < max && nr > result) {
            result = nr;
        }
    }

  return result;
}