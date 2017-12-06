*** Settings ***
Library           Selenium2Library
Library           BuiltIn

*** Variables ***
# Default system address. Override when tested agains other instances.
${URL}            https://aws.amazon.com/console/
${BROWSER}        ff
${Login_Link}     css:a.alt-cta
${Login_Next}     css:button#next_button.aws-signin-button
${Username}       minkhantzaw38@gmail.com
${Password}       m%c5uuqut3riz@t
${Final_Word}     Build a solution

*** Test Cases ***
Validify Login Process
    [Documentation]    Opens a browser to login url, inputs valid username
    ...    and password and checks that the welcome page is open.
    Given Login Page is Open
    When User Clicks Login Link to Enter Username
    And User Enter Passwords
    Then Login Should Be Successful
    And Teardown Test
*** Keywords ***
Login Page is Open
    Open Browser    ${URL}    ${BROWSER}
    Maximize Browser Window

User Clicks Login Link to Enter Username
    Click Element    ${Login_Link}
    Input Text    css:input#resolving_input.aws-signin-textfield    ${Username}
    Click Element    ${Login_Next}

User Enter Passwords
    Sleep    10s
    Click Element    css:button#signin_button.aws-signin-button
    Sleep    8s

Login Should Be Successful
    Page Should Contain    ${Final_Word}
    Sleep    10s
Teardown Test
    Close Browser

