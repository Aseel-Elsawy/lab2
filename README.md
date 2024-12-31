# lab2 ![image](images/1.jpg)

### To delete a remote branch:
Use `git push origin :dev` to delete a remote branch.

### To delete a local branch:
Use `git branch -d test` to delete a local branch.  
Use `git branch -D test` to force delete a local branch.

### To list tags locally:
Use `git tag` to list tags locally.

### To delete a tag remotely:
Use `git push origin --delete v1.4` or `git push origin :refs/tags/v1.4` to delete a tag remotely.

### To delete a tag locally:
Use `git tag -d v1.4` to delete a tag locally.

### What is git rebase?
Rebase is the process of rewriting commit history after merging branches, which helps reduce conflicts.

### What is a pull request?
A pull request is a way of asking to merge your changes from one branch into another.
