// Everything before main is not required when submitting, only required for local computer testing
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readline() {
    return inputString[currentLine++];
}

function main() {
    var t = parseInt(readline())
    for (var i = 0; i < t; i++){
        var n = parseInt(readline())
        var s = readline()
        console.log(s[n - 1]) // Replace with print() when submitting and remove main function
    }
}
