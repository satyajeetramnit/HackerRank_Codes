/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    let v=['a','e','i','o','u'];
    // let v_array = [];
    let c = "";

    for(let idx = 0; idx<s.length; idx++) {
        if (v.indexOf(s[idx]) !== -1) {
            console.log(s[idx]);
        } else {
            c += s[idx] + '\n';
        }
    }
    console.log(c);
}