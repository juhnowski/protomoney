<!DOCTYPE html>
<html>
<head>
<link rel="stylesheet" charset="UTF-8" type="text/css" href="http://interactivefishing.tv/main.css">
<meta charset="UTF-8">

<script type="text/javascript">
    var datefield=document.createElement("input")
    datefield.setAttribute("type", "date")
    if (datefield.type!="date"){ //if browser doesn't support input type="date", load files for jQuery UI Date Picker
        document.write('<link href="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8/themes/base/jquery-ui.css" rel="stylesheet" type="text/css" />\n')
        document.write('<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.4/jquery.min.js"><\/script>\n')
        document.write('<script src="http://ajax.googleapis.com/ajax/libs/jqueryui/1.8/jquery-ui.min.js"><\/script>\n')
    }
</script>
 
<script>
if (datefield.type!="date"){ //if browser doesn't support input type="date", initialize date picker widget:
    jQuery(function($){ //on document.ready
        $('#birthday').datepicker();
    })
}
</script>


</head>
<body>
    <div id="panel_header_menu">
        <p id="panel_header_menu_title">Выписка по счету :</p>
    </div>

    <br><a id="link_red">Выписка по счету:</a>
    <form>
        <table>
        <tr>
            <td>
                <a id="link_red">Cчет:</a>
            </td>
            <td>
              <select id="idDebitAccount" name="DebitAccount" title="4081781100200000001 Накопительный счет 10265.38 WML">
                <option value="4081781100200000001" selected="" title="4081781100200000001 Накопительный счет 10265.38 WML">4081781100200000001 Накопительный счет 10265.38 WML</option>
                <option value="4081784000100000001" selected="" title="4081784000100000001 Счет конвертирования в доллары 100.00 USD">4081784000100000001 Счет конвертирования в доллары 100.00 USD</   option>
                <option value="4081784000100000001" selected="" title="4081784000100000001 Текущий зарплатный счет 670.72 WML">4081784000100000001 Текущий зарплатный счет 670.72 WML</option>
                <option value="4081797800100000001" selected="" title="4081797800100000001 Счет конвертирования в евро 100.09 EUR">4081797800100000001 Счет конвертирования в евро 100.09 EUR</option>
                <option value="4081781100300000001" selected="" title="4081781100300000001 Потребительский кредит 90008.50 WML">4081781100300000001 Потребительский кредит 90008.50 WML</option>
                <option value="4081781000100000001" selected="" title="4081781000100000001 Счет конвертирования в рубли 1003.74 RUR">4081781000100000001 Счет конвертирования в рубли 1003.74 RUR</option>
              </select>
            </td>
        </tr>
        <tr>
            <td>
                <a id="link_red">Начиная с даты:</a>
            </td>
            <td>
                <input type="date" id="from_day" name="from_day" size="20" class="text"/>
            </td>
        </tr>
        <tr>
            <td>
                <a id="link_red">Заканчивая датой:</a>
            </td>
            <td>
                <input type="date" id="to_day" name="to_day" size="20" class="text"/>
            </td>
        </tr>
        <tr>
           <td>
           </td>
           <td>
                <br><button id="panel_header_menu" type="submit" value="Submit">
                    <p align = "right" id="panel_header_menu_title">Показать</p>
                </button>
           </td>
        </tr>
    </form>

</body>
