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

// Function: sub_001FF928
// Address: 0x1ff928 - 0x1ffba4
void sub_001FF928_0x1ff928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF928_0x1ff928");
#endif

    switch (ctx->pc) {
        case 0x1ff928u: goto label_1ff928;
        case 0x1ff92cu: goto label_1ff92c;
        case 0x1ff930u: goto label_1ff930;
        case 0x1ff934u: goto label_1ff934;
        case 0x1ff938u: goto label_1ff938;
        case 0x1ff93cu: goto label_1ff93c;
        case 0x1ff940u: goto label_1ff940;
        case 0x1ff944u: goto label_1ff944;
        case 0x1ff948u: goto label_1ff948;
        case 0x1ff94cu: goto label_1ff94c;
        case 0x1ff950u: goto label_1ff950;
        case 0x1ff954u: goto label_1ff954;
        case 0x1ff958u: goto label_1ff958;
        case 0x1ff95cu: goto label_1ff95c;
        case 0x1ff960u: goto label_1ff960;
        case 0x1ff964u: goto label_1ff964;
        case 0x1ff968u: goto label_1ff968;
        case 0x1ff96cu: goto label_1ff96c;
        case 0x1ff970u: goto label_1ff970;
        case 0x1ff974u: goto label_1ff974;
        case 0x1ff978u: goto label_1ff978;
        case 0x1ff97cu: goto label_1ff97c;
        case 0x1ff980u: goto label_1ff980;
        case 0x1ff984u: goto label_1ff984;
        case 0x1ff988u: goto label_1ff988;
        case 0x1ff98cu: goto label_1ff98c;
        case 0x1ff990u: goto label_1ff990;
        case 0x1ff994u: goto label_1ff994;
        case 0x1ff998u: goto label_1ff998;
        case 0x1ff99cu: goto label_1ff99c;
        case 0x1ff9a0u: goto label_1ff9a0;
        case 0x1ff9a4u: goto label_1ff9a4;
        case 0x1ff9a8u: goto label_1ff9a8;
        case 0x1ff9acu: goto label_1ff9ac;
        case 0x1ff9b0u: goto label_1ff9b0;
        case 0x1ff9b4u: goto label_1ff9b4;
        case 0x1ff9b8u: goto label_1ff9b8;
        case 0x1ff9bcu: goto label_1ff9bc;
        case 0x1ff9c0u: goto label_1ff9c0;
        case 0x1ff9c4u: goto label_1ff9c4;
        case 0x1ff9c8u: goto label_1ff9c8;
        case 0x1ff9ccu: goto label_1ff9cc;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9d4u: goto label_1ff9d4;
        case 0x1ff9d8u: goto label_1ff9d8;
        case 0x1ff9dcu: goto label_1ff9dc;
        case 0x1ff9e0u: goto label_1ff9e0;
        case 0x1ff9e4u: goto label_1ff9e4;
        case 0x1ff9e8u: goto label_1ff9e8;
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ff9f0u: goto label_1ff9f0;
        case 0x1ff9f4u: goto label_1ff9f4;
        case 0x1ff9f8u: goto label_1ff9f8;
        case 0x1ff9fcu: goto label_1ff9fc;
        case 0x1ffa00u: goto label_1ffa00;
        case 0x1ffa04u: goto label_1ffa04;
        case 0x1ffa08u: goto label_1ffa08;
        case 0x1ffa0cu: goto label_1ffa0c;
        case 0x1ffa10u: goto label_1ffa10;
        case 0x1ffa14u: goto label_1ffa14;
        case 0x1ffa18u: goto label_1ffa18;
        case 0x1ffa1cu: goto label_1ffa1c;
        case 0x1ffa20u: goto label_1ffa20;
        case 0x1ffa24u: goto label_1ffa24;
        case 0x1ffa28u: goto label_1ffa28;
        case 0x1ffa2cu: goto label_1ffa2c;
        case 0x1ffa30u: goto label_1ffa30;
        case 0x1ffa34u: goto label_1ffa34;
        case 0x1ffa38u: goto label_1ffa38;
        case 0x1ffa3cu: goto label_1ffa3c;
        case 0x1ffa40u: goto label_1ffa40;
        case 0x1ffa44u: goto label_1ffa44;
        case 0x1ffa48u: goto label_1ffa48;
        case 0x1ffa4cu: goto label_1ffa4c;
        case 0x1ffa50u: goto label_1ffa50;
        case 0x1ffa54u: goto label_1ffa54;
        case 0x1ffa58u: goto label_1ffa58;
        case 0x1ffa5cu: goto label_1ffa5c;
        case 0x1ffa60u: goto label_1ffa60;
        case 0x1ffa64u: goto label_1ffa64;
        case 0x1ffa68u: goto label_1ffa68;
        case 0x1ffa6cu: goto label_1ffa6c;
        case 0x1ffa70u: goto label_1ffa70;
        case 0x1ffa74u: goto label_1ffa74;
        case 0x1ffa78u: goto label_1ffa78;
        case 0x1ffa7cu: goto label_1ffa7c;
        case 0x1ffa80u: goto label_1ffa80;
        case 0x1ffa84u: goto label_1ffa84;
        case 0x1ffa88u: goto label_1ffa88;
        case 0x1ffa8cu: goto label_1ffa8c;
        case 0x1ffa90u: goto label_1ffa90;
        case 0x1ffa94u: goto label_1ffa94;
        case 0x1ffa98u: goto label_1ffa98;
        case 0x1ffa9cu: goto label_1ffa9c;
        case 0x1ffaa0u: goto label_1ffaa0;
        case 0x1ffaa4u: goto label_1ffaa4;
        case 0x1ffaa8u: goto label_1ffaa8;
        case 0x1ffaacu: goto label_1ffaac;
        case 0x1ffab0u: goto label_1ffab0;
        case 0x1ffab4u: goto label_1ffab4;
        case 0x1ffab8u: goto label_1ffab8;
        case 0x1ffabcu: goto label_1ffabc;
        case 0x1ffac0u: goto label_1ffac0;
        case 0x1ffac4u: goto label_1ffac4;
        case 0x1ffac8u: goto label_1ffac8;
        case 0x1ffaccu: goto label_1ffacc;
        case 0x1ffad0u: goto label_1ffad0;
        case 0x1ffad4u: goto label_1ffad4;
        case 0x1ffad8u: goto label_1ffad8;
        case 0x1ffadcu: goto label_1ffadc;
        case 0x1ffae0u: goto label_1ffae0;
        case 0x1ffae4u: goto label_1ffae4;
        case 0x1ffae8u: goto label_1ffae8;
        case 0x1ffaecu: goto label_1ffaec;
        case 0x1ffaf0u: goto label_1ffaf0;
        case 0x1ffaf4u: goto label_1ffaf4;
        case 0x1ffaf8u: goto label_1ffaf8;
        case 0x1ffafcu: goto label_1ffafc;
        case 0x1ffb00u: goto label_1ffb00;
        case 0x1ffb04u: goto label_1ffb04;
        case 0x1ffb08u: goto label_1ffb08;
        case 0x1ffb0cu: goto label_1ffb0c;
        case 0x1ffb10u: goto label_1ffb10;
        case 0x1ffb14u: goto label_1ffb14;
        case 0x1ffb18u: goto label_1ffb18;
        case 0x1ffb1cu: goto label_1ffb1c;
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb24u: goto label_1ffb24;
        case 0x1ffb28u: goto label_1ffb28;
        case 0x1ffb2cu: goto label_1ffb2c;
        case 0x1ffb30u: goto label_1ffb30;
        case 0x1ffb34u: goto label_1ffb34;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb3cu: goto label_1ffb3c;
        case 0x1ffb40u: goto label_1ffb40;
        case 0x1ffb44u: goto label_1ffb44;
        case 0x1ffb48u: goto label_1ffb48;
        case 0x1ffb4cu: goto label_1ffb4c;
        case 0x1ffb50u: goto label_1ffb50;
        case 0x1ffb54u: goto label_1ffb54;
        case 0x1ffb58u: goto label_1ffb58;
        case 0x1ffb5cu: goto label_1ffb5c;
        case 0x1ffb60u: goto label_1ffb60;
        case 0x1ffb64u: goto label_1ffb64;
        case 0x1ffb68u: goto label_1ffb68;
        case 0x1ffb6cu: goto label_1ffb6c;
        case 0x1ffb70u: goto label_1ffb70;
        case 0x1ffb74u: goto label_1ffb74;
        case 0x1ffb78u: goto label_1ffb78;
        case 0x1ffb7cu: goto label_1ffb7c;
        case 0x1ffb80u: goto label_1ffb80;
        case 0x1ffb84u: goto label_1ffb84;
        case 0x1ffb88u: goto label_1ffb88;
        case 0x1ffb8cu: goto label_1ffb8c;
        case 0x1ffb90u: goto label_1ffb90;
        case 0x1ffb94u: goto label_1ffb94;
        case 0x1ffb98u: goto label_1ffb98;
        case 0x1ffb9cu: goto label_1ffb9c;
        case 0x1ffba0u: goto label_1ffba0;
        default: break;
    }

    ctx->pc = 0x1ff928u;

