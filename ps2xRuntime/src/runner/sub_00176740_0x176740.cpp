#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176740
// Address: 0x176740 - 0x176d30
void sub_00176740_0x176740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176740_0x176740");
#endif

    switch (ctx->pc) {
        case 0x176740u: goto label_176740;
        case 0x176744u: goto label_176744;
        case 0x176748u: goto label_176748;
        case 0x17674cu: goto label_17674c;
        case 0x176750u: goto label_176750;
        case 0x176754u: goto label_176754;
        case 0x176758u: goto label_176758;
        case 0x17675cu: goto label_17675c;
        case 0x176760u: goto label_176760;
        case 0x176764u: goto label_176764;
        case 0x176768u: goto label_176768;
        case 0x17676cu: goto label_17676c;
        case 0x176770u: goto label_176770;
        case 0x176774u: goto label_176774;
        case 0x176778u: goto label_176778;
        case 0x17677cu: goto label_17677c;
        case 0x176780u: goto label_176780;
        case 0x176784u: goto label_176784;
        case 0x176788u: goto label_176788;
        case 0x17678cu: goto label_17678c;
        case 0x176790u: goto label_176790;
        case 0x176794u: goto label_176794;
        case 0x176798u: goto label_176798;
        case 0x17679cu: goto label_17679c;
        case 0x1767a0u: goto label_1767a0;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767a8u: goto label_1767a8;
        case 0x1767acu: goto label_1767ac;
        case 0x1767b0u: goto label_1767b0;
        case 0x1767b4u: goto label_1767b4;
        case 0x1767b8u: goto label_1767b8;
        case 0x1767bcu: goto label_1767bc;
        case 0x1767c0u: goto label_1767c0;
        case 0x1767c4u: goto label_1767c4;
        case 0x1767c8u: goto label_1767c8;
        case 0x1767ccu: goto label_1767cc;
        case 0x1767d0u: goto label_1767d0;
        case 0x1767d4u: goto label_1767d4;
        case 0x1767d8u: goto label_1767d8;
        case 0x1767dcu: goto label_1767dc;
        case 0x1767e0u: goto label_1767e0;
        case 0x1767e4u: goto label_1767e4;
        case 0x1767e8u: goto label_1767e8;
        case 0x1767ecu: goto label_1767ec;
        case 0x1767f0u: goto label_1767f0;
        case 0x1767f4u: goto label_1767f4;
        case 0x1767f8u: goto label_1767f8;
        case 0x1767fcu: goto label_1767fc;
        case 0x176800u: goto label_176800;
        case 0x176804u: goto label_176804;
        case 0x176808u: goto label_176808;
        case 0x17680cu: goto label_17680c;
        case 0x176810u: goto label_176810;
        case 0x176814u: goto label_176814;
        case 0x176818u: goto label_176818;
        case 0x17681cu: goto label_17681c;
        case 0x176820u: goto label_176820;
        case 0x176824u: goto label_176824;
        case 0x176828u: goto label_176828;
        case 0x17682cu: goto label_17682c;
        case 0x176830u: goto label_176830;
        case 0x176834u: goto label_176834;
        case 0x176838u: goto label_176838;
        case 0x17683cu: goto label_17683c;
        case 0x176840u: goto label_176840;
        case 0x176844u: goto label_176844;
        case 0x176848u: goto label_176848;
        case 0x17684cu: goto label_17684c;
        case 0x176850u: goto label_176850;
        case 0x176854u: goto label_176854;
        case 0x176858u: goto label_176858;
        case 0x17685cu: goto label_17685c;
        case 0x176860u: goto label_176860;
        case 0x176864u: goto label_176864;
        case 0x176868u: goto label_176868;
        case 0x17686cu: goto label_17686c;
        case 0x176870u: goto label_176870;
        case 0x176874u: goto label_176874;
        case 0x176878u: goto label_176878;
        case 0x17687cu: goto label_17687c;
        case 0x176880u: goto label_176880;
        case 0x176884u: goto label_176884;
        case 0x176888u: goto label_176888;
        case 0x17688cu: goto label_17688c;
        case 0x176890u: goto label_176890;
        case 0x176894u: goto label_176894;
        case 0x176898u: goto label_176898;
        case 0x17689cu: goto label_17689c;
        case 0x1768a0u: goto label_1768a0;
        case 0x1768a4u: goto label_1768a4;
        case 0x1768a8u: goto label_1768a8;
        case 0x1768acu: goto label_1768ac;
        case 0x1768b0u: goto label_1768b0;
        case 0x1768b4u: goto label_1768b4;
        case 0x1768b8u: goto label_1768b8;
        case 0x1768bcu: goto label_1768bc;
        case 0x1768c0u: goto label_1768c0;
        case 0x1768c4u: goto label_1768c4;
        case 0x1768c8u: goto label_1768c8;
        case 0x1768ccu: goto label_1768cc;
        case 0x1768d0u: goto label_1768d0;
        case 0x1768d4u: goto label_1768d4;
        case 0x1768d8u: goto label_1768d8;
        case 0x1768dcu: goto label_1768dc;
        case 0x1768e0u: goto label_1768e0;
        case 0x1768e4u: goto label_1768e4;
        case 0x1768e8u: goto label_1768e8;
        case 0x1768ecu: goto label_1768ec;
        case 0x1768f0u: goto label_1768f0;
        case 0x1768f4u: goto label_1768f4;
        case 0x1768f8u: goto label_1768f8;
        case 0x1768fcu: goto label_1768fc;
        case 0x176900u: goto label_176900;
        case 0x176904u: goto label_176904;
        case 0x176908u: goto label_176908;
        case 0x17690cu: goto label_17690c;
        case 0x176910u: goto label_176910;
        case 0x176914u: goto label_176914;
        case 0x176918u: goto label_176918;
        case 0x17691cu: goto label_17691c;
        case 0x176920u: goto label_176920;
        case 0x176924u: goto label_176924;
        case 0x176928u: goto label_176928;
        case 0x17692cu: goto label_17692c;
        case 0x176930u: goto label_176930;
        case 0x176934u: goto label_176934;
        case 0x176938u: goto label_176938;
        case 0x17693cu: goto label_17693c;
        case 0x176940u: goto label_176940;
        case 0x176944u: goto label_176944;
        case 0x176948u: goto label_176948;
        case 0x17694cu: goto label_17694c;
        case 0x176950u: goto label_176950;
        case 0x176954u: goto label_176954;
        case 0x176958u: goto label_176958;
        case 0x17695cu: goto label_17695c;
        case 0x176960u: goto label_176960;
        case 0x176964u: goto label_176964;
        case 0x176968u: goto label_176968;
        case 0x17696cu: goto label_17696c;
        case 0x176970u: goto label_176970;
        case 0x176974u: goto label_176974;
        case 0x176978u: goto label_176978;
        case 0x17697cu: goto label_17697c;
        case 0x176980u: goto label_176980;
        case 0x176984u: goto label_176984;
        case 0x176988u: goto label_176988;
        case 0x17698cu: goto label_17698c;
        case 0x176990u: goto label_176990;
        case 0x176994u: goto label_176994;
        case 0x176998u: goto label_176998;
        case 0x17699cu: goto label_17699c;
        case 0x1769a0u: goto label_1769a0;
        case 0x1769a4u: goto label_1769a4;
        case 0x1769a8u: goto label_1769a8;
        case 0x1769acu: goto label_1769ac;
        case 0x1769b0u: goto label_1769b0;
        case 0x1769b4u: goto label_1769b4;
        case 0x1769b8u: goto label_1769b8;
        case 0x1769bcu: goto label_1769bc;
        case 0x1769c0u: goto label_1769c0;
        case 0x1769c4u: goto label_1769c4;
        case 0x1769c8u: goto label_1769c8;
        case 0x1769ccu: goto label_1769cc;
        case 0x1769d0u: goto label_1769d0;
        case 0x1769d4u: goto label_1769d4;
        case 0x1769d8u: goto label_1769d8;
        case 0x1769dcu: goto label_1769dc;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769e4u: goto label_1769e4;
        case 0x1769e8u: goto label_1769e8;
        case 0x1769ecu: goto label_1769ec;
        case 0x1769f0u: goto label_1769f0;
        case 0x1769f4u: goto label_1769f4;
        case 0x1769f8u: goto label_1769f8;
        case 0x1769fcu: goto label_1769fc;
        case 0x176a00u: goto label_176a00;
        case 0x176a04u: goto label_176a04;
        case 0x176a08u: goto label_176a08;
        case 0x176a0cu: goto label_176a0c;
        case 0x176a10u: goto label_176a10;
        case 0x176a14u: goto label_176a14;
        case 0x176a18u: goto label_176a18;
        case 0x176a1cu: goto label_176a1c;
        case 0x176a20u: goto label_176a20;
        case 0x176a24u: goto label_176a24;
        case 0x176a28u: goto label_176a28;
        case 0x176a2cu: goto label_176a2c;
        case 0x176a30u: goto label_176a30;
        case 0x176a34u: goto label_176a34;
        case 0x176a38u: goto label_176a38;
        case 0x176a3cu: goto label_176a3c;
        case 0x176a40u: goto label_176a40;
        case 0x176a44u: goto label_176a44;
        case 0x176a48u: goto label_176a48;
        case 0x176a4cu: goto label_176a4c;
        case 0x176a50u: goto label_176a50;
        case 0x176a54u: goto label_176a54;
        case 0x176a58u: goto label_176a58;
        case 0x176a5cu: goto label_176a5c;
        case 0x176a60u: goto label_176a60;
        case 0x176a64u: goto label_176a64;
        case 0x176a68u: goto label_176a68;
        case 0x176a6cu: goto label_176a6c;
        case 0x176a70u: goto label_176a70;
        case 0x176a74u: goto label_176a74;
        case 0x176a78u: goto label_176a78;
        case 0x176a7cu: goto label_176a7c;
        case 0x176a80u: goto label_176a80;
        case 0x176a84u: goto label_176a84;
        case 0x176a88u: goto label_176a88;
        case 0x176a8cu: goto label_176a8c;
        case 0x176a90u: goto label_176a90;
        case 0x176a94u: goto label_176a94;
        case 0x176a98u: goto label_176a98;
        case 0x176a9cu: goto label_176a9c;
        case 0x176aa0u: goto label_176aa0;
        case 0x176aa4u: goto label_176aa4;
        case 0x176aa8u: goto label_176aa8;
        case 0x176aacu: goto label_176aac;
        case 0x176ab0u: goto label_176ab0;
        case 0x176ab4u: goto label_176ab4;
        case 0x176ab8u: goto label_176ab8;
        case 0x176abcu: goto label_176abc;
        case 0x176ac0u: goto label_176ac0;
        case 0x176ac4u: goto label_176ac4;
        case 0x176ac8u: goto label_176ac8;
        case 0x176accu: goto label_176acc;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ad4u: goto label_176ad4;
        case 0x176ad8u: goto label_176ad8;
        case 0x176adcu: goto label_176adc;
        case 0x176ae0u: goto label_176ae0;
        case 0x176ae4u: goto label_176ae4;
        case 0x176ae8u: goto label_176ae8;
        case 0x176aecu: goto label_176aec;
        case 0x176af0u: goto label_176af0;
        case 0x176af4u: goto label_176af4;
        case 0x176af8u: goto label_176af8;
        case 0x176afcu: goto label_176afc;
        case 0x176b00u: goto label_176b00;
        case 0x176b04u: goto label_176b04;
        case 0x176b08u: goto label_176b08;
        case 0x176b0cu: goto label_176b0c;
        case 0x176b10u: goto label_176b10;
        case 0x176b14u: goto label_176b14;
        case 0x176b18u: goto label_176b18;
        case 0x176b1cu: goto label_176b1c;
        case 0x176b20u: goto label_176b20;
        case 0x176b24u: goto label_176b24;
        case 0x176b28u: goto label_176b28;
        case 0x176b2cu: goto label_176b2c;
        case 0x176b30u: goto label_176b30;
        case 0x176b34u: goto label_176b34;
        case 0x176b38u: goto label_176b38;
        case 0x176b3cu: goto label_176b3c;
        case 0x176b40u: goto label_176b40;
        case 0x176b44u: goto label_176b44;
        case 0x176b48u: goto label_176b48;
        case 0x176b4cu: goto label_176b4c;
        case 0x176b50u: goto label_176b50;
        case 0x176b54u: goto label_176b54;
        case 0x176b58u: goto label_176b58;
        case 0x176b5cu: goto label_176b5c;
        case 0x176b60u: goto label_176b60;
        case 0x176b64u: goto label_176b64;
        case 0x176b68u: goto label_176b68;
        case 0x176b6cu: goto label_176b6c;
        case 0x176b70u: goto label_176b70;
        case 0x176b74u: goto label_176b74;
        case 0x176b78u: goto label_176b78;
        case 0x176b7cu: goto label_176b7c;
        case 0x176b80u: goto label_176b80;
        case 0x176b84u: goto label_176b84;
        case 0x176b88u: goto label_176b88;
        case 0x176b8cu: goto label_176b8c;
        case 0x176b90u: goto label_176b90;
        case 0x176b94u: goto label_176b94;
        case 0x176b98u: goto label_176b98;
        case 0x176b9cu: goto label_176b9c;
        case 0x176ba0u: goto label_176ba0;
        case 0x176ba4u: goto label_176ba4;
        case 0x176ba8u: goto label_176ba8;
        case 0x176bacu: goto label_176bac;
        case 0x176bb0u: goto label_176bb0;
        case 0x176bb4u: goto label_176bb4;
        case 0x176bb8u: goto label_176bb8;
        case 0x176bbcu: goto label_176bbc;
        case 0x176bc0u: goto label_176bc0;
        case 0x176bc4u: goto label_176bc4;
        case 0x176bc8u: goto label_176bc8;
        case 0x176bccu: goto label_176bcc;
        case 0x176bd0u: goto label_176bd0;
        case 0x176bd4u: goto label_176bd4;
        case 0x176bd8u: goto label_176bd8;
        case 0x176bdcu: goto label_176bdc;
        case 0x176be0u: goto label_176be0;
        case 0x176be4u: goto label_176be4;
        case 0x176be8u: goto label_176be8;
        case 0x176becu: goto label_176bec;
        case 0x176bf0u: goto label_176bf0;
        case 0x176bf4u: goto label_176bf4;
        case 0x176bf8u: goto label_176bf8;
        case 0x176bfcu: goto label_176bfc;
        case 0x176c00u: goto label_176c00;
        case 0x176c04u: goto label_176c04;
        case 0x176c08u: goto label_176c08;
        case 0x176c0cu: goto label_176c0c;
        case 0x176c10u: goto label_176c10;
        case 0x176c14u: goto label_176c14;
        case 0x176c18u: goto label_176c18;
        case 0x176c1cu: goto label_176c1c;
        case 0x176c20u: goto label_176c20;
        case 0x176c24u: goto label_176c24;
        case 0x176c28u: goto label_176c28;
        case 0x176c2cu: goto label_176c2c;
        case 0x176c30u: goto label_176c30;
        case 0x176c34u: goto label_176c34;
        case 0x176c38u: goto label_176c38;
        case 0x176c3cu: goto label_176c3c;
        case 0x176c40u: goto label_176c40;
        case 0x176c44u: goto label_176c44;
        case 0x176c48u: goto label_176c48;
        case 0x176c4cu: goto label_176c4c;
        case 0x176c50u: goto label_176c50;
        case 0x176c54u: goto label_176c54;
        case 0x176c58u: goto label_176c58;
        case 0x176c5cu: goto label_176c5c;
        case 0x176c60u: goto label_176c60;
        case 0x176c64u: goto label_176c64;
        case 0x176c68u: goto label_176c68;
        case 0x176c6cu: goto label_176c6c;
        case 0x176c70u: goto label_176c70;
        case 0x176c74u: goto label_176c74;
        case 0x176c78u: goto label_176c78;
        case 0x176c7cu: goto label_176c7c;
        case 0x176c80u: goto label_176c80;
        case 0x176c84u: goto label_176c84;
        case 0x176c88u: goto label_176c88;
        case 0x176c8cu: goto label_176c8c;
        case 0x176c90u: goto label_176c90;
        case 0x176c94u: goto label_176c94;
        case 0x176c98u: goto label_176c98;
        case 0x176c9cu: goto label_176c9c;
        case 0x176ca0u: goto label_176ca0;
        case 0x176ca4u: goto label_176ca4;
        case 0x176ca8u: goto label_176ca8;
        case 0x176cacu: goto label_176cac;
        case 0x176cb0u: goto label_176cb0;
        case 0x176cb4u: goto label_176cb4;
        case 0x176cb8u: goto label_176cb8;
        case 0x176cbcu: goto label_176cbc;
        case 0x176cc0u: goto label_176cc0;
        case 0x176cc4u: goto label_176cc4;
        case 0x176cc8u: goto label_176cc8;
        case 0x176cccu: goto label_176ccc;
        case 0x176cd0u: goto label_176cd0;
        case 0x176cd4u: goto label_176cd4;
        case 0x176cd8u: goto label_176cd8;
        case 0x176cdcu: goto label_176cdc;
        case 0x176ce0u: goto label_176ce0;
        case 0x176ce4u: goto label_176ce4;
        case 0x176ce8u: goto label_176ce8;
        case 0x176cecu: goto label_176cec;
        case 0x176cf0u: goto label_176cf0;
        case 0x176cf4u: goto label_176cf4;
        case 0x176cf8u: goto label_176cf8;
        case 0x176cfcu: goto label_176cfc;
        case 0x176d00u: goto label_176d00;
        case 0x176d04u: goto label_176d04;
        case 0x176d08u: goto label_176d08;
        case 0x176d0cu: goto label_176d0c;
        case 0x176d10u: goto label_176d10;
        case 0x176d14u: goto label_176d14;
        case 0x176d18u: goto label_176d18;
        case 0x176d1cu: goto label_176d1c;
        case 0x176d20u: goto label_176d20;
        case 0x176d24u: goto label_176d24;
        case 0x176d28u: goto label_176d28;
        case 0x176d2cu: goto label_176d2c;
        default: break;
    }

    ctx->pc = 0x176740u;

