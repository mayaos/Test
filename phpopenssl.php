<?php

$str = pkcs5Pad($str);
if(strlen($str) % 8){
$str = str_pad($str,strlen($str) + 8 - strlen($str) % 8,"\0");

}

$sign = base64_encode(openssl_encrypt($str,'DES-EDE3',$key,OPENSSL_RAW_DATA|OPENSSL_NO_PADDING,''));

var_dump($sign);


function pkcs5Pad($text)
{
    $pad = 8 - (strlen($text) % 8);
    return $text . str_repeat(chr($pad), $pad);
}

?>