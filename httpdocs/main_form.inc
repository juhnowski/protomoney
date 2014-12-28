<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" charset="UTF-8" type="text/css" href="http://interactivefishing.tv/main.css">
<meta charset="UTF-8">
</head>
<body>
    <div id="panel_header_main_form">
        <p id="panel_header_main_form_title">Вход в систему</p>
    </div>

<td class="label">
<div class="grayBorder red" style="display:none;font-weight:bold;" id="validation">
<div id="required" style="display:none">Требуется ввести логин и пароль</div></div>	

			  <div id="advise" class="grayBorder" style="text-align:left">
              <table style="margin:10px" type="advise">
                  <tbody><tr>
                    <td rowspan="2" width="150px" align="center">
                      <img src="http://interactivefishing.tv/images/znak.png">
                    </td>
                    <td>
                      <b>Это демонстрационная версия! Все операции в нем недействительны и никакие средства внесенные вами каким-либо образом не могут быть востребованы к возврату.</b>
                    </td>
                  </tr><tr>
                    <td>
			О переходе на рабочую версию вы будете оповещены дополнительно
		    </td>
                  </tr>       
                </tbody></table></div>
			  <script>
				$("#advise").append($("[type=advise]").random());
			  </script>


<form action="parsing_post.wsgi" id="form" method="POST" autocomplete="off">
<div class="login grayBorder"><table class="login" style="text-align:left">
<tbody>
<tr class="formrow">
    <td>Логин:</td>
    <td>
        <input id="username" name="username" type="text" class="ui-widget-content" tabindex="1" maxlength="16">
    </td>
</tr>
<tr class="formrow">
    <td>Пароль:</td>
    <td>
        <input id="password" name="password" type="password" tabindex="2" style="width:150px" maxlength="16">
        <div style="position: absolute; left: 1024px; top: 224px;"></div></td><td style="text-align: center; padding-right: 0px;">
            <img src="http://interactivefishing.tv/images/icon_help2.gif" height="11" width="11" style="margin:0px 2px 0px 4px;">
    </td>
    <td style="padding-left: 0px;">
        <a href="http://interactivefishing.tv/notavailable.html" target="_blank">Забыли пароль</a>
    </td>
</tr>
<tr class="formrow">
    <td>
    </td>
    <td>
        <button id="panel_header_menu" type="submit" value="Submit">
            <p id="panel_header_menu_title">Вход</p>
        </button>
    </td>
    <td>
    </td>
    <td>
        <button id="panel_header_menu">
            <p id="panel_header_menu_title" href="javascript:showLink('registration.inc');">Регистрация</p>
        </button>

    </td>
    <td>
    </td>
</tr>
</tbody>
</table>
</div>
</form>


<div class="grayBorder" style="padding:10px 20px; text-align:left"><div id="warn">
<span style="color:#D90003">
	<strong>Уважаемые клиенты!</strong>
</span>
<p></p>

<font color="#000000">
	Мы настоятельно рекомендуем вам ознакомиться с <a href="http://interactivefishing.tv/notimplemented.html" target="_blank" "="">правилами</a> по работе с платежной системой WML.
</font>

<p></p>

</div></div>	

</td>

</body>