label_176740:
    // 0x176740: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_176744:
    // 0x176744: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x176744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_176748:
    // 0x176748: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x176748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_17674c:
    // 0x17674c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_176750:
    // 0x176750: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x176750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_176754:
    // 0x176754: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_176758:
    // 0x176758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17675c:
    // 0x17675c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17675cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_176760:
    // 0x176760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176764:
    // 0x176764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176768:
    // 0x176768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17676c:
    // 0x17676c: 0x8383862c  lb          $v1, -0x79D4($gp)
    ctx->pc = 0x17676cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936108)));
label_176770:
    // 0x176770: 0x14600111  bnez        $v1, . + 4 + (0x111 << 2)
label_176774:
    if (ctx->pc == 0x176774u) {
        ctx->pc = 0x176778u;
        goto label_176778;
    }
    ctx->pc = 0x176770u;
    {
        const bool branch_taken_0x176770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176770) {
            ctx->pc = 0x176BB8u;
            goto label_176bb8;
        }
    }
    ctx->pc = 0x176778u;
label_176778:
    // 0x176778: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_17677c:
    // 0x17677c: 0x3c080082  lui         $t0, 0x82
    ctx->pc = 0x17677cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)130 << 16));
label_176780:
    // 0x176780: 0x2463d0b0  addiu       $v1, $v1, -0x2F50
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955184));
label_176784:
    // 0x176784: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x176784u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_176788:
    // 0x176788: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x176788u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_17678c:
    // 0x17678c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x17678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176790:
    // 0x176790: 0x2508cd90  addiu       $t0, $t0, -0x3270
    ctx->pc = 0x176790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954384));