label_1ff928:
    // 0x1ff928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ff92c:
    // 0x1ff92c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ff92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ff930:
    // 0x1ff930: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ff930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ff934:
    // 0x1ff934: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1ff938:
    // 0x1ff938: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ff938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1ff93c:
    // 0x1ff93c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ff93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff940:
    // 0x1ff940: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ff940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ff944:
    // 0x1ff944: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ff944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ff948:
    // 0x1ff948: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ff948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1ff94c:
    // 0x1ff94c: 0x2633038c  addiu       $s3, $s1, 0x38C
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 908));
label_1ff950:
    // 0x1ff950: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ff950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ff954:
    // 0x1ff954: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_1ff958:
    // 0x1ff958: 0xae2203b8  sw          $v0, 0x3B8($s1)
    ctx->pc = 0x1ff958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 2));
label_1ff95c:
    // 0x1ff95c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff960:
    // 0x1ff960: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1ff960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1ff964:
    // 0x1ff964: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ff964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1ff968:
    // 0x1ff968: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ff968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ff96c:
    // 0x1ff96c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ff96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ff970:
    // 0x1ff970: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ff970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ff974:
    // 0x1ff974: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1ff974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_1ff978:
    // 0x1ff978: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1ff978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1ff97c:
    // 0x1ff97c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ff97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ff980:
    // 0x1ff980: 0xae2003fc  sw          $zero, 0x3FC($s1)
    ctx->pc = 0x1ff980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1020), GPR_U32(ctx, 0));
