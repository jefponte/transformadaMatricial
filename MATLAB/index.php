<?php 

echo "<h1>Dados Para treinamento </h1>";

if (($handle = fopen("pacientes_modelo.out", "r")) == FALSE) {
    echo 'Falha ao tentar abrir a planilha de metas';
    return;
}

$outraLista = array();
$linhaListaTeste = array();
$listaTeste = array();
$i = 0;

while (! feof($handle)) {
    
    
    $line = fgets($handle);
    if($line == ''){
        break;
    }
    $lista = explode("   ", $line);
    unset($lista[0]);
    $linhaListaTeste = array();
    $i++;
    $j = 0;
    foreach($lista as $chave => $elemento){
        $j++;    
        $lista[$chave] = intval($elemento);
    }
    
    
    $outraLista[] = '{'.implode(",", $lista).'}';
    $listaTeste[] = '{'.implode(",", $linhaListaTeste).'}';
    
    
}

echo ' float x['.$i.']['.$j.'] = {'.implode(", ", $outraLista).'};';
echo "<br><hr>";

// echo "<br><hr>";



if (($handle = fopen("patologias_modelo.out", "r")) == FALSE) {
    echo 'Falha ao tentar abrir a planilha de metas';
    return;
}

$outraLista = array();
$linhaListaTeste = array();
$listaTeste = array();

$i = 0;
while (! feof($handle)) {
    
    
    $line = fgets($handle);
    if($line == ''){
        break;
    }
    $lista = explode("   ", $line);
    unset($lista[0]);
    $linhaListaTeste = array();
    $i++;
    $j = 0;
    foreach($lista as $chave => $elemento){
        $j++;
        $lista[$chave] = intval($elemento);

        
    }
    
    $outraLista[] = '{'.implode(",", $lista).'}';
    $listaTeste[] = '{'.implode(",", $linhaListaTeste).'}';
    
    
}

echo ' float y['.$i.']['.$j.'] = {'.implode(", ", $outraLista).'};';
//

echo "<br><hr>";
echo "<h1>Dados Separados para testes</h1>";
echo '<form method="get">
    <input type="text" name="selecionar" placeholder="Coluna">
    <input type="submit" value="Selecoinar">

</form>
';

if (($handle = fopen("pacientes_teste.out", "r")) == FALSE) {
    echo 'Falha ao tentar abrir a planilha de metas';
    return;
}

$outraLista = array();
$linhaListaTeste = array();
$listaTeste = array();
$listaTeste2 = array();

$colunaTeste = 1;
if(isset($_GET['selecionar'])){
    $colunaTeste = $_GET['selecionar'];
}
$i = 0;
while (! feof($handle)) {
    

    $line = fgets($handle);
    if($line == ''){
        break;
    }
    $lista = explode("   ", $line);
    unset($lista[0]);
    $linhaListaTeste = array();
    $i++;
    $j = 0;
    foreach($lista as $chave => $elemento){
        $j++;
        $lista[$chave] = intval($elemento);
        if($chave == $colunaTeste){
            $linhaListaTeste[] = intval($elemento);
        }
        
    }

    
    
    $outraLista[] = '{'.implode(",", $lista).'}';
    $listaTeste[] = '{'.implode(",", $linhaListaTeste).'}';
    $listaTeste2[] = implode(",", $linhaListaTeste);
    
}

echo ' float x['.$i.']['.$j.'] = {'.implode(", ", $outraLista).'};';
echo '<br><br>';
echo ' float teste[34][1] = {'.implode(", ", $listaTeste).'};//Coluna '.$colunaTeste;
echo '<br><br>';
echo ' Teste Dados de entrada:<br>
        '.implode(",", $listaTeste2).',';

echo '<br><hr>';


if (($handle = fopen("patologias_teste.out", "r")) == FALSE) {
    echo 'Falha ao tentar abrir a planilha de metas';
    return;
}

$outraLista = array();
$linhaListaTeste = array();
$listaTeste = array();
$i = 0;
while (! feof($handle)) {
    
    
    $line = fgets($handle);
    if($line == ''){
        break;
    }
    $lista = explode("   ", $line);
    unset($lista[0]);
    $linhaListaTeste = array();
    $j = 0;
    $i++;
    foreach($lista as $chave => $elemento){
        $j++;
        $lista[$chave] = intval($elemento);
        if($chave == $colunaTeste){
            $linhaListaTeste[] = intval($elemento);
        }
        
    }
    
    $outraLista[] = '{'.implode(",", $lista).'}';
    $listaTeste[] = '{'.implode(",", $linhaListaTeste).'}';
    
    
}

echo ' float y['.$i.']['.$j.'] = {'.implode(", ", $outraLista).'};';
echo '<br><br>';
echo ' float teste[6][1] = {'.implode(", ", $listaTeste).'};//Coluna '.$colunaTeste;

if (($handle = fopen("a.out", "r")) == FALSE) {
    echo 'Falha ao tentar abrir a planilha de metas';
    return;
}

$outraLista = array();
$linhaListaTeste = array();
$i = 0;
while (! feof($handle)) {
    
    
    $line = fgets($handle);
    if($line == ''){
        break;
    }
    $lista = explode("  ", $line);
    unset($lista[0]);
    $linhaListaTeste = array();
    $j = 0;
    $i++;
    foreach($lista as $chave => $elemento){
        $j++;
        $lista[$chave] = $elemento;
        
        
    }

    $outraLista[] = '{'.implode(",", $lista).'}';
    
    
    
}
echo '<br><br><hr><h1>Matriz A</h1>';

echo ' float a['.$i.']['.$j.'] = {'.implode(", ", $outraLista).'};';
echo '<br><br>';



?>