label_176794:
    // 0x176794: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176794u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176798:
    // 0x176798: 0x3c050082  lui         $a1, 0x82
    ctx->pc = 0x176798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)130 << 16));
label_17679c:
    // 0x17679c: 0x3c140082  lui         $s4, 0x82
    ctx->pc = 0x17679cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)130 << 16));
label_1767a0:
    // 0x1767a0: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1767a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
label_1767a4:
    // 0x1767a4: 0x3c120082  lui         $s2, 0x82
    ctx->pc = 0x1767a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)130 << 16));
label_1767a8:
    // 0x1767a8: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1767a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
label_1767ac:
    // 0x1767ac: 0x3c100082  lui         $s0, 0x82
    ctx->pc = 0x1767acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)130 << 16));
label_1767b0:
    // 0x1767b0: 0x3c190041  lui         $t9, 0x41
    ctx->pc = 0x1767b0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65 << 16));
label_1767b4:
    // 0x1767b4: 0x3c180082  lui         $t8, 0x82
    ctx->pc = 0x1767b4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)130 << 16));
label_1767b8:
    // 0x1767b8: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x1767b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
label_1767bc:
    // 0x1767bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1767bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_1767c0:
    // 0x1767c0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1767c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_1767c4:
    // 0x1767c4: 0x24c6d0c0  addiu       $a2, $a2, -0x2F40
    ctx->pc = 0x1767c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955200));
