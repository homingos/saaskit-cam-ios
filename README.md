# Flam Cam SaaS iOS SDK
Client Side iOS SDK for Flam Cam SaaS.
If you want to read the full API documentation of SaaS SDK, see [here].

## Index

- [Installation](#installation)
- [IssueReporting](#issuereporting)
- [Author](#author)

## Installation

- Clone or Download source code from GitHub.
- Setup Xcode workspace: Xcode workspace allows to work on multiple projects simultaneously and combine their products
- Add Unity-iPhone.xcodeproj and your project to workspace created above on a same level
- With this step we will add Unity player in the form of a framework to your app, it does not change the behavior of your app yet
    - Select NativeiOSApp target from your project 
    - in "General" tab / "Frameworks, Libraries, and Embedded Content" press + 
    - Add UnityFramework.framework, UnityDriver.framework, VuforiaEngine.framework
    <br><img src="images/addToEmbeddedContent.png">
    - in "Build Phases" tab, expand "Link Binary With Libraries"
    - remove UnityFramework.framework, UnityDriver.framework, VuforiaEngine.framework from the list (select it and press - )
    <br><img src="images/removeLink.png">
- Import the ```FlamCam.h``` and ```FlamCam.m``` file located in this [Sample App] to your Native iOS Project.
- Use below mentioned methods to load Flam Cam.
    ```
    [((FlamCam *)[[UIApplication sharedApplication] delegate]) initFlamCam:@"EnterSaaSKeyHere" privateKey:@"EnterPrivateKeyHere" clientName: @"EnterSaaSNameHere" source:@"SAAS"];
    [((FlamCam *)[[UIApplication sharedApplication] delegate]) loadFlamCamView];
    ```
    To load the Flam Cam use the below parameters, All parameters are required unless otherwise stated.

    | Option        | Type              | Description                                                         |
    | :------------ | ----------------- | ------------------------------------------------------------------- |
    | `clientKey`   | string (required) | Flam SDK key recieved from `business.flamapp.com` after signin up.  |
    | `privateKey`   | string (required) | Flam SDK key recieved from `business.flamapp.com` after signin up.  |
    | `clientName`  | string (required) | Flam SDK name recieved from `business.flamapp.com` after signin up. |
    | `clientSource`| string (required) | SAAS                                                                |

- Use below mentioned methods to unload Flam Cam.
    ```
    [((FlamCam *)[[UIApplication sharedApplication] delegate]) unloadFlamCam];
    ```

## IssueReporting

If you have found a bug or if you have a feature request, please report them at this [Support Center].

## Author

[Flam](<[https://flamapp.com/](https://flamapp.com/)>)

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

[here]: <https://business.flamapp.com>
[Sample App]: <https://github.com/homingos/saaskit-cam-ios-sample/tree/main/NativeiOSApp/NativeiOSApp>
[Support Center]: <https://help.flamapp.com>
[Flam]: <https://flamapp.com>
