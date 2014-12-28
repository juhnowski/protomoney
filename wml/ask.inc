<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" charset="UTF-8" type="text/css" href="main.css">
<meta charset="UTF-8">
</head>
<body>
    <div id="panel_header_menu">
        <p id="panel_header_menu_title">Задать вопрос :</p>
    </div>

<h1>Заполните пожалуйста стандартную форму:</h1>
<form>
  <table>
    <tbody>
        <tr>
            <td>
                Тема:
            </td>
            <td>
                <input id="ask_description" type="text" tabindex="2" style="width:150px" maxlength="100"></input>
            </td>
        </tr>
        <tr>
            <td>
                Описание:
            </td>
            <td>
                <textarea id="ask_message" type="text" tabindex="2" style="width:600px"></textarea>
            </td>
        </tr>
        <tr>
            <td>
            </td>
            <td>
                <button id="panel_header_menu" type="submit" value="Submit">
                    <p align = "right" id="panel_header_menu_title">Отправить запрос</p>
                </button>
            </td>
        </tr>
    </tbody>
  </table>
</form>
</body>