label_1767c8:
    // 0x1767c8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1767c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1767cc:
    // 0x1767cc: 0x3c0f0041  lui         $t7, 0x41
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65 << 16));
label_1767d0:
    // 0x1767d0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1767d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1767d4:
    // 0x1767d4: 0x3c0e0082  lui         $t6, 0x82
    ctx->pc = 0x1767d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)130 << 16));
label_1767d8:
    // 0x1767d8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1767d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1767dc:
    // 0x1767dc: 0x26b5ce14  addiu       $s5, $s5, -0x31EC
    ctx->pc = 0x1767dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954516));
label_1767e0:
    // 0x1767e0: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x1767e0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
label_1767e4:
    // 0x1767e4: 0x3c0c0082  lui         $t4, 0x82
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)130 << 16));
label_1767e8:
    // 0x1767e8: 0x3c0b0041  lui         $t3, 0x41
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65 << 16));
label_1767ec:
    // 0x1767ec: 0x3c0a0082  lui         $t2, 0x82
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)130 << 16));
label_1767f0:
    // 0x1767f0: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
label_1767f4:
    // 0x1767f4: 0x3c080082  lui         $t0, 0x82
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)130 << 16));
label_1767f8:
    // 0x1767f8: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1767f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
label_1767fc:
    // 0x1767fc: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
label_176800:
    // 0x176800: 0x3c160082  lui         $s6, 0x82
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)130 << 16));
label_176804:
    // 0x176804: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x176804u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
label_176808:
    // 0x176808: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x176808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_17680c:
    // 0x17680c: 0x3c060082  lui         $a2, 0x82
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)130 << 16));
label_176810:
    // 0x176810: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176814:
    // 0x176814: 0x24a5cd9c  addiu       $a1, $a1, -0x3264
    ctx->pc = 0x176814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954396));
label_176818:
    // 0x176818: 0x26b5d170  addiu       $s5, $s5, -0x2E90
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955376));
label_17681c:
    // 0x17681c: 0x2463d0d0  addiu       $v1, $v1, -0x2F30
    ctx->pc = 0x17681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955216));
label_176820:
    // 0x176820: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x176820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_176824:
    // 0x176824: 0x2694cda8  addiu       $s4, $s4, -0x3258
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954408));
label_176828:
    // 0x176828: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176828u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_17682c:
    // 0x17682c: 0x2673d0e0  addiu       $s3, $s3, -0x2F20
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955232));
label_176830:
    // 0x176830: 0x26b5ce20  addiu       $s5, $s5, -0x31E0
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954528));
label_176834:
    // 0x176834: 0x2652cdb4  addiu       $s2, $s2, -0x324C
    ctx->pc = 0x176834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954420));
label_176838:
    // 0x176838: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x176838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_17683c:
    // 0x17683c: 0x2631d0f0  addiu       $s1, $s1, -0x2F10
    ctx->pc = 0x17683cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955248));
label_176840:
    // 0x176840: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176844:
    // 0x176844: 0x2610cdc0  addiu       $s0, $s0, -0x3240
    ctx->pc = 0x176844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954432));
label_176848:
    // 0x176848: 0x26b5d180  addiu       $s5, $s5, -0x2E80
    ctx->pc = 0x176848u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955392));
label_17684c:
    // 0x17684c: 0x2739d100  addiu       $t9, $t9, -0x2F00
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294955264));
label_176850:
    // 0x176850: 0x7fb50180  sq          $s5, 0x180($sp)
    ctx->pc = 0x176850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 21));
label_176854:
    // 0x176854: 0x2718cdcc  addiu       $t8, $t8, -0x3234
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294954444));
label_176858:
    // 0x176858: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_17685c:
    // 0x17685c: 0x25efd110  addiu       $t7, $t7, -0x2EF0
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955280));
label_176860:
    // 0x176860: 0x26b5ce2c  addiu       $s5, $s5, -0x31D4
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954540));
label_176864:
    // 0x176864: 0x25cecdd8  addiu       $t6, $t6, -0x3228
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954456));
label_176868:
    // 0x176868: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x176868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_17686c:
    // 0x17686c: 0x25add120  addiu       $t5, $t5, -0x2EE0
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294955296));
label_176870:
    // 0x176870: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176874:
    // 0x176874: 0x258ccde4  addiu       $t4, $t4, -0x321C
    ctx->pc = 0x176874u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294954468));
