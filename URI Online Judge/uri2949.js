var input = require("fs").readFileSync("./dev/stdin/entrada.txt", "utf8");
var lines = input.split("\n");

const num = parseInt(lines.shift());

console.log(num);
