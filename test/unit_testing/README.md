# Reflaxe/C++ Tests

This is where the tests happen!

## Contents
| Folder  | Description |
| ------------- | ------------- |
| `src/`  | Where the Haxe source code for executing the tests are.  |
| `tests/`  | Contains all the tests; each directory is a test.  |
| `fast_test/`  | Contains a program for running all the tests simultaneously.  |

&nbsp;

## How to Run All Tests

Run the `Test.hxml` in the base of this repository. This will use pure Haxe.

```hxml
haxe Test.hxml
```

To run the tests at super-speed, use the `fast_test/` script.
```
cd fast_test
cargo run --release
```

&nbsp;

## How to Add Test

- Create a new folder in `tests/` with your desired name.
- Place as many `.hx` files in this folder as desired.
- Create as many `.hxml` files are desired, they will be called in alphabetical order. If only one `.hxml` file is desired, please call it `Test.hxml` for consistency.
- Place the intended C++ output in `intended/`. The generated C++ output will be placed in `out/`. After every `.hxml` file in the directory is executed, the content of these folders are compared. If they do not match, the test will fail.

&nbsp;

## Arguments

The following options can be appended to the compile command.

```
# for example
haxe Test.hxml always-compile test=RestArgs
```

### help

Lists all the available arguments.

### test=`TestName`

Makes it so only this test is ran. This option can be added multiple times to perform multiple tests.

### nocompile

The C++ compiling/run tests do not occur.

### always-compile

The C++ compiling/run tests will occur no matter what, even if the initial output comparison tests fail.

### show-all-output

The output of the C++ compilation and executable is always shown, even if it ran successfuly.

### update-intended

The C++ output is generated in the `intended` folder.

### no-details

The list of C++ output lines that do not match the tests are ommitted from the output.

### dev-mode

Enables `always-compile`, `show-all-output`, and `no-details`.

### print-command

Prints the Haxe commands instead of running them.