label_176878:
    // 0x176878: 0x26b5d190  addiu       $s5, $s5, -0x2E70
    ctx->pc = 0x176878u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955408));
label_17687c:
    // 0x17687c: 0x256bd130  addiu       $t3, $t3, -0x2ED0
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955312));
label_176880:
    // 0x176880: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x176880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_176884:
    // 0x176884: 0x254acdf0  addiu       $t2, $t2, -0x3210
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954480));
label_176888:
    // 0x176888: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_17688c:
    // 0x17688c: 0x2529d140  addiu       $t1, $t1, -0x2EC0
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955328));
label_176890:
    // 0x176890: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x176890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_176894:
    // 0x176894: 0x26b5ce38  addiu       $s5, $s5, -0x31C8
    ctx->pc = 0x176894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954552));
label_176898:
    // 0x176898: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x176898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_17689c:
    // 0x17689c: 0x2508cdfc  addiu       $t0, $t0, -0x3204
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954492));
label_1768a0:
    // 0x1768a0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_1768a4:
    // 0x1768a4: 0x24e7d150  addiu       $a3, $a3, -0x2EB0
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955344));
label_1768a8:
    // 0x1768a8: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1768a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1768ac:
    // 0x1768ac: 0x26b5d1a0  addiu       $s5, $s5, -0x2E60
    ctx->pc = 0x1768acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955424));
label_1768b0:
    // 0x1768b0: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x1768b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_1768b4:
    // 0x1768b4: 0x24c6ce08  addiu       $a2, $a2, -0x31F8
    ctx->pc = 0x1768b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954504));
label_1768b8:
    // 0x1768b8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1768b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1768bc:
    // 0x1768bc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_1768c0:
    // 0x1768c0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1768c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1768c4:
    // 0x1768c4: 0x26b5d1b0  addiu       $s5, $s5, -0x2E50
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955440));
label_1768c8:
    // 0x1768c8: 0x3c050082  lui         $a1, 0x82
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)130 << 16));
label_1768cc:
    // 0x1768cc: 0x27ded160  addiu       $fp, $fp, -0x2EA0
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955360));
label_1768d0:
    // 0x1768d0: 0x24a5ce44  addiu       $a1, $a1, -0x31BC
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954564));
label_1768d4:
    // 0x1768d4: 0x26d6ce5c  addiu       $s6, $s6, -0x31A4
    ctx->pc = 0x1768d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954588));
label_1768d8:
    // 0x1768d8: 0x26f7d1d0  addiu       $s7, $s7, -0x2E30
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294955472));
label_1768dc:
    // 0x1768dc: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1768dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
label_1768e0:
    // 0x1768e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1768e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1768e4:
    // 0x1768e4: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_1768e8:
    // 0x1768e8: 0x26b5ce50  addiu       $s5, $s5, -0x31B0
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954576));
label_1768ec:
    // 0x1768ec: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1768ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_1768f0:
    // 0x1768f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1768f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1768f4:
    // 0x1768f4: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_1768f8:
    // 0x1768f8: 0x26b5ce68  addiu       $s5, $s5, -0x3198
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954600));
label_1768fc:
    // 0x1768fc: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1768fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_176900:
    // 0x176900: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_176904:
    // 0x176904: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176908:
    // 0x176908: 0x2463d1c0  addiu       $v1, $v1, -0x2E40
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955456));
label_17690c:
    // 0x17690c: 0x26b5d1e0  addiu       $s5, $s5, -0x2E20
    ctx->pc = 0x17690cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955488));
label_176910:
    // 0x176910: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x176910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_176914:
    // 0x176914: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176914u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176918:
    // 0x176918: 0x26b5ce74  addiu       $s5, $s5, -0x318C
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954612));
label_17691c:
    // 0x17691c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x17691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_176920:
    // 0x176920: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_176924:
    // 0x176924: 0x26b5d1f0  addiu       $s5, $s5, -0x2E10
    ctx->pc = 0x176924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955504));
label_176928:
    // 0x176928: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x176928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_17692c:
    // 0x17692c: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x17692cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176930:
    // 0x176930: 0x26b5ce80  addiu       $s5, $s5, -0x3180
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954624));
label_176934:
    // 0x176934: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x176934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_176938:
    // 0x176938: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_17693c:
    // 0x17693c: 0x26b5d200  addiu       $s5, $s5, -0x2E00
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955520));
label_176940:
    // 0x176940: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x176940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_176944:
    // 0x176944: 0x3c150082  lui         $s5, 0x82
    ctx->pc = 0x176944u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)130 << 16));
label_176948:
    // 0x176948: 0x26b5ce8c  addiu       $s5, $s5, -0x3174
    ctx->pc = 0x176948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954636));
label_17694c:
    // 0x17694c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x17694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_176950:
    // 0x176950: 0xe6820000  swc1        $f2, 0x0($s4)
    ctx->pc = 0x176950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_176954:
    // 0x176954: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x176954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_176958:
    // 0x176958: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x176958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_17695c:
    // 0x17695c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x17695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176960:
    // 0x176960: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x176960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176964:
    // 0x176964: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x176964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176968:
    // 0x176968: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x176968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_17696c:
    // 0x17696c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x17696cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_176970:
    // 0x176970: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x176970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_176974:
    // 0x176974: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x176974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176978:
    // 0x176978: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x176978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17697c:
    // 0x17697c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x17697cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176980:
    // 0x176980: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x176980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_176984:
    // 0x176984: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x176984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_176988:
    // 0x176988: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x176988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_17698c:
    // 0x17698c: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x17698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176990:
    // 0x176990: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x176990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176994:
    // 0x176994: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x176994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176998:
    // 0x176998: 0xe7020000  swc1        $f2, 0x0($t8)
    ctx->pc = 0x176998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
label_17699c:
    // 0x17699c: 0xe7010004  swc1        $f1, 0x4($t8)
    ctx->pc = 0x17699cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
label_1769a0:
    // 0x1769a0: 0xe7000008  swc1        $f0, 0x8($t8)
    ctx->pc = 0x1769a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
