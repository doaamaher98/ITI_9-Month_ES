Stages :
1- Added  (git add)
2- Committed (git commit)
3- Pushed (git push)

#Use git status to check it

#Use git add to stage the change

#Use git diff to see the differences which are unstaged.

#Use git git diff  --cached to see the differences at everytime for unstaged changes.
#Use git reset to make the changes unstaged once again.
#Use git reset --hard removed all files staged and make them unstaged, as well as removing changes made on this file as well.
#Use git commit to record changes made. it use SHA: Secure Hash Algorithm, unique 40 chars identifiers based on the current content.
#Use git log to see the history log.
#Use git reset to revert the maded changes.
#Use git pull to synch with the remote repository.
#Use git fetch to download the files and changes from the remote repo, BUT IT DOES NOT INTEGRATE THEM.
#Use git merge to Integrate data from remote repo into the local repo.
#Use git branch + branch_name for creating a new branch
#Use git switch + branch_name to switch between branches
######################## This line is added from the new feature branch #####################
#For Pushing from a new branch, you first need to set up an upstream for it, to know where to push this commit , use git push --set-upstream origin + branch name
#For Checking the remote branches , use git branch -r
#To Delete the branch , use git branch -d + branch name, but first merge the remote branch to the main branch.
#To Delete Remote branch, use git push origin : remote branch to be deleted.