label_1ff984:
    // 0x1ff984: 0xae200400  sw          $zero, 0x400($s1)
    ctx->pc = 0x1ff984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 0));
label_1ff988:
    // 0x1ff988: 0x40f809  jalr        $v0
label_1ff98c:
    if (ctx->pc == 0x1FF98Cu) {
        ctx->pc = 0x1FF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF988u;
        // 0x1ff98c: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF990u;
        goto label_1ff990;
    }
    ctx->pc = 0x1FF988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF990u);
        ctx->pc = 0x1FF98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF988u;
        // 0x1ff98c: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF988u, 0x1FF990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF990u;
label_1ff990:
    // 0x1ff990: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ff990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1ff994:
    // 0x1ff994: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1ff994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1ff998:
    // 0x1ff998: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x1ff998u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ff99c:
    // 0x1ff99c: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1ff99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1ff9a0:
    // 0x1ff9a0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1ff9a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1ff9a4:
    // 0x1ff9a4: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x1ff9a4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ff9a8:
    // 0x1ff9a8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ff9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ff9ac:
    // 0x1ff9ac: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1ff9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ff9b0:
    // 0x1ff9b0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ff9b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ff9b4:
    // 0x1ff9b4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ff9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ff9b8:
    // 0x1ff9b8: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x1ff9b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ff9bc:
    // 0x1ff9bc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1ff9bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1ff9c0:
    // 0x1ff9c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ff9c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ff9c4:
    // 0x1ff9c4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ff9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ff9c8:
    // 0x1ff9c8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1ff9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ff9cc:
    // 0x1ff9cc: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1ff9ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_1ff9d0:
    // 0x1ff9d0: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1ff9d4:
    // 0x1ff9d4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ff9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ff9d8:
    // 0x1ff9d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ff9d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ff9dc:
    // 0x1ff9dc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1ff9dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1ff9e0:
    // 0x1ff9e0: 0x39630000  xori        $v1, $t3, 0x0
    ctx->pc = 0x1ff9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
label_1ff9e4:
    // 0x1ff9e4: 0x1691004  sllv        $v0, $t1, $t3
    ctx->pc = 0x1ff9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
label_1ff9e8:
    // 0x1ff9e8: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1ff9e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ff9ec:
    // 0x1ff9ec: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x1ff9ecu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ff9f0:
    // 0x1ff9f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ff9f4:
    // 0x1ff9f4: 0x43600b  movn        $t4, $v0, $v1
    ctx->pc = 0x1ff9f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