label_1769a4:
    // 0x1769a4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1769a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1769a8:
    // 0x1769a8: 0xc5e10004  lwc1        $f1, 0x4($t7)
    ctx->pc = 0x1769a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1769ac:
    // 0x1769ac: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x1769acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1769b0:
    // 0x1769b0: 0xe5c20000  swc1        $f2, 0x0($t6)
    ctx->pc = 0x1769b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_1769b4:
    // 0x1769b4: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x1769b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
label_1769b8:
    // 0x1769b8: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x1769b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_1769bc:
    // 0x1769bc: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x1769bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1769c0:
    // 0x1769c0: 0xc5a10004  lwc1        $f1, 0x4($t5)
    ctx->pc = 0x1769c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1769c4:
    // 0x1769c4: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x1769c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1769c8:
    // 0x1769c8: 0xe5820000  swc1        $f2, 0x0($t4)
    ctx->pc = 0x1769c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_1769cc:
    // 0x1769cc: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x1769ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_1769d0:
    // 0x1769d0: 0xe5800008  swc1        $f0, 0x8($t4)
    ctx->pc = 0x1769d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_1769d4:
    // 0x1769d4: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x1769d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1769d8:
    // 0x1769d8: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x1769d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1769dc:
    // 0x1769dc: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x1769dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1769e0:
    // 0x1769e0: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x1769e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_1769e4:
    // 0x1769e4: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x1769e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_1769e8:
    // 0x1769e8: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1769e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_1769ec:
    // 0x1769ec: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1769ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1769f0:
    // 0x1769f0: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x1769f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1769f4:
    // 0x1769f4: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x1769f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1769f8:
    // 0x1769f8: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x1769f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1769fc:
    // 0x1769fc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x1769fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_176a00:
    // 0x176a00: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x176a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_176a04:
    // 0x176a04: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x176a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176a08:
    // 0x176a08: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x176a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a0c:
    // 0x176a0c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x176a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a10:
    // 0x176a10: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176a14:
    // 0x176a14: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176a18:
    // 0x176a18: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176a1c:
    // 0x176a1c: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x176a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176a20:
    // 0x176a20: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x176a20u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_176a24:
    // 0x176a24: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x176a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a28:
    // 0x176a28: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x176a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a2c:
    // 0x176a2c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176a30:
    // 0x176a30: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x176a30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_176a34:
    // 0x176a34: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176a38:
    // 0x176a38: 0x7ba600a0  lq          $a2, 0xA0($sp)
    ctx->pc = 0x176a38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_176a3c:
    // 0x176a3c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176a40:
    // 0x176a40: 0x7ba601a0  lq          $a2, 0x1A0($sp)
    ctx->pc = 0x176a40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_176a44:
    // 0x176a44: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x176a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176a48:
    // 0x176a48: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x176a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a4c:
    // 0x176a4c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x176a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a50:
    // 0x176a50: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x176a50u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_176a54:
    // 0x176a54: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176a54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176a58:
    // 0x176a58: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x176a58u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_176a5c:
    // 0x176a5c: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176a60:
    // 0x176a60: 0x7ba60190  lq          $a2, 0x190($sp)
    ctx->pc = 0x176a60u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_176a64:
    // 0x176a64: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176a68:
    // 0x176a68: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x176a68u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_176a6c:
    // 0x176a6c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x176a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176a70:
    // 0x176a70: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x176a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a74:
    // 0x176a74: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x176a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a78:
    // 0x176a78: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x176a78u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_176a7c:
    // 0x176a7c: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176a80:
    // 0x176a80: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x176a80u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_176a84:
    // 0x176a84: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176a88:
    // 0x176a88: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x176a88u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_176a8c:
    // 0x176a8c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176a90:
    // 0x176a90: 0x7ba60160  lq          $a2, 0x160($sp)
    ctx->pc = 0x176a90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_176a94:
    // 0x176a94: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x176a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176a98:
    // 0x176a98: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x176a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176a9c:
    // 0x176a9c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x176a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176aa0:
    // 0x176aa0: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x176aa0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_176aa4:
    // 0x176aa4: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x176aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_176aa8:
    // 0x176aa8: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x176aa8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_176aac:
    // 0x176aac: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x176aacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_176ab0:
    // 0x176ab0: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x176ab0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_176ab4:
    // 0x176ab4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x176ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_176ab8:
    // 0x176ab8: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x176ab8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_176abc:
    // 0x176abc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x176abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176ac0:
    // 0x176ac0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x176ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176ac4:
    // 0x176ac4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x176ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176ac8:
    // 0x176ac8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x176ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_176acc:
    // 0x176acc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x176accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_176ad0:
    // 0x176ad0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x176ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_176ad4:
    // 0x176ad4: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x176ad4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_176ad8:
    // 0x176ad8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x176ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176adc:
    // 0x176adc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x176adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176ae0:
    // 0x176ae0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x176ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176ae4:
    // 0x176ae4: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x176ae4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_176ae8:
    // 0x176ae8: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x176ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_176aec:
    // 0x176aec: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x176aecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_176af0:
    // 0x176af0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x176af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_176af4:
    // 0x176af4: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x176af4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_176af8:
    // 0x176af8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x176af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_176afc:
    // 0x176afc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x176afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176b00:
    // 0x176b00: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176b04:
    // 0x176b04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176b08:
    // 0x176b08: 0xe6c20000  swc1        $f2, 0x0($s6)
    ctx->pc = 0x176b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_176b0c:
    // 0x176b0c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x176b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_176b10:
    // 0x176b10: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x176b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_176b14:
    // 0x176b14: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x176b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176b18:
    // 0x176b18: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x176b18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_176b1c:
    // 0x176b1c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x176b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176b20:
    // 0x176b20: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x176b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176b24:
    // 0x176b24: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x176b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176b28:
    // 0x176b28: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x176b28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_176b2c:
    // 0x176b2c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x176b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176b30:
    // 0x176b30: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x176b30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_176b34:
    // 0x176b34: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x176b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176b38:
    // 0x176b38: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x176b38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_176b3c:
    // 0x176b3c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x176b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176b40:
    // 0x176b40: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176b44:
    // 0x176b44: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176b48:
    // 0x176b48: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x176b48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_176b4c:
    // 0x176b4c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x176b4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176b50:
    // 0x176b50: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x176b50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_176b54:
    // 0x176b54: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x176b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176b58:
    // 0x176b58: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x176b58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_176b5c:
    // 0x176b5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x176b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176b60:
    // 0x176b60: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x176b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_176b64:
    // 0x176b64: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x176b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176b68:
    // 0x176b68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176b6c:
    // 0x176b6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176b70:
    // 0x176b70: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x176b70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_176b74:
    // 0x176b74: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x176b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176b78:
    // 0x176b78: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x176b78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_176b7c:
    // 0x176b7c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x176b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176b80:
    // 0x176b80: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x176b80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_176b84:
    // 0x176b84: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x176b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176b88:
    // 0x176b88: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x176b88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_176b8c:
    // 0x176b8c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x176b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_176b90:
    // 0x176b90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x176b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176b94:
    // 0x176b94: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x176b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176b98:
    // 0x176b98: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x176b98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_176b9c:
    // 0x176b9c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x176b9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_176ba0:
    // 0x176ba0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x176ba0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_176ba4:
    // 0x176ba4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x176ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_176ba8:
    // 0x176ba8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x176ba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_176bac:
    // 0x176bac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x176bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_176bb0:
    // 0x176bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176bb4:
    // 0x176bb4: 0xa383862c  sb          $v1, -0x79D4($gp)
    ctx->pc = 0x176bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936108), (uint8_t)GPR_U32(ctx, 3));
