## Lab 2 : CEG 3400

### Encryption

Table of contents:
* [Background](Lab2-Instructions.md#background)
* [Objectives](Lab2-Instructions.md#objectives)
* [Preparation](Lab2-Instructions.md#preparation)
* [Task 1: Symmetric Encryption](Lab2-Instructions.md#task-1---symmetric-encryption)
* [Task 2: Asymmetric Encryption](Lab2-Instructions.md#task-2---asymmetric-encryption)
* [Task 3: Digital Signatures](Lab2-Instructions.md#task-3---digital-signatures)

---

#### Background

Encryption is a basic tool for securing data at rest and data being sent across unsecure 
channels.

---

#### Objectives

Become familiar with several symmetric and asymmetric encryption protocols.

Analyze how well some encryption protocols secure data versus others.

---

#### Preparation

These commands will likely need a full version of bash as found in WSL Ubutun or other 
linux distro.  The default shell provided by MobaXTerm does not support several of the 
needed programs.  Be sure you can run all needed commands before getting stuck 
partway through ;)

---

### Task 1 - Symmetric Encryption

In this task you will encrypt a simple image using different encryption modes and analyze the 
effectiveness of each mode.  A list of all the supported algorithms and modes are found in the
`openssl` and `enc` man pages.

![original image](./data/example_pic.bmp)

Encrypt the `data/example_pic.bmp` file with the aes-128 algorithm using each of the following encryption modes 
- `aes-128-cbc`, `aes-128-ecb`, and `aes-128-ofb` – total of 3 ciphertext files created.  Name the files `example_pic.cbc`, 
`example_pic.ecb`, and `example_pic.ofb`.  Make up an easy to remember encryption password when 
prompted (e.g. 12345).

The general form of the encryption command is as follows:

```
openssl  <ALGORITHM_MODE>  -e  -in  <INPUT_FILE>   -out  <OUTPUT_FILE>
```

When you encrypt these images, you also encrypt the header information needed to open them
in an image viewer.
In order to view the encrypted files you will need to recreate the standard header format
of a `.bmp` file before an image viewer will recognize the encrypted data as an image.

The needed header data is stored in the first 54 bytes of every `.bmp` file.  You can cut it out and 
save it with the following command: `dd if=example_pic.bmp of=bmp_header.hex bs=1 count=54`
but I did this already and provided the header data in `data/bmp_header.hex`.

To prepend this to your cypher text simply use the cat command as follows:

```
cat data/bmp_header.hex ./example_pic.ofb > ofb.bmp
```

Once you have done this with all three files open them in an image viewer and compare them to
the original image and each other.  Write your finding in `README.md`

**Bonus 10 points if you embed all three of your encrypted images in your `README.md`**

---

### Task 2 - Asymmetric Encryption 

This task is brand new this semester!  It's really simple, using the instructor's public
key provided in class, encrypt this file (the `Lab2-Instructions.md` file.).

Name this file `task2.enc`.  Answer all task 2 questions in the `README.md`.

Hints: To *encrypt* a message or file using `gpg` you need to specify a *recipient* email 
address that you have the corresponding public key.  I am intentionally not giving the 
full command so you can play around with `gpg`, you might need to use the `man` command (and/or google).

---

### Task 3 - Digital Signatures

For task 3 you will be applying a digital signature to your `README.md`.  This must be
done AFTER you are done answering all questions (don't edit the `README.md` after signing)
.  If you do need to edit `README.md` after you sign it, simply delete the signature at the end and re sign it.

Hint: There are multiple ways to digitally sign a document with `gpg`.  Use the `--clearsign` option.

