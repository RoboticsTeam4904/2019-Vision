#[doc(hidden)] #[macro_export]
macro_rules! if_rust_version_impl {
    (>= 1.0 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.1 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.2 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.3 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.4 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.5 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.6 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.7 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.8 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.9 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.10 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.11 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.12 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.13 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.14 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.15 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.16 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.17 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.18 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.19 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.20 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.21 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.22 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.23 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.24 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.25 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.26 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.27 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.28 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.29 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.30 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.31 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.32 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.33 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.34 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.35 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.36 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.37 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.38 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= 1.39 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (>= $n:tt { $($if_:tt)* } { $($else_:tt)* } ) => { $($else_)* };
    (== 1.39 { $($if_:tt)* } { $($else_:tt)* }) => { $($if_)* };
    (== nightly { $($if_:tt)* } { $($else_:tt)* }) => { $($else_)* };
    (== $n:tt { $($if_:tt)* } { $($else_:tt)* }) => { $($else_)* };
    (> 1.39 { $($if_:tt)* } { $($else_:tt)* }) => { $($else_)* };
    (> $n:tt { $($if_:tt)* } { $($else_:tt)* }) => { $crate::if_rust_version_impl!{>= $n {$($if_)*} {$($else_)*} } };
    (!= $n:tt { $($if_:tt)* } { $($else_:tt)* }) => { $crate::if_rust_version_impl!{== $n {$($else_)*} {$($if_)*} } };
    (< $n:tt { $($if_:tt)* } { $($else_:tt)* }) => { $crate::if_rust_version_impl!{ >= $n {$($else_)*} {$($if_)*} } };
    (<= $n:tt { $($if_:tt)* } { $($else_:tt)* }) => { $crate::if_rust_version_impl!{ > $n {$($else_)*} {$($if_)*} } };
}

/**
This macro can enable or disable code depending on the rust version with which the program is
compiled.

The syntax is this (pseudo-code):
`(if rust_version)? <operator> <version> { <code> }
(else if rust_version <operator> <version> { <code> })*
(else { <code> })?`

The operator is one of `==`, `!=`, `>=`, `<=`, `<` or `>`. The version is either `nightly` or a
version number in the form `1.x`.

**Important:** The version number can only have one period, and start with `1.`. So for example
simply `1.36`, **but NOT** `1.36.0` or `0.42`

The macro will expand to the code corresponding to the right condition. (Or nothing if no
condition match).

Examples:

```rust
# use if_rust_version::if_rust_version;
if_rust_version!{ == nightly {
    fn foo() { /* implementation on nightly */ }
} else if rust_version >= 1.33 {
    fn foo() { /* implementation on rust 1.33 or later */ }
} else {
    fn foo() { /* implementation on rust 1.33 on old rust */ }
}}
```

```rust
# use if_rust_version::if_rust_version;
if_rust_version!{ >= 1.36 { use std::mem::MaybeUninit; }}
// ...
if_rust_version!{ < 1.36 {
    let mut foo: u32 = unsafe { ::std::mem::uninitialized() };
} else {
    let mut foo: u32 = unsafe { ::std::mem::MaybeUninit::uninit().assume_init() };
}}
```

Note that in case this is used as an expression, no blocks will be added.

```ignored
// Error
println!("{}", if_rust_version!{ < 1.22 { let x = 42; x} else { 43 } } );
```

```rust
# use if_rust_version::if_rust_version;
// OK
println!("{}", { if_rust_version!{ < 1.22 { let x = 42; x} else { 43 } } } );
// Also OK
println!("{}", if_rust_version!{ < 1.22 { {let x = 42; x} } else { 43 } }  );
```

*/
#[macro_export]
macro_rules! if_rust_version {
    (if rust_version $($tail:tt)*) => { if_rust_version!{ $($tail)* } };
    ($op:tt $n:tt { $($if_:tt)* }) => { $crate::if_rust_version_impl!{ $op $n {$($if_)*} {}} };
    ($op:tt $n:tt { $($if_:tt)* } else { $($else_:tt)* }) => { $crate::if_rust_version_impl!{ $op $n {$($if_)*} {$($else_)*} } };
    ($op:tt $n:tt { $($if_:tt)* } else if rust_version $($tail:tt)*) => { $crate::if_rust_version_impl!{ $op $n {$($if_)*} { if_rust_version!{$($tail)*} } } };
}
