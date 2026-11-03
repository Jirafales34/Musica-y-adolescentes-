<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8" />
<meta name="viewport" content="width=device-width, initial-scale=1.0" />
<title>♪ Música, Adolescentes y Salud Mental ♪ — el blog</title>
<style>
  :root{
    --rosa:#ff2bd6; --azul:#00f0ff; --morado:#8a3dff; --amarillo:#a78bfa; --verde:#39ff14;
    --texto:#d8e6ff; --borde:#00f0ff; --fondo:#07021a; --panel:#0f0629; --panel2:#1a0a45;
  }
  *{box-sizing:border-box;margin:0;padding:0}
  html{scroll-behavior:smooth}
  body{
    font-family:Verdana,Tahoma,Geneva,sans-serif;
    font-size:13px; line-height:1.6; color:var(--texto);
    background-color:var(--fondo);
    background-image:
      linear-gradient(rgba(0,240,255,.07) 1px,transparent 1px),
      linear-gradient(90deg,rgba(0,240,255,.07) 1px,transparent 1px),
      radial-gradient(ellipse at top,#2a0b5e 0%,transparent 55%),
      radial-gradient(ellipse at bottom right,#4a0a45 0%,transparent 50%);
    background-size:40px 40px,40px 40px,100% 100%,100% 100%;
    background-attachment:fixed;
    padding:14px 10px 40px;
  }
  /* lineas de escaneo tipo monitor CRT */
  body::after{content:"";position:fixed;inset:0;pointer-events:none;z-index:999;
    background:repeating-linear-gradient(0deg,rgba(0,0,0,.18) 0,rgba(0,0,0,.18) 1px,transparent 1px,transparent 3px)}
  a{color:var(--azul);font-weight:bold;text-shadow:0 0 6px rgba(0,240,255,.6)}
  a:hover{color:#07021a;background:var(--amarillo);text-shadow:none}
  #pagina{max-width:960px;margin:0 auto}
  input,textarea{background:#0a0420;color:var(--texto)}

  /* cinta */
  .cinta{background:#000;color:var(--verde);border:2px solid var(--azul);overflow:hidden;white-space:nowrap;font-family:"Courier New",monospace;font-weight:bold;letter-spacing:1px;padding:3px 0;border-radius:6px 6px 0 0;text-shadow:0 0 8px var(--verde);box-shadow:0 0 14px rgba(0,240,255,.5)}
  .cinta span{display:inline-block;padding-left:100%;animation:cinta 28s linear infinite}
  @keyframes cinta{to{transform:translateX(-100%)}}

  /* cabecera */
  .cabecera{
    position:relative;overflow:hidden;text-align:center;color:#fff;
    padding:34px 16px 26px;border:2px solid var(--rosa);border-top:0;
    background:linear-gradient(135deg,#3a0a5e,#12072e 50%,#0a2a4d);
    box-shadow:0 0 24px rgba(255,43,214,.55),inset 0 0 40px rgba(0,240,255,.15);
  }
  .cabecera video{position:absolute;inset:0;width:100%;height:100%;object-fit:cover;opacity:.35;mix-blend-mode:screen}
  .cabecera>*{position:relative}
  .cabecera h1{
    font-family:"Courier New",Consolas,monospace;font-size:2.2rem;line-height:1.15;text-transform:uppercase;letter-spacing:2px;
    text-shadow:3px 0 0 var(--rosa),-3px 0 0 var(--azul),0 0 18px rgba(255,255,255,.6);
  }
  .cabecera h1 .nota{color:var(--amarillo);text-shadow:0 0 14px var(--amarillo)}
  .cabecera p{margin-top:8px;font-style:italic;color:#bfe9ff;text-shadow:0 0 8px rgba(0,240,255,.8)}
  .estado{display:inline-block;margin-top:12px;background:rgba(0,0,0,.65);color:var(--azul);border:2px dashed var(--rosa);border-radius:20px;padding:3px 14px;font-size:12px;text-shadow:0 0 6px var(--azul)}

  /* menu */
  .menu{display:flex;flex-wrap:wrap;background:#000;border:2px solid var(--azul);border-top:0;box-shadow:0 0 14px rgba(0,240,255,.4)}
  .menu a{flex:1 1 auto;text-align:center;text-decoration:none;color:var(--azul);padding:7px 10px;background:linear-gradient(#2a0b5e,#12072e);border-right:2px solid var(--rosa);font-size:12px;text-transform:uppercase;letter-spacing:1px}
  .menu a:last-child{border-right:0}
  .menu a:hover{background:linear-gradient(var(--amarillo),#7c5fe0);color:#000;text-shadow:none;box-shadow:0 0 14px var(--amarillo)}

  /* layout */
  .cuerpo{display:grid;grid-template-columns:230px 1fr;gap:14px;margin-top:14px}
  @media(max-width:760px){.cuerpo{grid-template-columns:1fr}.cabecera h1{font-size:1.5rem}}

  /* cajas */
  .caja{background:var(--panel);border:2px solid var(--azul);border-radius:6px;margin-bottom:14px;box-shadow:0 0 14px rgba(0,240,255,.4),4px 4px 0 rgba(255,43,214,.45);overflow:hidden}
  .caja>h2,.caja>h3.t{
    font-family:"Courier New",Consolas,monospace;font-size:13px;color:#fff;padding:5px 10px;text-transform:uppercase;letter-spacing:1px;
    background:linear-gradient(90deg,var(--rosa),#6a1bff 60%,var(--azul));text-shadow:0 0 6px #000;
  }
  .caja .in{padding:10px 12px}
  .caja ul{list-style:none}
  .caja li{padding:3px 0;border-bottom:1px dotted rgba(0,240,255,.35)}
  .caja li:last-child{border:0}
  .caja li::before{content:"▸ ";color:var(--rosa);text-shadow:0 0 6px var(--rosa)}

  .avatar{width:100px;height:100px;margin:0 auto 8px;border-radius:50%;border:3px solid var(--rosa);display:flex;align-items:center;justify-content:center;font-size:48px;background:radial-gradient(circle,#2a0b5e,#07021a);box-shadow:0 0 0 3px #07021a,0 0 0 6px var(--azul),0 0 22px var(--azul)}
  .centro{text-align:center}
  .reproductor{background:#000;color:var(--verde);font-family:"Courier New",monospace;padding:8px 10px;border-radius:4px;border:2px solid var(--verde);font-size:12px;text-shadow:0 0 6px var(--verde);box-shadow:0 0 12px rgba(57,255,20,.35)}
  .barra{height:8px;background:#1a1a3a;border-radius:4px;margin:6px 0;overflow:hidden}
  .barra i{display:block;height:100%;width:35%;background:linear-gradient(90deg,var(--verde),var(--azul));animation:avanza 14s linear infinite}
  @keyframes avanza{from{width:3%}to{width:100%}}
  .eq{display:flex;gap:3px;align-items:flex-end;height:18px}
  .eq b{width:5px;background:var(--rosa);box-shadow:0 0 6px var(--rosa);animation:eq .8s ease-in-out infinite alternate}
  .eq b:nth-child(2){animation-delay:.15s;background:var(--amarillo)}.eq b:nth-child(3){animation-delay:.3s;background:var(--azul)}
  .eq b:nth-child(4){animation-delay:.45s}.eq b:nth-child(5){animation-delay:.6s;background:var(--amarillo)}
  @keyframes eq{from{height:3px}to{height:18px}}

  .contador{display:flex;justify-content:center;gap:2px;margin:6px 0}
  .contador span{background:#000;color:var(--rosa);font-family:"Courier New",monospace;font-weight:bold;font-size:18px;padding:1px 6px;border:1px solid var(--rosa);text-shadow:0 0 8px var(--rosa)}

  .humor button{font:inherit;cursor:pointer;margin:2px;padding:2px 7px;border:2px solid var(--azul);background:#12072e;border-radius:4px}
  .humor button:hover{background:var(--amarillo);box-shadow:0 0 10px var(--amarillo)}
  .humor p{margin-top:6px;text-align:center;font-weight:bold}

  .nube a{display:inline-block;margin:2px 4px;text-decoration:none}
  .nube a:nth-child(3n){font-size:16px}.nube a:nth-child(3n+1){font-size:11px;color:var(--rosa);text-shadow:0 0 6px var(--rosa)}.nube a:nth-child(5n){font-size:19px;color:var(--amarillo);text-shadow:0 0 8px var(--amarillo)}

  .insignias{display:flex;flex-wrap:wrap;gap:4px;justify-content:center}
  .insignias span{width:88px;height:31px;display:flex;align-items:center;justify-content:center;font-size:9px;font-weight:bold;color:#fff;border:1px solid var(--azul);text-align:center;line-height:1.1;text-shadow:1px 1px 0 #000}
  .i1{background:linear-gradient(#ff2bd6,#6b0a5a)}.i2{background:linear-gradient(#00b8c8,#05394a)}.i3{background:linear-gradient(#2fbf10,#0b3d06)}.i4{background:linear-gradient(#8a3dff,#2a0a6b)}

  /* entradas */
  .entrada{background:var(--panel);border:2px solid var(--rosa);border-radius:6px;margin-bottom:16px;box-shadow:0 0 16px rgba(255,43,214,.45),4px 4px 0 rgba(0,240,255,.4);overflow:hidden}
  .entrada header{background:linear-gradient(90deg,#2a0b5e,#0a2a4d);border-bottom:2px dashed var(--azul);padding:8px 12px}
  .entrada .fecha{font-family:"Courier New",monospace;font-size:11px;color:var(--azul);font-weight:bold;text-shadow:0 0 6px var(--azul)}
  .entrada h2{font-family:"Courier New",Consolas,monospace;font-size:1.25rem;color:#ff7ae8;text-shadow:0 0 12px var(--rosa);text-transform:uppercase;letter-spacing:1px}
  .entrada .texto{padding:12px 14px}
  .entrada .texto p{margin-bottom:10px}
  .entrada footer{padding:6px 12px;background:#0b0422;border-top:1px dotted var(--rosa);font-size:11px;display:flex;flex-wrap:wrap;gap:6px 14px;justify-content:space-between}
  .etiqueta{display:inline-block;background:transparent;border:1px solid var(--amarillo);border-radius:3px;padding:0 5px;font-size:10px;margin-right:3px;color:var(--amarillo);text-shadow:0 0 6px rgba(167,139,250,.6)}
  .pegatina{float:right;margin:0 0 6px 10px;font-size:40px;transform:rotate(8deg);filter:drop-shadow(0 0 8px var(--rosa))}
  .nuevo{background:var(--rosa);color:#fff;font-size:10px;padding:0 5px;border-radius:3px;margin-left:5px;animation:parpadeo 1s steps(2) infinite;vertical-align:middle;text-shadow:none;box-shadow:0 0 10px var(--rosa)}
  @keyframes parpadeo{50%{opacity:.2}}

  .destacada{background:rgba(167,139,250,.08);border:2px dashed var(--amarillo);padding:8px 12px;margin:10px 0;border-radius:4px}

  .archivo{border-left:4px dotted var(--rosa);margin:8px 0 8px 8px;padding-left:14px}
  .archivo div{margin-bottom:10px;position:relative}
  .archivo div::before{content:"◆";position:absolute;left:-26px;top:-2px;color:var(--amarillo);background:var(--panel);font-size:14px;text-shadow:0 0 8px var(--amarillo)}
  .archivo b{color:var(--azul)}

  .rejilla{display:grid;grid-template-columns:repeat(auto-fit,minmax(190px,1fr));gap:10px;margin-top:6px}
  .mini{background:linear-gradient(var(--panel2),#0d0526);border:2px solid var(--azul);border-radius:6px;padding:8px 10px;text-decoration:none;color:var(--texto);font-weight:normal;display:block;text-shadow:none}
  .mini:hover{background:linear-gradient(#3a0a5e,#12072e);color:var(--texto);border-color:var(--rosa);box-shadow:0 0 14px rgba(255,43,214,.6);transform:rotate(-1deg)}
  .mini strong{display:block;color:#ff7ae8;font-family:"Courier New",monospace;text-shadow:0 0 6px var(--rosa)}

  .alerta{background:rgba(255,43,74,.12);border:2px solid #ff2b4a;border-radius:6px;padding:8px 12px;margin:10px 0;color:#ffd0d8;box-shadow:0 0 12px rgba(255,43,74,.35)}

  .fuentes{background:var(--panel);border:2px solid var(--azul);border-radius:6px;box-shadow:0 0 14px rgba(0,240,255,.4),4px 4px 0 rgba(255,43,214,.45);margin-top:6px}
  .fuentes summary{cursor:pointer;padding:7px 12px;font-weight:bold;background:linear-gradient(90deg,var(--rosa),#6a1bff 60%,var(--azul));color:#fff;text-shadow:0 0 6px #000}
  .fuentes .in{padding:10px 14px;font-size:11px}

  .pie{margin-top:16px;background:#000;color:#9fb4e8;text-align:center;border:2px solid var(--rosa);border-radius:6px;padding:12px;font-size:11px;box-shadow:0 0 16px rgba(255,43,214,.45)}
  .pie a{color:var(--amarillo)}
  .construccion{display:inline-block;background:repeating-linear-gradient(45deg,var(--amarillo),var(--amarillo) 10px,#111 10px,#111 20px);padding:2px 8px;margin-bottom:6px}
  .construccion span{background:var(--amarillo);color:#111;font-weight:bold;padding:0 6px;font-size:11px}

  /* ===== zona interactiva ===== */
  .btn-neon{font:inherit;font-weight:bold;cursor:pointer;padding:6px 14px;border:2px solid var(--azul);background:linear-gradient(#ff2bd6,#6a1bff);color:#fff;border-radius:4px;text-transform:uppercase;letter-spacing:1px;text-shadow:0 0 6px #000}
  .btn-neon:hover{box-shadow:0 0 14px var(--rosa)}
  .btn-sec{background:#12072e;color:var(--azul);text-shadow:none}
  .pregunta{margin-bottom:12px}
  .pregunta>p{font-weight:bold;color:#fff;margin-bottom:4px}
  .op{display:block;padding:5px 8px;margin:3px 0;border:1px solid rgba(0,240,255,.4);border-radius:4px;cursor:pointer;background:#0d0526}
  .op:hover{border-color:var(--rosa);background:var(--panel2)}
  .op input{margin-right:6px;accent-color:#ff2bd6}
  .aviso-test{color:var(--amarillo);margin:8px 0;min-height:1em}
  .resultado{display:none;margin-top:12px;padding:10px 12px;border:2px solid var(--verde);border-radius:6px;background:rgba(57,255,20,.07);box-shadow:0 0 14px rgba(57,255,20,.3)}
  .resultado.ver{display:block}
  .resultado h3{font-family:"Courier New",Consolas,monospace;color:var(--verde);text-shadow:0 0 8px var(--verde);margin-bottom:6px;text-transform:uppercase}
  .resultado p{margin-bottom:6px}
  .reto-dia{display:flex;gap:8px;align-items:flex-start;padding:6px 8px;border:1px dashed rgba(0,240,255,.4);border-radius:4px;margin:5px 0;cursor:pointer;background:#0d0526}
  .reto-dia:hover{border-color:var(--rosa)}
  .reto-dia input{margin-top:3px;accent-color:#39ff14}
  .reto-dia.hecho{border:1px solid var(--verde);background:rgba(57,255,20,.07);color:#9fb4e8}
  .dia{color:var(--amarillo);font-weight:bold;white-space:nowrap;text-shadow:0 0 6px rgba(167,139,250,.6)}
  .prog{height:12px;background:#1a1a3a;border:1px solid var(--azul);border-radius:6px;overflow:hidden;margin:6px 0}
  .prog i{display:block;height:100%;width:0;background:linear-gradient(90deg,var(--rosa),var(--azul),var(--verde));transition:width .4s}
  .mito{border:1px solid rgba(0,240,255,.4);border-radius:6px;padding:8px 10px;margin:8px 0;background:#0d0526}
  .mito .afirm{font-weight:bold;color:#fff;margin-bottom:6px}
  .mito .botones{display:flex;gap:8px;flex-wrap:wrap}
  .mito .botones button{font-size:11px;padding:4px 10px}
  .mito .botones button:disabled{opacity:.45;cursor:default;box-shadow:none}
  .mito .expl{display:none;margin-top:8px;padding:6px 8px;border-left:3px solid var(--verde);background:rgba(57,255,20,.06)}
  .mito .expl.ver{display:block}
  .mito .expl.mal{border-left-color:var(--amarillo);background:rgba(167,139,250,.06)}

  /* ===== creador de playlist ===== */
  .pl-campos{display:grid;grid-template-columns:repeat(auto-fit,minmax(170px,1fr));gap:8px;margin:8px 0 10px}
  .pl-campos label span{display:block;font-weight:bold;color:var(--azul);margin-bottom:2px}
  .pl-campos select,.pl-fila input[type=text]{width:100%;background:#0a0420;color:var(--texto);border:2px solid var(--azul);padding:5px;font:inherit;border-radius:4px}
  .bloque{border:1px solid rgba(0,240,255,.4);border-radius:6px;padding:8px 10px;margin:8px 0;background:#0d0526}
  .bloque h4{color:#ff7ae8;font-family:"Courier New",Consolas,monospace;text-transform:uppercase;text-shadow:0 0 6px var(--rosa);margin-bottom:2px}
  .bloque p{margin-bottom:4px}
  .bloque textarea{width:100%;margin-top:6px;border:2px solid var(--azul);padding:5px;font:inherit;resize:vertical;border-radius:4px}
  .btn-link{display:inline-block;margin:2px 4px 2px 0;padding:2px 9px;border:1px solid var(--azul);border-radius:12px;font-size:11px;text-decoration:none;background:#12072e}
  .pl-fila{display:flex;gap:8px;flex-wrap:wrap;align-items:center;margin-top:10px}
  .pl-fila input[type=text]{flex:1 1 180px;width:auto}
  .pl-msg{min-height:1.2em;margin-top:6px;color:var(--verde)}
  .pl-guardada{border:2px solid var(--rosa);border-radius:6px;padding:8px 10px;margin:8px 0;background:#0d0526;box-shadow:0 0 10px rgba(255,43,214,.3)}
  .pl-guardada strong{color:#ff7ae8;font-size:14px}
  .pl-guardada small{display:block;color:#9fb4e8;margin-bottom:4px}
  .pl-guardada ul{margin:2px 0 6px 18px}
  .pl-guardada .acc{display:flex;gap:6px;flex-wrap:wrap}
  .pl-guardada .acc button{font-size:10px;padding:3px 9px}

  /* ================= TEMA SKATER 2000 x CYBERPUNK ================= */
  :root{ --lima:#c6ff00; --asfalto:#0b0b10; --impact:Impact,"Arial Black","Haettenschweiler",sans-serif; }

  body{
    background:
      radial-gradient(circle,rgba(255,255,255,.06) 1px,transparent 1.6px) 0 0/9px 9px,
      radial-gradient(circle at 12% 16%,rgba(255,43,214,.30) 0,transparent 20%),
      radial-gradient(circle at 90% 28%,rgba(0,240,255,.24) 0,transparent 18%),
      radial-gradient(circle at 18% 88%,rgba(198,255,0,.20) 0,transparent 20%),
      radial-gradient(circle at 85% 92%,rgba(255,43,214,.22) 0,transparent 18%),
      var(--asfalto);
    background-attachment:fixed;
  }
  body::after{background:repeating-linear-gradient(0deg,rgba(0,0,0,.12) 0,rgba(0,0,0,.12) 1px,transparent 1px,transparent 3px)}

  /* cinta de peligro */
  .cinta{
    background:#111;color:var(--amarillo);border:none;border-radius:0;box-shadow:none;
    font-family:var(--impact);font-weight:normal;letter-spacing:2px;text-transform:uppercase;text-shadow:none;
    border-top:8px solid transparent;border-bottom:8px solid transparent;
    border-image:repeating-linear-gradient(45deg,#a78bfa 0 12px,#111 12px 24px) 8;
  }

  /* cabecera con grafiti y stickers */
  .cabecera{
    background:
      radial-gradient(circle,rgba(255,255,255,.10) 1.5px,transparent 2px) 0 0/8px 8px,
      linear-gradient(135deg,#14061f,#0b0b10 55%,#041e2b);
    border:4px solid #fff;border-top:0;
    box-shadow:6px 6px 0 var(--rosa);
    padding:44px 16px 34px;
  }
  .cabecera video{opacity:.3;mix-blend-mode:screen}
  .cabecera h1{
    font-family:var(--impact);font-weight:normal;font-size:3.2rem;letter-spacing:3px;line-height:1.05;
    transform:rotate(-2deg);color:#fff;
    text-shadow:4px 4px 0 var(--rosa),8px 8px 0 #000,-2px -2px 0 var(--azul);
  }
  .cabecera h1 .nota{color:var(--lima);text-shadow:3px 3px 0 #000}
  .cabecera p{display:inline-block;background:var(--amarillo);color:#111;font-style:normal;font-weight:bold;padding:2px 12px;transform:rotate(1.2deg);text-shadow:none;margin-top:14px}
  .estado{background:rgba(0,0,0,.75);border:2px dashed #fff;color:var(--lima);text-shadow:none;margin-top:16px}
  .cabecera .sticker{position:absolute;z-index:2;font-family:var(--impact);text-transform:uppercase;font-size:13px;line-height:1.05;text-align:center;color:#111;padding:6px 10px;border:3px solid #111;box-shadow:3px 3px 0 #000}
  .s1{top:14px;left:16px;background:var(--lima);transform:rotate(-12deg);border-radius:50%;width:74px;height:74px;display:flex;align-items:center;justify-content:center}
  .s2{top:18px;right:18px;background:var(--rosa);transform:rotate(9deg)}
  .s3{bottom:14px;left:22px;background:var(--azul);transform:rotate(-5deg)}
  .s4{bottom:16px;right:22px;background:var(--amarillo);transform:rotate(6deg)}
  @media(max-width:760px){.cabecera h1{font-size:2rem}.s3,.s4{display:none}.s1{width:56px;height:56px;font-size:11px}.s2{font-size:11px}}

  /* menu estilo stickers */
  .menu{background:#111;border:4px solid #fff;border-top:0;box-shadow:6px 6px 0 var(--azul)}
  .menu a{background:#111;color:#fff;border-right:2px dashed #555;text-shadow:none;font-family:var(--impact);font-weight:normal;font-size:14px;letter-spacing:1.5px;transition:transform .15s}
  .menu a:nth-child(3n+1):hover{background:var(--rosa);color:#111}
  .menu a:nth-child(3n+2):hover{background:var(--lima);color:#111}
  .menu a:nth-child(3n):hover{background:var(--azul);color:#111}
  .menu a:hover{box-shadow:none;transform:rotate(-2deg) scale(1.06)}

  /* cajas laterales: papel pegado con cinta */
  .caja{position:relative;overflow:visible;background:#14141c;border:3px solid #fff;border-radius:0;box-shadow:5px 5px 0 var(--rosa)}
  aside .caja:nth-child(odd){transform:rotate(-.8deg)}
  aside .caja:nth-child(even){transform:rotate(.8deg);box-shadow:5px 5px 0 var(--azul)}
  aside .caja:hover{transform:rotate(0) scale(1.02)}
  .caja::before{content:"";position:absolute;top:-11px;left:50%;width:70px;height:20px;background:rgba(255,255,255,.28);transform:translateX(-50%) rotate(-3deg);z-index:2}
  .caja>h2,.caja>h3.t{background:var(--amarillo);color:#111;font-family:var(--impact);font-weight:normal;font-size:15px;letter-spacing:2px;text-shadow:none;border-bottom:3px solid #111}
  .caja li::before{content:"✦ ";color:var(--lima);text-shadow:none}
  .avatar{border:5px solid var(--lima);background:radial-gradient(circle,#222,#000);box-shadow:0 0 0 3px #000,0 0 0 6px var(--rosa)}

  /* entradas tipo zine */
  .entrada{position:relative;overflow:visible;background:#14141c;border:3px solid #fff;border-radius:0;box-shadow:6px 6px 0 var(--rosa)}
  .entrada:nth-of-type(3n+2){box-shadow:6px 6px 0 var(--azul)}
  .entrada:nth-of-type(3n){box-shadow:6px 6px 0 var(--lima)}
  .entrada::before{content:"";position:absolute;top:-13px;left:50%;width:96px;height:24px;background:rgba(167,139,250,.55);transform:translateX(-50%) rotate(-2.5deg);z-index:2}
  .entrada header{background:var(--amarillo);border-bottom:3px solid #111}
  .entrada .fecha{color:#111;text-shadow:none;font-family:"Courier New",monospace}
  .entrada h2{font-family:var(--impact);font-weight:normal;font-size:1.7rem;letter-spacing:1.5px;color:#111;text-shadow:2px 2px 0 var(--rosa)}
  .entrada footer{background:var(--asfalto);border-top:3px dashed #fff}

  .etiqueta{background:var(--lima);color:#111;border:2px solid #111;border-radius:0;font-weight:bold;text-shadow:none;transform:rotate(-2deg)}
  .nuevo{background:var(--rosa);color:#111;font-family:var(--impact);font-weight:normal;transform:rotate(8deg);border-radius:0;border:2px solid #111;box-shadow:none;padding:0 6px}
  .destacada{background:rgba(167,139,250,.10);border:3px dashed var(--amarillo);border-radius:0}
  .archivo div::before{content:"🛹";font-size:14px;text-shadow:none;left:-28px}
  .archivo{border-left:4px dashed var(--rosa)}
  .mini{background:#0b0b10;border:2px dashed #fff;border-radius:0}
  .mini:hover{background:#1c1c28;border-color:var(--lima);box-shadow:4px 4px 0 var(--lima);transform:rotate(-1.2deg)}
  .mini strong{font-family:var(--impact);font-weight:normal;letter-spacing:1px;color:var(--lima);text-shadow:none;font-size:15px}
  .alerta{border-radius:0;border:3px solid #ff2b4a;box-shadow:4px 4px 0 #000}
  .fuentes{border:3px solid #fff;border-radius:0;box-shadow:5px 5px 0 var(--azul)}
  .fuentes summary{background:var(--amarillo);color:#111;font-family:var(--impact);font-weight:normal;letter-spacing:2px;text-shadow:none}
  .pie{border:4px solid #fff;border-radius:0;box-shadow:6px 6px 0 var(--lima);background:#111}

  /* botones */
  .btn-neon{font-family:var(--impact);font-weight:normal;letter-spacing:2px;background:var(--rosa);color:#111;border:3px solid #111;border-radius:0;text-shadow:none;box-shadow:4px 4px 0 var(--amarillo);transition:transform .1s,box-shadow .1s}
  .btn-neon:hover{box-shadow:2px 2px 0 var(--amarillo);transform:translate(2px,2px)}
  .btn-sec{background:#111;color:#fff;border:2px solid #fff;box-shadow:3px 3px 0 var(--azul)}
  .btn-sec:hover{box-shadow:1px 1px 0 var(--azul)}
  .btn-link{border-radius:0;border:2px solid #fff;background:#111;color:#fff;text-shadow:none}
  .humor button{border-radius:0;border:2px solid #fff;background:#111}

  /* piezas interactivas */
  .op,.reto-dia,.mito,.bloque,.pl-guardada{border-radius:0}
  .bloque h4,.resultado h3,.pl-guardada strong{font-family:var(--impact);font-weight:normal;letter-spacing:1px}
  .contador span{border-radius:0}
  .insignias span{border-radius:0;border:2px solid #fff;font-family:var(--impact);font-weight:normal;letter-spacing:.5px}
</style>
</head>
<body>
<div id="pagina">

  <div class="cinta"><span>♪ ¡Bienvenid@ a mi blog! ♪ &nbsp; La música también cuida tu mente ♥ &nbsp; Actualizado: noviembre de 2026 &nbsp; ★ Proyecto educativo ★ &nbsp; 🛹 Rueda, escucha, respira 🛹 &nbsp; ¡No olvides firmar el libro de visitas! ♪</span></div>

  <div class="cabecera">
    <video src="./luces.mp4" autoplay muted loop playsinline></video>
    <span class="sticker s1">SK8 ♪</span><span class="sticker s2">Haz<br>ruido</span><span class="sticker s3">Cuida tu<br>mente</span><span class="sticker s4">♥ Respeto</span>
    <h1><span class="nota">♫</span> Música, Adolescentes<br>y Salud Mental <span class="nota">♫</span></h1>
    <p>~ el blog donde la música y las emociones se encuentran ~</p>
    <div class="estado">✎ Estado de ánimo: <b id="estado-top">inspirad@</b> &nbsp;|&nbsp; ♪ Escuchando: <b>tu playlist favorita</b></div>
  </div>

  <nav class="menu">
    <a href="#inicio">★ Inicio</a>
    <a href="efectos.html">Efectos</a>
    <a href="salud-mental.html">Salud mental</a>
    <a href="generos.html">Géneros</a>
    <a href="consejos.html">Consejos</a>
    <a href="guia-padres.html">Guía para padres</a>
    <a href="recursos.html">Recursos</a>
  </nav>

  <div class="cuerpo">

    <!-- BARRA LATERAL -->
    <aside id="lateral">
      <div class="caja">
        <h2>⚡ Tu progreso</h2>
        <div class="in centro">
          <p>Rango: <b id="prog-rango" style="color:var(--amarillo)">Novat@ del ritmo</b></p>
          <div class="prog"><i id="prog-barra"></i></div>
          <p id="prog-n">0 de 9 misiones</p>
          <p style="font-size:11px;margin-top:4px">Haz el test, los mitos y el reto de 7 días para subir de rango.</p>
          <button type="button" class="btn-neon btn-sec" id="prog-reset" style="margin-top:6px;font-size:10px;padding:3px 8px">Reiniciar</button>
        </div>
      </div>

      <div class="caja">
        <h2>♥ Sobre este blog</h2>
        <div class="in centro">
          <div class="avatar">🛹</div>
          <p><b>Proyecto educativo</b></p>
          <p>Un espacio para entender cómo la música influye en las emociones, la identidad y el bienestar de los adolescentes.</p>
        </div>
      </div>

      <div class="caja">
        <h2>♪ Ahora suena</h2>
        <div class="in">
          <div class="reproductor">
            <div class="eq"><b></b><b></b><b></b><b></b><b></b></div>
            ▶ Mi playlist de hoy
            <div class="barra"><i></i></div>
            vol: ▮▮▮▮▯
          </div>
        </div>
      </div>

      <div class="caja">
        <h2>☺ ¿Cómo te sientes?</h2>
        <div class="in humor">
          <div class="centro">
            <button data-e="contentx" data-t="¡Qué bien! Aprovecha con música de ritmo, un rato de baile y compártela con alguien 🎶">😄</button>
            <button data-e="tranquilx" data-t="Música instrumental, acústica o de tempo lento te ayuda a mantener esa calma 🌿">😌</button>
            <button data-e="tristx" data-t="Está bien sentirlo. Puedes escuchar algo que te acompañe, pero no te quedes horas en bucle; hablar con alguien también ayuda 💙">😢</button>
            <button data-e="estresadx" data-t="Respira hondo y prueba música lenta a volumen bajo, sin pantallas por un momento 🫧">😣</button>
          </div>
          <p id="humor-msg">Elige una carita</p>
        </div>
      </div>

      <div class="caja">
        <h2>★ Archivo del blog</h2>
        <div class="in">
          <ul>
            <li><a href="#playlist">Crea tu playlist</a></li>
            <li><a href="#test">Test: tipo de oyente</a></li>
            <li><a href="#mitos">Mitos o verdades</a></li>
            <li><a href="#reto">Reto de 7 días</a></li>
            <li><a href="#historia">Historia breve</a></li>
            <li><a href="#temas">Temas principales</a></li>
            <li><a href="#alerta">Cuándo pedir ayuda</a></li>
            <li><a href="#fuentes">Fuentes</a></li>
          </ul>
        </div>
      </div>

      <div class="caja">
        <h2>☁ Nube de etiquetas</h2>
        <div class="in nube">
          <a href="efectos.html">emociones</a><a href="salud-mental.html">estrés</a><a href="generos.html">géneros</a><a href="consejos.html">hábitos</a><a href="guia-padres.html">familia</a><a href="recursos.html">recursos</a><a href="#historia">historia</a><a href="efectos.html">identidad</a><a href="salud-mental.html">bienestar</a><a href="consejos.html">playlists</a>
        </div>
      </div>

      <div class="caja">
        <h2>✉ Blogroll</h2>
        <div class="in">
          <ul>
            <li><a href="recursos.html">Material para seguir aprendiendo</a></li>
            <li><a href="guia-padres.html">Rincón de los padres</a></li>
            <li><a href="consejos.html">Tips de escucha sana</a></li>
          </ul>
        </div>
      </div>

      <div class="caja">
        <h2>☆ Visitantes</h2>
        <div class="in centro">
          <p>Eres el visitante número</p>
          <div class="contador" id="contador"></div>
          <div class="insignias" style="margin-top:8px">
            <span class="i1">♪ MÚSICA<br>ES VIDA</span><span class="i2">BLOG<br>ESCOLAR</span><span class="i3">100%<br>EDUCATIVO</span><span class="i4">MEJOR VISTO<br>CON AUDÍFONOS</span>
          </div>
        </div>
      </div>
    </aside>

    <!-- CONTENIDO -->
    <main id="inicio">

      <article class="entrada">
        <header>
          <div class="fecha">📅 2 de noviembre de 2026 &nbsp;|&nbsp; ✎ Publicado por el equipo del blog</div>
          <h2>¡Bienvenid@! La música acompaña tu historia <span class="nuevo">NUEVO</span></h2>
        </header>
        <div class="texto">
          <span class="pegatina">🎶</span>
          <p>Hola, hola. Este blog nació para hablar de algo que casi todos los jóvenes hacemos a diario: <b>escuchar música</b>. La música acompaña la identidad, las emociones y el bienestar de los adolescentes, y entender cómo lo hace puede ayudarnos a disfrutarla de forma más consciente.</p>
          <p>Aquí vas a encontrar información ordenada por secciones. Cada tema tiene su propia página, así que explora con calma y vuelve cuando quieras.</p>
          <div class="destacada">💡 <b>Dato curioso:</b> la musicoterapia es una disciplina profesional que usa la música como apoyo para el bienestar emocional, y por eso la música y la salud mental se estudian juntas.</div>
        </div>
        <footer>
          <span><span class="etiqueta">bienvenida</span><span class="etiqueta">música</span><span class="etiqueta">bienestar</span></span>
          <span>💬 <a href="#libro">Comentarios</a></span>
        </footer>
      </article>

      <article class="entrada" id="temas">
        <header>
          <div class="fecha">📅 2 de noviembre de 2026 &nbsp;|&nbsp; ✎ Publicado por el equipo del blog</div>
          <h2>Temas principales del blog</h2>
        </header>
        <div class="texto">
          <p>Cada bloque está separado para que encuentres justo lo que buscas. ¡Haz clic en el que más te llame la atención!</p>
          <div class="rejilla">
            <a class="mini" href="#historia"><strong>📜 Historia</strong>Recorrido de la música y su vínculo con la cultura y la experiencia humana.</a>
            <a class="mini" href="efectos.html"><strong>✨ Efectos de la música</strong>Qué influye en el ánimo, la identidad y la regulación emocional.</a>
            <a class="mini" href="salud-mental.html"><strong>🧠 Salud mental</strong>Cómo la música puede ayudar a reducir el estrés y regular emociones.</a>
            <a class="mini" href="generos.html"><strong>🎸 Géneros musicales</strong>Los estilos más escuchados y cómo cada uno vive la experiencia juvenil.</a>
            <a class="mini" href="consejos.html"><strong>✅ Consejos</strong>Recomendaciones para un consumo más saludable y equilibrado.</a>
            <a class="mini" href="guia-padres.html"><strong>👨‍👩‍👧 Guía para padres</strong>Ideas para acompañar a los adolescentes y orientar un uso responsable.</a>
            <a class="mini" href="recursos.html"><strong>🔗 Recursos</strong>Enlaces y materiales útiles para seguir aprendiendo.</a>
          </div>
        </div>
        <footer>
          <span><span class="etiqueta">índice</span><span class="etiqueta">secciones</span></span>
          <span>💬 <a href="#libro">Comentarios</a></span>
        </footer>
      </article>

      <article class="entrada" id="test">
        <header>
          <div class="fecha">🎮 Zona interactiva &nbsp;|&nbsp; ✎ Misión 1</div>
          <h2>Test: ¿Qué tipo de oyente eres? <span class="nuevo">NUEVO</span></h2>
        </header>
        <div class="texto">
          <p>Responde 5 preguntas rápidas y descubre cómo usas la música. No hay respuestas buenas ni malas.</p>
          <form id="test-form"></form>
          <p class="aviso-test" id="test-aviso"></p>
          <button type="button" class="btn-neon" id="test-enviar">Ver mi resultado</button>
          <button type="button" class="btn-neon btn-sec" id="test-repetir">Repetir</button>
          <div class="resultado" id="test-res"></div>
        </div>
        <footer>
          <span><span class="etiqueta">test</span><span class="etiqueta">identidad</span></span>
          <span>💾 Se guarda en tu navegador</span>
        </footer>
      </article>

      <article class="entrada" id="mitos">
        <header>
          <div class="fecha">🎮 Zona interactiva &nbsp;|&nbsp; ✎ Misión 2</div>
          <h2>¿Mito o verdad?</h2>
        </header>
        <div class="texto">
          <p>Lee cada frase y elige. Después verás la explicación.</p>
          <div id="mitos-lista"></div>
        </div>
        <footer>
          <span><span class="etiqueta">mitos</span><span class="etiqueta">salud mental</span></span>
          <span>💾 Se guarda en tu navegador</span>
        </footer>
      </article>

      <article class="entrada" id="reto">
        <header>
          <div class="fecha">🎮 Zona interactiva &nbsp;|&nbsp; ✎ Misiones 3 a 9</div>
          <h2>Reto de 7 días de escucha consciente</h2>
        </header>
        <div class="texto">
          <p>Un pequeño desafío por día. Marca cada uno cuando lo cumplas.</p>
          <div class="prog"><i id="reto-barra"></i></div>
          <p id="reto-n" style="margin-bottom:6px">0 de 7 días completados</p>
          <div id="reto-lista"></div>
        </div>
        <footer>
          <span><span class="etiqueta">reto</span><span class="etiqueta">hábitos</span></span>
          <span>💾 Se guarda en tu navegador</span>
        </footer>
      </article>

      <article class="entrada" id="playlist">
        <header>
          <div class="fecha">🎧 Zona interactiva &nbsp;|&nbsp; ✎ Herramienta</div>
          <h2>Crea tu playlist <span class="nuevo">NUEVO</span></h2>
        </header>
        <div class="texto">
          <p>Elige cómo eres, cómo te sientes y qué vas a hacer, y la página te arma una <b>receta de playlist</b>. Tú pones las canciones: búscalas con los botones o escribe las tuyas.</p>
          <div class="pl-campos">
            <label><span>Tu perfil</span>
              <select id="pl-perfil">
                <option value="">Sin elegir (haz el test)</option>
                <option value="a">Calmante</option>
                <option value="b">Energizante</option>
                <option value="c">Social</option>
                <option value="d">Concentrado</option>
              </select></label>
            <label><span>Tu ánimo</span>
              <select id="pl-animo">
                <option value="contentx">Content@</option>
                <option value="tranquilx">Tranquil@</option>
                <option value="tristx">Trist@</option>
                <option value="estresadx">Estresad@</option>
              </select></label>
            <label><span>¿Qué vas a hacer?</span>
              <select id="pl-actividad">
                <option value="estudiar">Estudiar o hacer tareas</option>
                <option value="ejercicio">Hacer ejercicio</option>
                <option value="dormir">Prepararme para dormir</option>
                <option value="amigos">Estar con amigos</option>
                <option value="camino">Ir de camino al colegio</option>
              </select></label>
          </div>
          <button type="button" class="btn-neon" id="pl-generar">Generar receta</button>
          <div id="pl-receta"></div>
          <div class="pl-fila" id="pl-fila" style="display:none">
            <input type="text" id="pl-nombre" maxlength="30" placeholder="Nombre de tu playlist">
            <button type="button" class="btn-neon" id="pl-guardar">Guardar playlist</button>
          </div>
          <p class="pl-msg" id="pl-msg"></p>
          <h3 style="margin:14px 0 4px;color:var(--azul);font-family:'Courier New',monospace;text-transform:uppercase">Mis playlists</h3>
          <div id="pl-mias"></div>
        </div>
        <footer>
          <span><span class="etiqueta">playlist</span><span class="etiqueta">bienestar</span></span>
          <span>💾 Se guarda en tu navegador</span>
        </footer>
      </article>

      <article class="entrada" id="historia">
        <header>
          <div class="fecha">📅 Archivo histórico &nbsp;|&nbsp; ✎ Sección: Historia</div>
          <h2>Historia breve de la música</h2>
        </header>
        <div class="texto">
          <p>La música ha acompañado a la humanidad desde siempre: en la cultura, en la celebración y en la expresión emocional. Un mini recorrido:</p>
          <div class="archivo">
            <div><b>Prehistoria:</b> la voz, el ritmo del cuerpo y los primeros instrumentos fueron formas de comunicarse y de reunirse en comunidad.</div>
            <div><b>Civilizaciones antiguas:</b> la música se unió a rituales, ceremonias y celebraciones en muchas culturas del mundo.</div>
            <div><b>Siglo XX:</b> la radio y las grabaciones llevaron la música a todos los hogares y nacieron estilos que marcaron a generaciones de jóvenes.</div>
            <div><b>Hoy:</b> con las plataformas de streaming y los audífonos, los adolescentes llevan su banda sonora a todas partes.</div>
          </div>
        </div>
        <footer>
          <span><span class="etiqueta">historia</span><span class="etiqueta">cultura</span></span>
          <span>💬 <a href="#libro">Comentarios</a></span>
        </footer>
      </article>

      <article class="entrada" id="alerta">
        <header>
          <div class="fecha">📅 2 de noviembre de 2026 &nbsp;|&nbsp; ✎ Aviso importante</div>
          <h2>La música ayuda, pero no lo es todo</h2>
        </header>
        <div class="texto">
          <p>Escuchar música puede acompañar y aliviar, pero no reemplaza el apoyo profesional.</p>
          <div class="alerta">⚠️ <b>Ojo:</b> si te sientes triste, ansios@ o sin ganas durante mucho tiempo, habla con un adulto de confianza o con un profesional de la salud mental. Pedir ayuda es una señal de valentía.</div>
          <p>Más ideas en <a href="salud-mental.html">Salud mental</a> y <a href="guia-padres.html">Guía para padres</a>.</p>
        </div>
        <footer>
          <span><span class="etiqueta">ayuda</span><span class="etiqueta">salud mental</span></span>
          <span>💬 <a href="#libro">Comentarios</a></span>
        </footer>
      </article>

      <div class="caja" id="libro">
        <h2>✎ Libro de visitas</h2>
        <div class="in">
          <p>¡Déjanos tu mensaje! (se guarda solo en tu navegador)</p>
          <form id="form-libro" style="margin-top:6px;display:grid;gap:5px">
            <input id="nombre" placeholder="Tu apodo" maxlength="24" style="padding:4px;border:2px solid #00f0ff;font:inherit">
            <textarea id="mensaje" rows="3" placeholder="Escribe aquí..." maxlength="200" style="padding:4px;border:2px solid #00f0ff;font:inherit"></textarea>
            <button style="font:inherit;font-weight:bold;padding:4px;border:2px solid #00f0ff;background:linear-gradient(#ff2bd6,#6a1bff);color:#fff;text-shadow:0 0 6px #000;cursor:pointer;border-radius:4px">Firmar ♥</button>
          </form>
          <ul id="mensajes" style="margin-top:10px"></ul>
        </div>
      </div>

      <details class="fuentes" id="fuentes">
        <summary>📚 Fuentes y bibliografía (clic para abrir)</summary>
        <div class="in">
          <p>Consulta la lista completa de fuentes en la sección <a href="recursos.html">Recursos</a>.</p>
        </div>
      </details>

    </main>
  </div>

  <div class="pie">
    <div class="construccion"><span>🚧 Sitio en construcción 🚧</span></div>
    <p>© 2026 Música, Adolescentes y Salud Mental &nbsp;|&nbsp; Hecho con ♥ y mucha música</p>
    <p><a href="#inicio">↑ Volver arriba</a></p>
  </div>
</div>

<script>
  // Contador de visitas (solo local)
  (function(){
    var n = 1000;
    try{ n = (parseInt(localStorage.getItem('visitas'),10) || 1000) + 1; localStorage.setItem('visitas', n); }catch(e){}
    var s = String(n).padStart(6,'0');
    document.getElementById('contador').innerHTML = s.split('').map(function(d){return '<span>'+d+'</span>';}).join('');
  })();

  // Estado de ánimo
  document.querySelectorAll('.humor button').forEach(function(b){
    b.addEventListener('click', function(){
      document.getElementById('humor-msg').textContent = b.dataset.t;
      document.getElementById('estado-top').textContent = b.dataset.e;
    });
  });

  // Libro de visitas (guardado local)
  (function(){
    var lista = document.getElementById('mensajes');
    var datos = [];
    try{ datos = JSON.parse(localStorage.getItem('libro')||'[]'); }catch(e){}
    function pintar(){
      lista.innerHTML = '';
      if(!datos.length){ var li=document.createElement('li'); li.textContent='Aún no hay mensajes. ¡Sé el primero!'; lista.appendChild(li); return; }
      datos.slice().reverse().forEach(function(m){
        var li=document.createElement('li');
        var b=document.createElement('b'); b.textContent=m.n+': ';
        li.appendChild(b); li.appendChild(document.createTextNode(m.t));
        lista.appendChild(li);
      });
    }
    document.getElementById('form-libro').addEventListener('submit', function(e){
      e.preventDefault();
      var n=document.getElementById('nombre').value.trim()||'Anónim@';
      var t=document.getElementById('mensaje').value.trim();
      if(!t) return;
      datos.push({n:n,t:t});
      try{ localStorage.setItem('libro', JSON.stringify(datos)); }catch(e){}
      this.reset(); pintar();
    });
    pintar();
  })();

  // ===== Zona interactiva =====
  (function(){
    var KEY='estado-cyber';
    var st={tipo:null,mitos:[null,null,null,null],dias:[false,false,false,false,false,false,false]};
    try{var g=JSON.parse(localStorage.getItem(KEY)||'null'); if(g&&g.mitos&&g.dias){st=g;}}catch(e){}
    function guardar(){try{localStorage.setItem(KEY,JSON.stringify(st));}catch(e){}}
    function el(t,c,x){var e=document.createElement(t); if(c)e.className=c; if(x!==undefined)e.textContent=x; return e;}

    var rangos=[[0,'Novat@ del ritmo'],[1,'Explorador'],[4,'Oyente consciente'],[7,'Maestr@ del ritmo'],[9,'Leyenda cyberpunk']];
    function pintar(){
      var mitosOk=st.mitos.every(function(m){return m!==null;});
      var diasOk=st.dias.filter(Boolean).length;
      var n=(st.tipo?1:0)+(mitosOk?1:0)+diasOk;
      var r=rangos[0][1];
      rangos.forEach(function(x){ if(n>=x[0]) r=x[1]; });
      document.getElementById('prog-rango').textContent=r;
      document.getElementById('prog-barra').style.width=Math.round(n/9*100)+'%';
      document.getElementById('prog-n').textContent=n+' de 9 misiones';
      document.getElementById('reto-barra').style.width=Math.round(diasOk/7*100)+'%';
      document.getElementById('reto-n').textContent=diasOk+' de 7 días completados';
    }

    // ---- Test ----
    var preguntas=[
      {q:'1. Cuando estás estresad@, ¿qué haces con la música?',o:['Pongo algo suave para calmarme','Subo el ritmo con algo lleno de energía','La comparto o la escucho con alguien','Prefiero música sin letra o silencio']},
      {q:'2. Para estudiar o hacer tareas...',o:['Música tranquila de fondo','Una playlist movida para arrancar','Lo que esté sonando entre amigos','Instrumental o nada']},
      {q:'3. ¿Cómo descubres música nueva?',o:['Con playlists según mi estado de ánimo','Buscando canciones con mucho ritmo','Por amigos y redes sociales','Explorando géneros por mi cuenta']},
      {q:'4. Una canción te gusta cuando...',o:['me hace sentir paz','me dan ganas de moverme','la puedo cantar con otros','su melodía me ayuda a pensar']},
      {q:'5. Tu momento favorito para escuchar música',o:['Antes de dormir','Haciendo ejercicio o yendo al colegio','Con amigos o en una reunión','En un rato de calma a solas']}
    ];
    var letras=['a','b','c','d'];
    var tipos={
      a:{t:'🌿 Oyente Calmante',d:'Usas la música para bajar las revoluciones y sentirte en paz.',c:'Genial herramienta. Combínala con respiración y buen descanso, y si el malestar dura, habla con un adulto de confianza o un profesional.'},
      b:{t:'⚡ Oyente Energizante',d:'La música es tu combustible para activarte y moverte.',c:'Cuida el volumen y los tiempos con audífonos, y alterna con música más suave antes de dormir.'},
      c:{t:'🎤 Oyente Social',d:'Para ti la música es una forma de conectar con otras personas.',c:'Compartir música crea vínculos. Date también ratos a solas para notar qué te hace sentir cada canción.'},
      d:{t:'🧠 Oyente Concentrado',d:'Usas la música como herramienta para pensar y enfocarte.',c:'La música instrumental o a volumen bajo suele distraer menos. Haz pausas y comprueba si de verdad te ayuda a concentrarte.'}
    };
    var form=document.getElementById('test-form');
    preguntas.forEach(function(p,i){
      var d=el('div','pregunta'); d.appendChild(el('p','',p.q));
      p.o.forEach(function(txt,j){
        var l=el('label','op'); var inp=document.createElement('input');
        inp.type='radio'; inp.name='p'+i; inp.value=letras[j];
        l.appendChild(inp); l.appendChild(document.createTextNode(txt)); d.appendChild(l);
      });
      form.appendChild(d);
    });
    function mostrarRes(k){
      var r=document.getElementById('test-res'); r.innerHTML='';
      var tp=tipos[k];
      r.appendChild(el('h3','',tp.t)); r.appendChild(el('p','',tp.d));
      var c=el('p'); var b=el('b','','Consejo: '); c.appendChild(b); c.appendChild(document.createTextNode(tp.c)); r.appendChild(c);
      r.className='resultado ver';
    }
    document.getElementById('test-enviar').addEventListener('click',function(){
      var cuenta={a:0,b:0,c:0,d:0}, faltan=0;
      for(var i=0;i<preguntas.length;i++){
        var ch=form.querySelector('input[name=p'+i+']:checked');
        if(!ch) faltan++; else cuenta[ch.value]++;
      }
      var av=document.getElementById('test-aviso');
      if(faltan){ av.textContent='Te faltan '+faltan+' pregunta(s) por responder.'; return; }
      av.textContent='';
      var mejor='a'; letras.forEach(function(k){ if(cuenta[k]>cuenta[mejor]) mejor=k; });
      st.tipo=mejor; guardar(); mostrarRes(mejor); pintar();
    });
    document.getElementById('test-repetir').addEventListener('click',function(){
      form.reset(); st.tipo=null; guardar();
      document.getElementById('test-res').className='resultado';
      document.getElementById('test-aviso').textContent=''; pintar();
    });
    if(st.tipo && tipos[st.tipo]) mostrarRes(st.tipo);

    // ---- Mitos ----
    var mitos=[
      {a:'Escuchar música mientras estudias siempre ayuda a concentrarte.',r:'mito',e:'Depende de la tarea y de la persona. Las letras pueden distraer al leer o escribir; probar música instrumental o a volumen bajo suele ser buena idea.'},
      {a:'Escuchar música triste siempre empeora el ánimo.',r:'mito',e:'Para muchas personas ayuda a poner en palabras lo que sienten. Lo que conviene vigilar es quedarse horas dándole vueltas a lo mismo.'},
      {a:'Usar audífonos a volumen alto durante mucho tiempo puede dañar la audición.',r:'verdad',e:'Por eso se recomienda bajar el volumen y hacer pausas para descansar el oído.'},
      {a:'La música puede reemplazar la ayuda de un profesional de salud mental.',r:'mito',e:'La música acompaña, pero no sustituye. Si el malestar dura, habla con un adulto de confianza o con un profesional.'}
    ];
    var lista=document.getElementById('mitos-lista');
    var refs=[];
    function revelar(i){
      var m=mitos[i], x=refs[i], ok=(st.mitos[i]===m.r);
      x.b1.disabled=true; x.b2.disabled=true;
      x.ex.textContent=(ok?'✔ ¡Correcto! ':'✖ Casi. La respuesta era "'+(m.r==='mito'?'es un mito':'es verdad')+'". ')+m.e;
      x.ex.className='expl ver'+(ok?'':' mal');
    }
    mitos.forEach(function(m,i){
      var d=el('div','mito'); d.appendChild(el('div','afirm','“'+m.a+'”'));
      var bs=el('div','botones');
      var b1=el('button','btn-neon btn-sec','Es un mito'); b1.type='button';
      var b2=el('button','btn-neon btn-sec','Es verdad'); b2.type='button';
      b1.addEventListener('click',function(){ st.mitos[i]='mito'; guardar(); revelar(i); pintar(); });
      b2.addEventListener('click',function(){ st.mitos[i]='verdad'; guardar(); revelar(i); pintar(); });
      bs.appendChild(b1); bs.appendChild(b2); d.appendChild(bs);
      var ex=el('div','expl'); d.appendChild(ex);
      lista.appendChild(d); refs.push({b1:b1,b2:b2,ex:ex});
      if(st.mitos[i]) revelar(i);
    });

    // ---- Reto 7 dias ----
    var dias=[
      'Escribe cómo te sientes antes y después de escuchar tu canción favorita.',
      'Escucha 15 minutos de música sin hacer nada más. Solo escucha.',
      'Prueba música instrumental mientras estudias y anota si te concentras mejor.',
      'Baja un poco el volumen y fíjate cuánto tiempo usas audífonos.',
      'Comparte con un amigo o familiar una canción que te haya ayudado.',
      'Descubre un género que normalmente no escuchas.',
      'Crea una mini playlist para calmarte y otra para animarte.'
    ];
    var rl=document.getElementById('reto-lista');
    dias.forEach(function(t,i){
      var l=el('label','reto-dia'+(st.dias[i]?' hecho':''));
      var c=document.createElement('input'); c.type='checkbox'; c.checked=!!st.dias[i];
      c.addEventListener('change',function(){
        st.dias[i]=c.checked; l.className='reto-dia'+(c.checked?' hecho':''); guardar(); pintar();
      });
      l.appendChild(c); l.appendChild(el('span','dia','Día '+(i+1))); l.appendChild(el('span','',t));
      rl.appendChild(l);
    });

    document.getElementById('prog-reset').addEventListener('click',function(){
      try{localStorage.removeItem(KEY);}catch(e){}
      location.reload();
    });
    pintar();
  })();

  // ===== Creador de playlist =====
  (function(){
    var KEY='playlists-cyber';
    var lista=[];
    try{ lista=JSON.parse(localStorage.getItem(KEY)||'[]'); if(!Array.isArray(lista)) lista=[]; }catch(e){ lista=[]; }
    function guardarLista(){ try{ localStorage.setItem(KEY,JSON.stringify(lista)); }catch(e){} }
    function el(t,c,x){ var e=document.createElement(t); if(c) e.className=c; if(x!==undefined) e.textContent=x; return e; }
    function msg(t){ document.getElementById('pl-msg').textContent=t; }

    var actividades={
      estudiar:{n:'Estudiar o hacer tareas',b:[
        {t:'Calentamiento',r:'Ritmo medio-lento. Poca letra, para entrar en ambiente.',q:'lo-fi instrumental para estudiar'},
        {t:'Centro',r:'Ritmo lento y constante. Instrumental o volumen bajo para no distraerte.',q:'piano instrumental para concentración'},
        {t:'Cierre',r:'Ritmo suave para descansar la mente.',q:'música relajante instrumental'}]},
      ejercicio:{n:'Hacer ejercicio',b:[
        {t:'Calentamiento',r:'Ritmo medio y constante para entrar en calor.',q:'playlist calentamiento ejercicio'},
        {t:'Centro',r:'Ritmo rápido y con energía. Cuida el volumen.',q:'playlist para entrenar energía'},
        {t:'Cierre',r:'Ritmo lento para enfriar y estirar.',q:'música para estiramiento y relajación'}]},
      dormir:{n:'Prepararme para dormir',b:[
        {t:'Calentamiento',r:'Ritmo lento para bajar las revoluciones.',q:'música suave para relajarse antes de dormir'},
        {t:'Centro',r:'Muy lento, sin letra y con volumen bajo.',q:'ambient para dormir'},
        {t:'Cierre',r:'Sonidos suaves. Usa un temporizador para que se apague sola.',q:'sonidos relajantes para dormir'}]},
      amigos:{n:'Estar con amigos',b:[
        {t:'Calentamiento',r:'Ritmo medio, con canciones que todos conozcan.',q:'playlist para reunirse con amigos'},
        {t:'Centro',r:'Ritmo rápido, para cantar y bailar en grupo.',q:'música para bailar y cantar en grupo'},
        {t:'Cierre',r:'Ritmo medio-lento para cerrar el plan.',q:'canciones para cantar juntos'}]},
      camino:{n:'Ir de camino al colegio',b:[
        {t:'Calentamiento',r:'Ritmo medio, para arrancar el día.',q:'playlist para ir al colegio'},
        {t:'Centro',r:'Ritmo medio-rápido para animarte. Ojo con el volumen en la calle.',q:'pop ritmo medio para el camino'},
        {t:'Cierre',r:'Ritmo suave para llegar tranquil@.',q:'música tranquila para el camino'}]}
    };
    var perfiles={a:'Calmante',b:'Energizante',c:'Social',d:'Concentrado'};
    var perfilKw={a:'acústica',b:'con ritmo',c:'para compartir',d:'instrumental'};
    var animos={contentx:'Content@',tranquilx:'Tranquil@',tristx:'Trist@',estresadx:'Estresad@'};

    var actual=null; // receta mostrada

    function tipoDelTest(){
      try{ var g=JSON.parse(localStorage.getItem('estado-cyber')||'null'); if(g&&g.tipo) return g.tipo; }catch(e){}
      return '';
    }
    var selPerfil=document.getElementById('pl-perfil');
    var selAnimo=document.getElementById('pl-animo');
    var selAct=document.getElementById('pl-actividad');
    if(tipoDelTest()) selPerfil.value=tipoDelTest();
    document.querySelectorAll('.humor button').forEach(function(b){
      b.addEventListener('click',function(){ if(animos[b.dataset.e]) selAnimo.value=b.dataset.e; });
    });

    function enlaces(q){
      var e=encodeURIComponent(q), p=el('p');
      var defs=[['Spotify','https://open.spotify.com/search/'+e],['YouTube Music','https://music.youtube.com/search?q='+e],['YouTube','https://www.youtube.com/results?search_query='+e]];
      defs.forEach(function(d){
        var a=el('a','btn-link','🔍 '+d[0]); a.href=d[1]; a.target='_blank'; a.rel='noopener noreferrer'; p.appendChild(a);
      });
      return p;
    }

    function generar(){
      if(!selPerfil.value && tipoDelTest()) selPerfil.value=tipoDelTest();
      var act=selAct.value, ani=selAnimo.value, per=selPerfil.value;
      var base=actividades[act];
      var bl=base.b.map(function(x){ return {t:x.t,r:x.r,q:x.q}; });
      var notas=['Cuida el volumen: mantenlo moderado y haz pausas con los audífonos.'];

      if(per && act!=='dormir') bl[0].q+=' '+perfilKw[per];
      if(per) notas.push('Tu perfil es '+perfiles[per]+': por eso añadimos la palabra clave "'+perfilKw[per]+'" en la búsqueda del primer bloque.');

      if(ani==='contentx'){ bl[1].r+=' Aprovecha tu buen ánimo: puedes subir un poco el ritmo.'; }
      if(ani==='tranquilx'){ notas.push('Mantén una mezcla suave para conservar esa calma.'); }
      if(ani==='tristx'){
        bl[0].r='Empieza con música que te acompañe: no pasa nada por reconocer lo que sientes.'; bl[0].q='música acústica emotiva';
        bl[2].r='Termina con algo de ritmo medio que te dé un poco de ánimo.'; bl[2].q='canciones suaves con mensaje esperanzador';
        notas.push('Si te sientes trist@ durante muchos días, habla con un adulto de confianza o con un profesional.');
      }
      if(ani==='estresadx'){
        bl[1].r='Ritmo lento, sin letra y con volumen bajo.'; bl[1].q='música relajante sin letra para el estrés';
        notas.push('Respira hondo y haz una pausa de pantallas entre bloques.');
      }

      actual={act:act,ani:ani,per:per,bloques:bl};
      var r=document.getElementById('pl-receta'); r.innerHTML='';
      r.appendChild(el('p','', 'Receta para: '+base.n+' · ánimo '+animos[ani]+(per?' · perfil '+perfiles[per]:'')));
      bl.forEach(function(x,i){
        var d=el('div','bloque');
        d.appendChild(el('h4','',(i+1)+' · '+x.t));
        d.appendChild(el('p','',x.r));
        d.appendChild(enlaces(x.q));
        var ta=document.createElement('textarea'); ta.rows=3; ta.maxLength=1500; ta.className='pl-ta';
        ta.placeholder='Tus canciones de este bloque (una por línea): Título - Artista';
        d.appendChild(ta); r.appendChild(d);
      });
      var nd=el('div','destacada'); nd.appendChild(el('b','','💡 Tips'));
      var ul=el('ul'); ul.style.marginLeft='18px';
      notas.forEach(function(n){ ul.appendChild(el('li','',n)); }); nd.appendChild(ul); r.appendChild(nd);
      document.getElementById('pl-fila').style.display='flex';
      document.getElementById('pl-nombre').value='';
      msg('');
    }
    document.getElementById('pl-generar').addEventListener('click',generar);

    function lineas(txt){
      return txt.split('\n').map(function(l){return l.trim().slice(0,100);}).filter(Boolean).slice(0,30);
    }
    document.getElementById('pl-guardar').addEventListener('click',function(){
      if(!actual) return;
      var tas=document.querySelectorAll('#pl-receta .pl-ta'), total=0;
      var bloques=actual.bloques.map(function(b,i){
        var c=lineas(tas[i]?tas[i].value:''); total+=c.length; return {t:b.t,c:c};
      });
      if(!total){ msg('Agrega al menos una canción antes de guardar.'); return; }
      var nombre=document.getElementById('pl-nombre').value.trim()||'Mi playlist';
      lista.push({nombre:nombre.slice(0,30),act:actual.act,ani:actual.ani,per:actual.per,bloques:bloques});
      guardarLista(); pintarLista(); msg('¡Playlist guardada! La encuentras abajo en "Mis playlists".');
    });

    function textoDe(pl){
      var t='Playlist: '+pl.nombre+'\nActividad: '+actividades[pl.act].n+'\nÁnimo: '+animos[pl.ani]+(pl.per?'\nPerfil: '+perfiles[pl.per]:'')+'\n';
      pl.bloques.forEach(function(b){
        t+='\n== '+b.t+' ==\n';
        if(!b.c.length) t+='(sin canciones)\n';
        b.c.forEach(function(c,i){ t+=(i+1)+'. '+c+'\n'; });
      });
      return t;
    }
    function copiar(txt){
      function respaldo(){
        var ta=document.createElement('textarea'); ta.value=txt; document.body.appendChild(ta); ta.select();
        var ok=false; try{ ok=document.execCommand('copy'); }catch(e){}
        document.body.removeChild(ta); msg(ok?'Copiada al portapapeles.':'No se pudo copiar. Usa Descargar .txt.');
      }
      if(navigator.clipboard && navigator.clipboard.writeText){
        navigator.clipboard.writeText(txt).then(function(){ msg('Copiada al portapapeles.'); },respaldo);
      } else respaldo();
    }
    function descargar(pl){
      var blob=new Blob([textoDe(pl)],{type:'text/plain;charset=utf-8'});
      var a=document.createElement('a'); a.href=URL.createObjectURL(blob);
      a.download=(pl.nombre.replace(/[^a-zA-Z0-9áéíóúñÁÉÍÓÚÑ _-]/g,'').trim()||'playlist')+'.txt';
      document.body.appendChild(a); a.click(); document.body.removeChild(a);
      setTimeout(function(){ URL.revokeObjectURL(a.href); },1000);
    }
    function pintarLista(){
      var c=document.getElementById('pl-mias'); c.innerHTML='';
      if(!lista.length){ c.appendChild(el('p','','Aún no has guardado ninguna playlist.')); return; }
      lista.forEach(function(pl,idx){
        var d=el('div','pl-guardada');
        d.appendChild(el('strong','',pl.nombre));
        d.appendChild(el('small','',actividades[pl.act].n+' · ánimo '+animos[pl.ani]+(pl.per?' · perfil '+perfiles[pl.per]:'')));
        pl.bloques.forEach(function(b){
          if(!b.c.length) return;
          d.appendChild(el('b','',b.t));
          var ul=el('ul'); b.c.forEach(function(x){ ul.appendChild(el('li','',x)); }); d.appendChild(ul);
        });
        var acc=el('div','acc');
        var b1=el('button','btn-neon btn-sec','Copiar'); b1.type='button'; b1.addEventListener('click',function(){ copiar(textoDe(pl)); });
        var b2=el('button','btn-neon btn-sec','Descargar .txt'); b2.type='button'; b2.addEventListener('click',function(){ descargar(pl); });
        var b3=el('button','btn-neon btn-sec','Borrar'); b3.type='button'; b3.addEventListener('click',function(){ lista.splice(idx,1); guardarLista(); pintarLista(); });
        acc.appendChild(b1); acc.appendChild(b2); acc.appendChild(b3); d.appendChild(acc);
        c.appendChild(d);
      });
    }
    pintarLista();
  })();
</script>
</body>
</html>
