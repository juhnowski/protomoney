<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" charset="UTF-8" type="text/css" href="http://interactivefishing.tv/main.css">
<meta charset="UTF-8">
</head>
<body>
    <div id="panel_header_menu">
        <p id="panel_header_menu_title">Открытие счета :</p>
    </div>
    <div>
    <a id="link_red">Мои счета:</a>
    <table border="1" width="100%" cellpadding="0" cellspacing="0">
        <tr>
            <th bgcolor="#ffcaca"><a align="center" class="cell-pagetitle">Номер счета</a></th>
            <th bgcolor="#ffcaca"><a align="center" class="cell-pagetitle">Описание</a></th>
            <th bgcolor="#ffcaca"><a align="center" class="cell-pagetitle">Сумма</a></th>
            <th bgcolor="#ffcaca"><a align="center" class="cell-pagetitle">Валюта</a></th>
        </tr>

        <tr>
            <td><a class="link">4081781100200000001</a></td>
            <td><a class="link">Накопительный счет</a></td>
            <td><a class="link">10265.38</a></td>
            <td><a class="link">WML</a></td>
        </tr>
        <tr>
            <td><a class="link">4081784000100000001</a></td>
            <td><a class="link">Счет конвертирования в доллары</a></td>
            <td><a class="link">100.00</a></td>
            <td><a class="link">USD</a></td>
        </tr>
        <tr>
            <td><a class="link">4081784000100000001</a></td>
            <td><a class="link">Текущий зарплатный счет</a></td>
            <td><a class="link">670.72</a></td>
            <td><a class="link">WML</a></td>
        </tr>
        <tr>
            <td><a class="link">4081797800100000001</a></td>
            <td><a class="link">Счет конвертирования в евро</a></td>
            <td><a class="link">100.09</a></td>
            <td><a class="link">EUR</a></td>
        </tr>
        <tr>
            <td><a class="link">4081781100300000001</a></td>
            <td><a class="link">Потребительский кредит</a></td>
            <td><a class="link"> 90008.50</a></td>
            <td><a class="link">WML</a></td>
        </tr>
        <tr>
            <td><a class="link">4081781000100000001</a></td>
            <td><a class="link">Счет конвертирования в рубли</a></td>
            <td><a class="link">1003.74</a></td>
            <td><a class="link">RUR</a></td>
        </tr>
    </table>
    <a id="link_red">Новый счет:</a>
        <form "parsing_post.wsgi" id="form" method="POST" autocomplete="off">
            <table border="0">
                <tr>
                    <td><a id="link_red">Валюта счета:</a></td>
                    <td>
                        <table>
                            <tr><td>
                            <fieldset  border="0">
                                <legend>WebMoney</legend>
                                                <input type="radio" name="WML" value="WML" /><img src="http://interactivefishing.tv/wml.png">&nbsp;WML<br></input>
                                                <input type="radio" name="WMZ" value="WMU" /><img src="http://interactivefishing.tv/wmz.png">&nbsp;WMZ<br></input>
                                                <input type="radio" name="WMU" value="WMU" /><img src="http://interactivefishing.tv/wmu.png">&nbsp;WMU<br></input>
                                                <input type="radio" name="WME" value="WME" /><img src="http://interactivefishing.tv/wme.png">&nbsp;WME<br></input>
                                                <input type="radio" name="WMR" value="WMR" /><img src="http://interactivefishing.tv/wmr.png">&nbsp;WMR<br></input>
                                                <input type="radio" name="WMB" value="WMB" /><img src="http://interactivefishing.tv/wmb.png">&nbsp;WMB<br></input>
                                                <input type="radio" name="WMG" value="WMG" /><img src="http://interactivefishing.tv/wmg.png">&nbsp;WMG<br></input>
                            </fieldset>
                            </td>
                            <td>
                            <fieldset border="0">
<br><input type="radio" name="AUD" value="AUD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Australia.png">&nbsp;AUD<br></input>
<br><input type="radio" name="AZN" value="AZN" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Azerbaijan.png">&nbsp;AZN<br></input>
<br><input type="radio" name="ALL" value="ALL" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Albania.png">&nbsp;ALL<br></input>
<br><input type="radio" name="DZD" value="DZD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Algeria.png">&nbsp;DZD<br></input>
<br><input type="radio" name="XCD" value="XCD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Anguilla.png"><img src="http://interactivefishing.tv/22px-Flag_of_Antigua_and_Barbuda.png">&nbsp;XCD<br></input>
<br><input type="radio" name="AOA" value="AOA" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Angola.png">&nbsp;AOA<br></input>
<br><input type="radio" name="ARS" value="ARS" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Argentina.png">&nbsp;ARS<br></input>
                            </fieldset>
                            </td>
                            <td>
                            <fieldset  border="0">
<br><input type="radio" name="AMD" value="AMD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Armenia.png">&nbsp;AMD<br></input>
<br><input type="radio" name="AWG" value="AWG" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Aruba.png">&nbsp;AWG<br></input>
<br><input type="radio" name="AFN" value="AFN" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Afghanistan.png">&nbsp;AFN<br></input>
<br><input type="radio" name="BSD" value="BSD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_the_Bahamas.png">&nbsp;BSD<br></input>
<br><input type="radio" name="BDT" value="BDT" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Bangladesh.png">&nbsp;BDT<br></input>
<br><input type="radio" name="BBD" value="BBD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Barbados.png">&nbsp;BBD<br></input>
<br><input type="radio" name="BHD" value="BHD" class="currency_item"/><img src="http://interactivefishing.tv/Flag_of_Bahrain.png">&nbsp;BHD<br></input>
                            </fieldset>
                            </td>
                            </tr>

                        </table>
                    </td>
                </tr>
                <tr>
                    <td><a id="link_red">Описание</a></td>
                    <td><textarea id="ask_message" type="text" tabindex="2" style="width:600px"></textarea></td>
                </tr>
            </table>
                <button id="panel_header_menu" type="submit" value="Submit">
                    <p align = "right" id="panel_header_menu_title">Создать</p>
                </button>
        </form>
    </div>
<body>
