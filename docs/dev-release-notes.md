### Compact chat list
Single-line 37px rows, archive collapsed, no corner badges. Toggle: **Settings - Chats - Compact chat list**.

### Compact nested chats
The same compact rows for the topic list inside an opened forum. Toggle: **Settings - Chats - Compact nested chats**.

### Unified chat
Open a forum as a single chat feed from the chats list, the same mode as **Unified chat** in the chat menu, applied to every forum. The unread counters of the topics, of the chat in the list and of the feed itself follow the same read position. Toggle: **Settings - Chats - Unified chat**.

### Forward modes menu
A menu button in the top right corner of the forward box: forward with sender names / without sender name / without names and captions, and the media grouping below. The choice is remembered and stays until it is changed back, and the active mode is shown in the box subtitle.

### Russian translations
Full bundled Russian language pack: all settings and experimental functions are translated.

### Installing the Windows and macOS builds

These are self-signed with a throwaway certificate that is generated per build and is registered nowhere, so neither OS will trust them on first sight.

- **Windows**: extract the zip, right-click `AyuGram.exe`, choose Properties, tick Unblock, apply. Windows will still show SmartScreen; choose More info, then Run anyway.
- **macOS**: right-click `AyuGram.app` and choose Open, then confirm. The app is not notarised, so Gatekeeper will otherwise refuse to launch it.

Signing matters for the install path, not for the build: signing with a certificate Windows and macOS do not know about is what makes the warning appear, and the same warning appears if the build is unsigned at all.

_Community fork of [AyuGramDesktop](https://github.com/AyuGram/AyuGramDesktop)._
