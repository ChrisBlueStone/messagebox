# messagebox
Simply calls MessageBox using the Windows API and returns the result.

This is very useful if you want to set reminders through Task Scheduler, so much so that I don't understand why this isn't a standard app.

## Example usage
The syntax is "messagebox *content* *title* *type*" where `type` is an integer representing various properties of the message box. The full list of message box types and return codes are available in the Microsoft documentation for MessageBox [here](https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messagebox).

```
messagebox "This is the content of the message" "Title" 0
```

Since the result of the messagebox is returned, its value is stored in the `errorlevel` variable.
```bat
start /wait messagebox Continue? Confirm 4
echo %errorlevel%
```
