## Lab 2 : CEG 3400

### Authentication and Permissions

#### Name: <yourname>

Names of teammates:
* <teammate 1>
* <teammate 2>

---

### Task 1 - Users

* Type your simple password here: 
* Upload your `id_rsa.pub` to this repo
* Encrypt your password with matthew.kijowski@wright.edu as the `--recipient` and upload it to `password.gpg`
* paste the relevant lines in `/etc/passwd` and `/etc/group` below that show you created your user
  ```

  ```

---

### Task 2 - Permissions

* What were the permissions on each of the users' home directories?
  ```
  command and output
  ```
* What command did you use to change the permissions?
  ```
  command
  ```
* What are the permissions on `/etc/shadow`?
  ```
  command and output
  ```
* Why does `/etc/shadow` have the permissions that it does?
* How did you accomplish this task?  IF you updated any of the files above
  (`/etc/passwd` or `/etc/group`) paste the relevant lines here.  
  ```
  output of ls -lah /home
  also paste any file names and changed lines here
  ```
  Be thorough in your response, explain how given the above output and 
  a listing of commands run I can know for certain that your user can 
  access other users' files.

---

### Task 3 - SetUID

* Make sure your uncompiled and compiled code is in `/code`
* What were the final permissions on your executable?
  ```
  ```
* What command did you use to setUID?
  ```
  ```
* Copy paste each verification you did for the setuid on your teammates'
  systems into different code blocks below.
  ```
  teammate 1
  ```
  ```
  teammate 2
  ```

---

### Task 4 - Hashcat

* How many passwords did you crack?
* Upload the cracked passwords to this repo `hashcat.output`
* How would you go about cracking ***ALL*** of the passwords?

* Analyze the results of `hashcat.output`, the input wordlists, 
  and the input `shadowfile`.  Were there any duplicate passwords?
  Did they have the same hashes in the shadowfile?  Was one wordlist more
  effective than the others?