label_1ff9f8:
    // 0x1ff9f8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1ff9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ff9fc:
    // 0x1ff9fc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ff9fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ffa00:
    // 0x1ffa00: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa04:
    // 0x1ffa04: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x1ffa04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffa08:
    // 0x1ffa08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa0c:
    // 0x1ffa0c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1ffa0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1ffa10:
    // 0x1ffa10: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1ffa10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffa14:
    // 0x1ffa14: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ffa18:
    // 0x1ffa18: 0x29640007  slti        $a0, $t3, 0x7
    ctx->pc = 0x1ffa18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)7) ? 1 : 0);
label_1ffa1c:
    // 0x1ffa1c: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x1ffa1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_1ffa20:
    // 0x1ffa20: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa24:
    // 0x1ffa24: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ffa24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ffa28:
    // 0x1ffa28: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1ffa2c:
    if (ctx->pc == 0x1FFA2Cu) {
        ctx->pc = 0x1FFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA28u;
        // 0x1ffa2c: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA30u;
        goto label_1ffa30;
    }
    ctx->pc = 0x1FFA28u;
    {
        const bool branch_taken_0x1ffa28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA28u;
        // 0x1ffa2c: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa28) {
            ctx->pc = 0x1FFAA0u;
            goto label_1ffaa0;
        }
    }
    ctx->pc = 0x1FFA30u;
label_1ffa30:
    // 0x1ffa30: 0x256bfff9  addiu       $t3, $t3, -0x7
    ctx->pc = 0x1ffa30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967289));
label_1ffa34:
    // 0x1ffa34: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
label_1ffa38:
    if (ctx->pc == 0x1FFA38u) {
        ctx->pc = 0x1FFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA34u;
        // 0x1ffa38: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA3Cu;
        goto label_1ffa3c;
    }
    ctx->pc = 0x1FFA34u;
    {
        const bool branch_taken_0x1ffa34 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA34u;
        // 0x1ffa38: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa34) {
            ctx->pc = 0x1FFA58u;
            goto label_1ffa58;
        }
    }
    ctx->pc = 0x1FFA3Cu;
label_1ffa3c:
    // 0x1ffa3c: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x1ffa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1ffa40:
    // 0x1ffa40: 0x491006  srlv        $v0, $t1, $v0
    ctx->pc = 0x1ffa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
label_1ffa44:
    // 0x1ffa44: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x1ffa44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_1ffa48:
    // 0x1ffa48: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x1ffa48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_1ffa4c:
    // 0x1ffa4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1ffa50:
    if (ctx->pc == 0x1FFA50u) {
        ctx->pc = 0x1FFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA4Cu;
        // 0x1ffa50: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA54u;
        goto label_1ffa54;
    }
    ctx->pc = 0x1FFA4Cu;
    {
        const bool branch_taken_0x1ffa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA4Cu;
        // 0x1ffa50: 0x1696004  sllv        $t4, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 11) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa4c) {
            ctx->pc = 0x1FFA60u;
            goto label_1ffa60;
        }
    }
    ctx->pc = 0x1FFA54u;
label_1ffa54:
    // 0x1ffa54: 0x0  nop
    ctx->pc = 0x1ffa54u;
    // NOP
label_1ffa58:
    // 0x1ffa58: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x1ffa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_1ffa5c:
    // 0x1ffa5c: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1ffa5cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa60:
    // 0x1ffa60: 0x81490000  lb          $t1, 0x0($t2)
    ctx->pc = 0x1ffa60u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffa64:
    // 0x1ffa64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa68:
    // 0x1ffa68: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1ffa68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffa6c:
    // 0x1ffa6c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa70:
    // 0x1ffa70: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ffa70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ffa74:
    // 0x1ffa74: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x1ffa74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffa78:
    // 0x1ffa78: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1ffa78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1ffa7c:
    // 0x1ffa7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa80:
    // 0x1ffa80: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ffa84:
    // 0x1ffa84: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x1ffa84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_1ffa88:
    // 0x1ffa88: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x1ffa88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_1ffa8c:
    // 0x1ffa8c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1ffa8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1ffa90:
    // 0x1ffa90: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1ffa90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1ffa94:
    // 0x1ffa94: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ffa98:
    if (ctx->pc == 0x1FFA98u) {
        ctx->pc = 0x1FFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA94u;
        // 0x1ffa98: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFA9Cu;
        goto label_1ffa9c;
    }
    ctx->pc = 0x1FFA94u;
    {
        const bool branch_taken_0x1ffa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA94u;
        // 0x1ffa98: 0x1224825  or          $t1, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa94) {
            ctx->pc = 0x1FFAACu;
            goto label_1ffaac;
        }
    }
    ctx->pc = 0x1FFA9Cu;
