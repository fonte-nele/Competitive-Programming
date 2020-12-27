var input = require("fs").readFileSync("./dev/stdin/entrada.txt", "utf8");
var lines = input.split("\n");

const num = parseInt(lines.shift());
const sum = 0;

console.log(lines);
console.log(num);
for (let i = 0; i < num; i++) {
  const valor = parseInt(lines.values(i));
  console.log(valor);
}