label_176bb8:
    // 0x176bb8: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
label_176bbc:
    // 0x176bbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x176bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_176bc0:
    // 0x176bc0: 0x25086aa0  addiu       $t0, $t0, 0x6AA0
    ctx->pc = 0x176bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27296));
label_176bc4:
    // 0x176bc4: 0x8c25fc94  lw          $a1, -0x36C($at)
    ctx->pc = 0x176bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966420)));
label_176bc8:
    // 0x176bc8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x176bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_176bcc:
    // 0x176bcc: 0x8c910260  lw          $s1, 0x260($a0)
    ctx->pc = 0x176bccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
label_176bd0:
    // 0x176bd0: 0x34690300  ori         $t1, $v1, 0x300
    ctx->pc = 0x176bd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
label_176bd4:
    // 0x176bd4: 0x790a0000  lq          $t2, 0x0($t0)
    ctx->pc = 0x176bd4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_176bd8:
    // 0x176bd8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x176bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_176bdc:
    // 0x176bdc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x176bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_176be0:
    // 0x176be0: 0x24c66b60  addiu       $a2, $a2, 0x6B60
    ctx->pc = 0x176be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27488));
label_176be4:
    // 0x176be4: 0x34670340  ori         $a3, $v1, 0x340
    ctx->pc = 0x176be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)832);
label_176be8:
    // 0x176be8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x176be8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176bec:
    // 0x176bec: 0x24b08000  addiu       $s0, $a1, -0x8000
    ctx->pc = 0x176becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
label_176bf0:
    // 0x176bf0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x176bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_176bf4:
    // 0x176bf4: 0x34650380  ori         $a1, $v1, 0x380
    ctx->pc = 0x176bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)896);
label_176bf8:
    // 0x176bf8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x176bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_176bfc:
    // 0x176bfc: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x176bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
label_176c00:
    // 0x176c00: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x176c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_176c04:
    // 0x176c04: 0x790a0010  lq          $t2, 0x10($t0)
    ctx->pc = 0x176c04u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_176c08:
    // 0x176c08: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
label_176c0c:
    // 0x176c0c: 0x7d2a0010  sq          $t2, 0x10($t1)
    ctx->pc = 0x176c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 10));
label_176c10:
    // 0x176c10: 0x790a0020  lq          $t2, 0x20($t0)
    ctx->pc = 0x176c10u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_176c14:
    // 0x176c14: 0x7d2a0020  sq          $t2, 0x20($t1)
    ctx->pc = 0x176c14u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 10));
label_176c18:
    // 0x176c18: 0x790a0030  lq          $t2, 0x30($t0)
    ctx->pc = 0x176c18u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_176c1c:
    // 0x176c1c: 0x7d2a0030  sq          $t2, 0x30($t1)
    ctx->pc = 0x176c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 10));
label_176c20:
    // 0x176c20: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x176c20u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_176c24:
    // 0x176c24: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x176c24u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_176c28:
    // 0x176c28: 0x78c80010  lq          $t0, 0x10($a2)
    ctx->pc = 0x176c28u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_176c2c:
    // 0x176c2c: 0x7ce80010  sq          $t0, 0x10($a3)
    ctx->pc = 0x176c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 8));
label_176c30:
    // 0x176c30: 0x78c80020  lq          $t0, 0x20($a2)
    ctx->pc = 0x176c30u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_176c34:
    // 0x176c34: 0x7ce80020  sq          $t0, 0x20($a3)
    ctx->pc = 0x176c34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 8));
label_176c38:
    // 0x176c38: 0x78c80030  lq          $t0, 0x30($a2)
    ctx->pc = 0x176c38u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 48)));
label_176c3c:
    // 0x176c3c: 0x7ce80030  sq          $t0, 0x30($a3)
    ctx->pc = 0x176c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 8));
label_176c40:
    // 0x176c40: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x176c40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_176c44:
    // 0x176c44: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x176c44u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_176c48:
    // 0x176c48: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x176c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_176c4c:
    // 0x176c4c: 0xc480020c  lwc1        $f0, 0x20C($a0)
    ctx->pc = 0x176c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176c50:
    // 0x176c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x176c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_176c54:
    // 0x176c54: 0x10000028  b           . + 4 + (0x28 << 2)
label_176c58:
    if (ctx->pc == 0x176C58u) {
        ctx->pc = 0x176C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C54u;
        // 0x176c58: 0xe4200390  swc1        $f0, 0x390($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 912), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C5Cu;
        goto label_176c5c;
    }
    ctx->pc = 0x176C54u;
    {
        const bool branch_taken_0x176c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C54u;
        // 0x176c58: 0xe4200390  swc1        $f0, 0x390($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c54) {
            ctx->pc = 0x176CF8u;
            goto label_176cf8;
        }
    }
    ctx->pc = 0x176C5Cu;
label_176c5c:
    // 0x176c5c: 0x0  nop
    ctx->pc = 0x176c5cu;
    // NOP
label_176c60:
    // 0x176c60: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x176c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176c64:
    // 0x176c64: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x176c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_176c68:
    // 0x176c68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_176c6c:
    if (ctx->pc == 0x176C6Cu) {
        ctx->pc = 0x176C70u;
        goto label_176c70;
    }
    ctx->pc = 0x176C68u;
    {
        const bool branch_taken_0x176c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176c68) {
            ctx->pc = 0x176C78u;
            goto label_176c78;
        }
    }
    ctx->pc = 0x176C70u;