label_1ffa9c:
    // 0x1ffa9c: 0x0  nop
    ctx->pc = 0x1ffa9cu;
    // NOP
label_1ffaa0:
    // 0x1ffaa0: 0xc21c2  srl         $a0, $t4, 7
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
label_1ffaa4:
    // 0x1ffaa4: 0xc6640  sll         $t4, $t4, 25
    ctx->pc = 0x1ffaa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_1ffaa8:
    // 0x1ffaa8: 0x256b0019  addiu       $t3, $t3, 0x19
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 25));
label_1ffaac:
    // 0x1ffaac: 0x3088003f  andi        $t0, $a0, 0x3F
    ctx->pc = 0x1ffaacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1ffab0:
    // 0x1ffab0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1ffab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_1ffab4:
    // 0x1ffab4: 0x3087003f  andi        $a3, $a0, 0x3F
    ctx->pc = 0x1ffab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1ffab8:
    // 0x1ffab8: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
label_1ffabc:
    // 0x1ffabc: 0x3086003f  andi        $a2, $a0, 0x3F
    ctx->pc = 0x1ffabcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_1ffac0:
    // 0x1ffac0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_1ffac4:
    // 0x1ffac4: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1ffac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_1ffac8:
    // 0x1ffac8: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x1ffac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_1ffacc:
    // 0x1ffacc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1ffaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ffad0:
    // 0x1ffad0: 0xc27c2  srl         $a0, $t4, 31
    ctx->pc = 0x1ffad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_1ffad4:
    // 0x1ffad4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1ffad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1ffad8:
    // 0x1ffad8: 0xae08002c  sw          $t0, 0x2C($s0)
    ctx->pc = 0x1ffad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
label_1ffadc:
    // 0x1ffadc: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x1ffadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
label_1ffae0:
    // 0x1ffae0: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x1ffae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_1ffae4:
    // 0x1ffae4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ffae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1ffae8:
    // 0x1ffae8: 0x15650005  bne         $t3, $a1, . + 4 + (0x5 << 2)
label_1ffaec:
    if (ctx->pc == 0x1FFAECu) {
        ctx->pc = 0x1FFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAE8u;
        // 0x1ffaec: 0xae2402b4  sw          $a0, 0x2B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFAF0u;
        goto label_1ffaf0;
    }
    ctx->pc = 0x1FFAE8u;
    {
        const bool branch_taken_0x1ffae8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAE8u;
        // 0x1ffaec: 0xae2402b4  sw          $a0, 0x2B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffae8) {
            ctx->pc = 0x1FFB00u;
            goto label_1ffb00;
        }
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1ffaf0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1ffaf4:
    // 0x1ffaf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ffaf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffaf8:
    // 0x1ffaf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ffafc:
    if (ctx->pc == 0x1FFAFCu) {
        ctx->pc = 0x1FFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAF8u;
        // 0x1ffafc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB00u;
        goto label_1ffb00;
    }
    ctx->pc = 0x1FFAF8u;
    {
        const bool branch_taken_0x1ffaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAF8u;
        // 0x1ffafc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffaf8) {
            ctx->pc = 0x1FFB08u;
            goto label_1ffb08;
        }
    }
    ctx->pc = 0x1FFB00u;
label_1ffb00:
    // 0x1ffb00: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ffb00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1ffb04:
    // 0x1ffb04: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x1ffb04u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_1ffb08:
    // 0x1ffb08: 0xc17c2  srl         $v0, $t4, 31
    ctx->pc = 0x1ffb08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_1ffb0c:
    // 0x1ffb0c: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1ffb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1ffb10:
    // 0x1ffb10: 0x15630005  bne         $t3, $v1, . + 4 + (0x5 << 2)
label_1ffb14:
    if (ctx->pc == 0x1FFB14u) {
        ctx->pc = 0x1FFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB10u;
        // 0x1ffb14: 0xae2202b8  sw          $v0, 0x2B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB18u;
        goto label_1ffb18;
    }
    ctx->pc = 0x1FFB10u;
    {
        const bool branch_taken_0x1ffb10 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FFB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB10u;
        // 0x1ffb14: 0xae2202b8  sw          $v0, 0x2B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb10) {
            ctx->pc = 0x1FFB28u;
            goto label_1ffb28;
        }
    }
    ctx->pc = 0x1FFB18u;
