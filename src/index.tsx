const CppLibrary = require('./NativeCppLibrary').default;

export function multiply(a: number, b: number): number {
  return CppLibrary.multiply(a, b);
}
