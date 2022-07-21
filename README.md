# Numba vs C++ vs Rust
A simple problem to compare execution speeds between Python w/ Numba, C++ w/ optimization, and Rust using its package manager 'cargo' via 'cargo run --release' command <br><br>
<ul>
  <li><h3>Text Editor: VsCode</h3></li>
  <li><h3>Size of list/vector: 20000</h3></li>
</ul>
<p>
  <h3>Test Benchmarks on ten attempts on each languages:</h3>
  <ul>
  <li><strong>[Python w/ Numba]:</strong> (in seconds)</li>
  <ul>
    <li>Array List: [0.         0.73074698 0.61600018 0.59993911 0.60388827 0.61557937
 0.61330199 0.60252285 0.6009593  0.61777449 0.65595341]</li>
    <li><strong>Average: </strong>0.5687878131866455 seconds</li>
    <li>Fastest speed recorded: ~ 0.6 seconds</li>
  </ul>
  <hr>
  <li><strong>[C++ w/ optimization]:</strong> (in seconds)</li>
  <ul>
    <li>Compiler: g++ version 11.1</li>
    <li>Compilation command: g++-11 -Ofast -std=c++2a findMax.cpp</li>
    <li>0.062500, 0.046875, 0.046875, 0.046875, 0.046875, 0.046875, 0.031250, 0.046875, 0.062500, 0.046875</li>
    <li><strong>Average: </strong>0.0484375 seconds ~ 48.4375 milliseconds</li>
    <li>Fastest speed recorded: ~ 31.25 milliseconds</li>
  </ul>
  <hr>
  <li><strong>[Rust]:</strong> (in microseconds)</li>
  <ul>
    <li>Compilation command: cargo run --release
    <li>269, 522.7, 651.4, 322, 428.3, 385.3, 412.9, 751, 622, 664.6</li>
    <li><strong>Average: </strong>502.92 microseconds</li>
    <li>Fastest speed recorded: ~ 228 microseconds</li>
  </ul>
  </ul>
</p>