label_1ffb18:
    // 0x1ffb18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ffb18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb1c:
    // 0x1ffb1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ffb20:
    if (ctx->pc == 0x1FFB20u) {
        ctx->pc = 0x1FFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB1Cu;
        // 0x1ffb20: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB24u;
        goto label_1ffb24;
    }
    ctx->pc = 0x1FFB1Cu;
    {
        const bool branch_taken_0x1ffb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB1Cu;
        // 0x1ffb20: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb1c) {
            ctx->pc = 0x1FFB2Cu;
            goto label_1ffb2c;
        }
    }
    ctx->pc = 0x1FFB24u;
label_1ffb24:
    // 0x1ffb24: 0x0  nop
    ctx->pc = 0x1ffb24u;
    // NOP
label_1ffb28:
    // 0x1ffb28: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1ffb28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1ffb2c:
    // 0x1ffb2c: 0x25650007  addiu       $a1, $t3, 0x7
    ctx->pc = 0x1ffb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
label_1ffb30:
    // 0x1ffb30: 0x8e22038c  lw          $v0, 0x38C($s1)
    ctx->pc = 0x1ffb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_1ffb34:
    // 0x1ffb34: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x1ffb34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_1ffb38:
    // 0x1ffb38: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ffb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb3c:
    // 0x1ffb3c: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1ffb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1ffb40:
    // 0x1ffb40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ffb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb44:
    // 0x1ffb44: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_1ffb48:
    // 0x1ffb48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ffb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb4c:
    // 0x1ffb4c: 0xc094854  jal         func_252150
label_1ffb50:
    if (ctx->pc == 0x1FFB50u) {
        ctx->pc = 0x1FFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB4Cu;
        // 0x1ffb50: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB54u;
        goto label_1ffb54;
    }
    ctx->pc = 0x1FFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB54u);
    ctx->pc = 0x1FFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB4Cu;
    // 0x1ffb50: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x1FFB4Cu, 0x1FFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB54u;
label_1ffb54:
    // 0x1ffb54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ffb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ffb58:
    // 0x1ffb58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ffb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb5c:
    // 0x1ffb5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb60:
    // 0x1ffb60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ffb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1ffb64:
    // 0x1ffb64: 0x40f809  jalr        $v0
label_1ffb68:
    if (ctx->pc == 0x1FFB68u) {
        ctx->pc = 0x1FFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB64u;
        // 0x1ffb68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB6Cu;
        goto label_1ffb6c;
    }
    ctx->pc = 0x1FFB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFB6Cu);
        ctx->pc = 0x1FFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB64u;
        // 0x1ffb68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFB64u, 0x1FFB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFB6Cu;
label_1ffb6c:
    // 0x1ffb6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ffb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ffb70:
    // 0x1ffb70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ffb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb74:
    // 0x1ffb74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffb78:
    // 0x1ffb78: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1ffb7c:
    // 0x1ffb7c: 0x40f809  jalr        $v0
label_1ffb80:
    if (ctx->pc == 0x1FFB80u) {
        ctx->pc = 0x1FFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB7Cu;
        // 0x1ffb80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFB84u;
        goto label_1ffb84;
    }
    ctx->pc = 0x1FFB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FFB84u);
        ctx->pc = 0x1FFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB7Cu;
        // 0x1ffb80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFB7Cu, 0x1FFB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FFB84u;
label_1ffb84:
    // 0x1ffb84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb88:
    // 0x1ffb88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ffb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffb8c:
    // 0x1ffb8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ffb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ffb90:
    // 0x1ffb90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ffb90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffb94:
    // 0x1ffb94: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ffb94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ffb98:
    // 0x1ffb98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ffb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ffb9c:
    // 0x1ffb9c: 0x3e00008  jr          $ra
label_1ffba0:
    if (ctx->pc == 0x1FFBA0u) {
        ctx->pc = 0x1FFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB9Cu;
        // 0x1ffba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFBA4u;
        goto label_fallthrough_0x1ffb9c;
    }
    ctx->pc = 0x1FFB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB9Cu;
        // 0x1ffba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ffb9c:
    ctx->pc = 0x1FFBA4u;
}
