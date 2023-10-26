import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    id: win
    width: 400
    height: 300
    visible: true
    TextField {
        id: loginField
        placeholderText: "Username"
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.margins: 100
    }

    TextField {
        id: passwordField
        placeholderText: "Password"
        echoMode: TextInput.Password
        anchors.top: loginField.bottom
        anchors.horizontalCenter: loginField.horizontalCenter
        anchors.margins: 10
    }

    Button {
        id: loginButton
        text: "Login"
        onClicked: loginController.login(loginField.text, passwordField.text)
        anchors.top: passwordField.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.margins: 10
    }
    Text{
        id: resultText
        visible: false
        anchors.top: loginButton.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.margins: 10
    }

    Connections {
        target: loginController
        onLoginResult: {
           handleLoginResult(success)
        }
    }
    function handleLoginResult(success) {
            if (success) {
                resultText.text = "Successful"
                resultText.visible = true
            } else {
                resultText.text = "Failed"
                resultText.visible = true
        }
    }
}
