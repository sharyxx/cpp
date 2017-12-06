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
    [Documentation]    Opens browser to login into the aws console
    Open Browser    ${URL}    ${BROWSER}
    Maximize Browser Window
    Click Element    ${Login_Link}
    Input Text    css:input#resolving_input.aws-signin-textfield    ${Username}
    Click Element    ${Login_Next}
    Sleep    8s
    Click Element    css:button#signin_button.aws-signin-button
    Sleep    8s
    Page Should Contain    ${Final_Word}

