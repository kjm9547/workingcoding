// A와 B의 최대공약수 GCD(A,B)를 알아내는 유클리드 호제법은 다음과 같습니다:
// A=0이면 GCD(0,B)=B이므로 GCD(A,B)=B이고 멈춥니다.
// B=0이면 GCD(A,0)=A이므로 GCD(A,B)=A이고 멈춥니다.
// A를 A = B⋅Q + R의 형식으로 씁니다
// GCD(A,B) = GCD(B,R)이므로 유클리드 호제법을 이용하여 GCD(B,R)을 찾습니다.
//  a와 b의 최소공배수는 a와 b의 곱을 a와 b의 최대공약수를 나눈 것과 같다
let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split(" ");

function gcd(a, b) {
  if (b == 0) {
    // console.log(a % b, b);
    return a;
  } else {
    return gcd(b, a % b);
  }
}

const a = Number(input[0]);
const b = Number(input[1]);


console.log((a * b) / gcd(a, b));