label_176c70:
    // 0x176c70: 0x10000021  b           . + 4 + (0x21 << 2)
label_176c74:
    if (ctx->pc == 0x176C74u) {
        ctx->pc = 0x176C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C70u;
        // 0x176c74: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C78u;
        goto label_176c78;
    }
    ctx->pc = 0x176C70u;
    {
        const bool branch_taken_0x176c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C70u;
        // 0x176c74: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c70) {
            ctx->pc = 0x176CF8u;
            goto label_176cf8;
        }
    }
    ctx->pc = 0x176C78u;
label_176c78:
    // 0x176c78: 0x9224004f  lbu         $a0, 0x4F($s1)
    ctx->pc = 0x176c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 79)));
label_176c7c:
    // 0x176c7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_176c80:
    // 0x176c80: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
label_176c84:
    if (ctx->pc == 0x176C84u) {
        ctx->pc = 0x176C88u;
        goto label_176c88;
    }
    ctx->pc = 0x176C80u;
    {
        const bool branch_taken_0x176c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176c80) {
            ctx->pc = 0x176CF0u;
            goto label_176cf0;
        }
    }
    ctx->pc = 0x176C88u;
label_176c88:
    // 0x176c88: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x176c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_176c8c:
    // 0x176c8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_176c90:
    if (ctx->pc == 0x176C90u) {
        ctx->pc = 0x176C94u;
        goto label_176c94;
    }
    ctx->pc = 0x176C8Cu;
    {
        const bool branch_taken_0x176c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c8c) {
            ctx->pc = 0x176CA8u;
            goto label_176ca8;
        }
    }
    ctx->pc = 0x176C94u;
label_176c94:
    // 0x176c94: 0x40f809  jalr        $v0
label_176c98:
    if (ctx->pc == 0x176C98u) {
        ctx->pc = 0x176C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C94u;
        // 0x176c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176C9Cu;
        goto label_176c9c;
    }
    ctx->pc = 0x176C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176C9Cu);
        ctx->pc = 0x176C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C94u;
        // 0x176c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176C94u, 0x176C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176C9Cu;
label_176c9c:
    // 0x176c9c: 0x1000000c  b           . + 4 + (0xC << 2)
label_176ca0:
    if (ctx->pc == 0x176CA0u) {
        ctx->pc = 0x176CA4u;
        goto label_176ca4;
    }
    ctx->pc = 0x176C9Cu;
    {
        const bool branch_taken_0x176c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176c9c) {
            ctx->pc = 0x176CD0u;
            goto label_176cd0;
        }
    }
    ctx->pc = 0x176CA4u;
label_176ca4:
    // 0x176ca4: 0x0  nop
    ctx->pc = 0x176ca4u;
    // NOP
label_176ca8:
    // 0x176ca8: 0x9225004e  lbu         $a1, 0x4E($s1)
    ctx->pc = 0x176ca8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 78)));
label_176cac:
    // 0x176cac: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
label_176cb0:
    // 0x176cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176cb4:
    // 0x176cb4: 0x2442cd90  addiu       $v0, $v0, -0x3270
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954384));
label_176cb8:
    // 0x176cb8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_176cbc:
    // 0x176cbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_176cc0:
    // 0x176cc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_176cc4:
    // 0x176cc4: 0xc040250  jal         func_100940
label_176cc8:
    if (ctx->pc == 0x176CC8u) {
        ctx->pc = 0x176CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CC4u;
        // 0x176cc8: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176CCCu;
        goto label_176ccc;
    }
    ctx->pc = 0x176CC4u;
    SET_GPR_U32(ctx, 31, 0x176CCCu);
    ctx->pc = 0x176CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176CC4u;
    // 0x176cc8: 0x43c821  addu        $t9, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x176CC4u, 0x176CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176CCCu;
label_176ccc:
    // 0x176ccc: 0x0  nop
    ctx->pc = 0x176cccu;
    // NOP
label_176cd0:
    // 0x176cd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_176cd4:
    // 0x176cd4: 0x8c24fc90  lw          $a0, -0x370($at)
    ctx->pc = 0x176cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966416)));
label_176cd8:
    // 0x176cd8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x176cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_176cdc:
    // 0x176cdc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_176ce0:
    // 0x176ce0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x176ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_176ce4:
    // 0x176ce4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x176ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_176ce8:
    // 0x176ce8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_176cec:
    if (ctx->pc == 0x176CECu) {
        ctx->pc = 0x176CF0u;
        goto label_176cf0;
    }
    ctx->pc = 0x176CE8u;
    {
        const bool branch_taken_0x176ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ce8) {
            ctx->pc = 0x176D00u;
            goto label_176d00;
        }
    }
    ctx->pc = 0x176CF0u;
label_176cf0:
    // 0x176cf0: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x176cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_176cf4:
    // 0x176cf4: 0x0  nop
    ctx->pc = 0x176cf4u;
    // NOP
label_176cf8:
    // 0x176cf8: 0x1620ffd9  bnez        $s1, . + 4 + (-0x27 << 2)
label_176cfc:
    if (ctx->pc == 0x176CFCu) {
        ctx->pc = 0x176D00u;
        goto label_176d00;
    }
    ctx->pc = 0x176CF8u;
    {
        const bool branch_taken_0x176cf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x176cf8) {
            ctx->pc = 0x176C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176c60;
        }
    }
    ctx->pc = 0x176D00u;
label_176d00:
    // 0x176d00: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x176d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_176d04:
    // 0x176d04: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x176d04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_176d08:
    // 0x176d08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176d08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_176d0c:
    // 0x176d0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x176d0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_176d10:
    // 0x176d10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_176d14:
    // 0x176d14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_176d18:
    // 0x176d18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176d1c:
    // 0x176d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_176d20:
    // 0x176d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_176d24:
    // 0x176d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176d28:
    // 0x176d28: 0x3e00008  jr          $ra
label_176d2c:
    if (ctx->pc == 0x176D2Cu) {
        ctx->pc = 0x176D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D28u;
        // 0x176d2c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176D30u;
        goto label_fallthrough_0x176d28;
    }
    ctx->pc = 0x176D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176D28u;
        // 0x176d2c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x176d28:
    ctx->pc = 0x176D30u;
}
