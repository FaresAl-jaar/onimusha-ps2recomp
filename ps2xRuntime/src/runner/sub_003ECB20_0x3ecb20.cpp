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

// Function: sub_003ECB20
// Address: 0x3ecb20 - 0x3ecfc4
void sub_003ECB20_0x3ecb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECB20_0x3ecb20");
#endif

    switch (ctx->pc) {
        case 0x3ecb38u: goto label_3ecb38;
        case 0x3ecb60u: goto label_3ecb60;
        case 0x3ecb68u: goto label_3ecb68;
        case 0x3ecb80u: goto label_3ecb80;
        case 0x3ecb88u: goto label_3ecb88;
        case 0x3ecba0u: goto label_3ecba0;
        case 0x3ecba8u: goto label_3ecba8;
        case 0x3ecbb0u: goto label_3ecbb0;
        case 0x3ecbc4u: goto label_3ecbc4;
        case 0x3ecbf0u: goto label_3ecbf0;
        case 0x3ecbf8u: goto label_3ecbf8;
        case 0x3ecc10u: goto label_3ecc10;
        case 0x3ecc18u: goto label_3ecc18;
        case 0x3ecc30u: goto label_3ecc30;
        case 0x3ecc38u: goto label_3ecc38;
        case 0x3ecc50u: goto label_3ecc50;
        case 0x3ecc58u: goto label_3ecc58;
        case 0x3ecc70u: goto label_3ecc70;
        case 0x3ecc78u: goto label_3ecc78;
        case 0x3ecc90u: goto label_3ecc90;
        case 0x3ecc98u: goto label_3ecc98;
        case 0x3eccb0u: goto label_3eccb0;
        case 0x3eccb8u: goto label_3eccb8;
        case 0x3eccd0u: goto label_3eccd0;
        case 0x3eccd8u: goto label_3eccd8;
        case 0x3eccf0u: goto label_3eccf0;
        case 0x3eccf8u: goto label_3eccf8;
        case 0x3ecd10u: goto label_3ecd10;
        case 0x3ecd18u: goto label_3ecd18;
        case 0x3ecd80u: goto label_3ecd80;
        case 0x3ecd88u: goto label_3ecd88;
        case 0x3ecda0u: goto label_3ecda0;
        case 0x3ecda8u: goto label_3ecda8;
        case 0x3ece10u: goto label_3ece10;
        case 0x3ece28u: goto label_3ece28;
        case 0x3ece30u: goto label_3ece30;
        case 0x3ece38u: goto label_3ece38;
        case 0x3ece58u: goto label_3ece58;
        case 0x3ece60u: goto label_3ece60;
        case 0x3ece90u: goto label_3ece90;
        case 0x3ecf48u: goto label_3ecf48;
        case 0x3ecf50u: goto label_3ecf50;
        case 0x3ecf68u: goto label_3ecf68;
        case 0x3ecf70u: goto label_3ecf70;
        case 0x3ecf88u: goto label_3ecf88;
        case 0x3ecf90u: goto label_3ecf90;
        case 0x3ecfa8u: goto label_3ecfa8;
        default: break;
    }

    ctx->pc = 0x3ecb20u;

    // 0x3ecb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ecb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ecb24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ecb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ecb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ecb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ecb2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ecb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ecb30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ecb30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb34: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3ecb34u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ecb38:
    // 0x3ecb38: 0x92232bae  lbu         $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecb38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11182)));
    // 0x3ecb3c: 0x2c610028  sltiu       $at, $v1, 0x28
    ctx->pc = 0x3ecb3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x3ecb40: 0x10200119  beqz        $at, . + 4 + (0x119 << 2)
    ctx->pc = 0x3ECB40u;
    {
        const bool branch_taken_0x3ecb40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB40u;
        // 0x3ecb44: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb40) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECB48u;
    // 0x3ecb48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ecb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ecb4c: 0x24844ef0  addiu       $a0, $a0, 0x4EF0
    ctx->pc = 0x3ecb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20208));
    // 0x3ecb50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ecb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ecb54: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ecb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ecb58: 0x600008  jr          $v1
    ctx->pc = 0x3ECB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3ECB60u: goto label_3ecb60;
            case 0x3ECB68u: goto label_3ecb68;
            case 0x3ECB80u: goto label_3ecb80;
            case 0x3ECB88u: goto label_3ecb88;
            case 0x3ECBA0u: goto label_3ecba0;
            case 0x3ECBA8u: goto label_3ecba8;
            case 0x3ECBF0u: goto label_3ecbf0;
            case 0x3ECBF8u: goto label_3ecbf8;
            case 0x3ECC10u: goto label_3ecc10;
            case 0x3ECC18u: goto label_3ecc18;
            case 0x3ECC30u: goto label_3ecc30;
            case 0x3ECC38u: goto label_3ecc38;
            case 0x3ECC50u: goto label_3ecc50;
            case 0x3ECC58u: goto label_3ecc58;
            case 0x3ECC70u: goto label_3ecc70;
            case 0x3ECC78u: goto label_3ecc78;
            case 0x3ECC90u: goto label_3ecc90;
            case 0x3ECC98u: goto label_3ecc98;
            case 0x3ECCB0u: goto label_3eccb0;
            case 0x3ECCB8u: goto label_3eccb8;
            case 0x3ECCD0u: goto label_3eccd0;
            case 0x3ECCD8u: goto label_3eccd8;
            case 0x3ECCF0u: goto label_3eccf0;
            case 0x3ECCF8u: goto label_3eccf8;
            case 0x3ECD10u: goto label_3ecd10;
            case 0x3ECD18u: goto label_3ecd18;
            case 0x3ECD80u: goto label_3ecd80;
            case 0x3ECD88u: goto label_3ecd88;
            case 0x3ECDA0u: goto label_3ecda0;
            case 0x3ECDA8u: goto label_3ecda8;
            case 0x3ECE28u: goto label_3ece28;
            case 0x3ECE30u: goto label_3ece30;
            case 0x3ECE58u: goto label_3ece58;
            case 0x3ECE60u: goto label_3ece60;
            case 0x3ECF48u: goto label_3ecf48;
            case 0x3ECF50u: goto label_3ecf50;
            case 0x3ECF68u: goto label_3ecf68;
            case 0x3ECF70u: goto label_3ecf70;
            case 0x3ECF88u: goto label_3ecf88;
            case 0x3ECF90u: goto label_3ecf90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECB58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3ECB60u;
label_3ecb60:
    // 0x3ecb60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ecb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ecb64: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecb64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecb68:
    // 0x3ecb68: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3ecb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3ecb6c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecb70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ecb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ecb78: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x3ECB78u;
    {
        const bool branch_taken_0x3ecb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB78u;
        // 0x3ecb7c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb78) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECB80u;
label_3ecb80:
    // 0x3ecb80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ecb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ecb84: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecb84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecb88:
    // 0x3ecb88: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3ecb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3ecb8c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecb90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecb94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecb98: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x3ECB98u;
    {
        const bool branch_taken_0x3ecb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB98u;
        // 0x3ecb9c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb98) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECBA0u;
label_3ecba0:
    // 0x3ecba0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ecba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ecba4: 0xa2222bae  sb          $v0, 0x2BAE($s1)
    ctx->pc = 0x3ecba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 2));
label_3ecba8:
    // 0x3ecba8: 0xc0fa3c0  jal         func_3E8F00
    ctx->pc = 0x3ECBA8u;
    SET_GPR_U32(ctx, 31, 0x3ECBB0u);
    ctx->pc = 0x3ECBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECBA8u;
    // 0x3ecbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8F00u, 0x3ECBA8u, 0x3ECBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECBB0u;
label_3ecbb0:
    // 0x3ecbb0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ecbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ecbb4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ECBB4u;
    {
        const bool branch_taken_0x3ecbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3ECBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBB4u;
        // 0x3ecbb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbb4) {
            ctx->pc = 0x3ECBD0u;
            goto label_3ecbd0;
        }
    }
    ctx->pc = 0x3ECBBCu;
    // 0x3ecbbc: 0xc0fa364  jal         func_3E8D90
    ctx->pc = 0x3ECBBCu;
    SET_GPR_U32(ctx, 31, 0x3ECBC4u);
    ctx->pc = 0x3E8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8D90u, 0x3ECBBCu, 0x3ECBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECBC4u;
label_3ecbc4:
    // 0x3ecbc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecbc8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x3ECBC8u;
    {
        const bool branch_taken_0x3ecbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBC8u;
        // 0x3ecbcc: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbc8) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECBD0u;
label_3ecbd0:
    // 0x3ecbd0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ecbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ecbd4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3ecbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ecbd8: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x3ecbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
    // 0x3ecbdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ecbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ecbe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3ecbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ecbe4: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x3ECBE4u;
    {
        const bool branch_taken_0x3ecbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBE4u;
        // 0x3ecbe8: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbe4) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECBECu;
    // 0x3ecbec: 0x0  nop
    ctx->pc = 0x3ecbecu;
    // NOP
label_3ecbf0:
    // 0x3ecbf0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3ecbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ecbf4: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecbf8:
    // 0x3ecbf8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3ecbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3ecbfc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecbfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecc08: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x3ECC08u;
    {
        const bool branch_taken_0x3ecc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC08u;
        // 0x3ecc0c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc08) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECC10u;
label_3ecc10:
    // 0x3ecc10: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ecc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ecc14: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecc14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecc18:
    // 0x3ecc18: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x3ecc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3ecc1c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecc28: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x3ECC28u;
    {
        const bool branch_taken_0x3ecc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC28u;
        // 0x3ecc2c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc28) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECC30u;
label_3ecc30:
    // 0x3ecc30: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3ecc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ecc34: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecc34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecc38:
    // 0x3ecc38: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3ecc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3ecc3c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecc48: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3ECC48u;
    {
        const bool branch_taken_0x3ecc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC48u;
        // 0x3ecc4c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc48) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECC50u;
label_3ecc50:
    // 0x3ecc50: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3ecc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3ecc54: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecc54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecc58:
    // 0x3ecc58: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3ecc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3ecc5c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecc68: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x3ECC68u;
    {
        const bool branch_taken_0x3ecc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC68u;
        // 0x3ecc6c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc68) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECC70u;
label_3ecc70:
    // 0x3ecc70: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3ecc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3ecc74: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecc74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecc78:
    // 0x3ecc78: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x3ecc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3ecc7c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecc80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecc88: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x3ECC88u;
    {
        const bool branch_taken_0x3ecc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC88u;
        // 0x3ecc8c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc88) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECC90u;
label_3ecc90:
    // 0x3ecc90: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3ecc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ecc94: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecc94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecc98:
    // 0x3ecc98: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x3ecc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3ecc9c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecca0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecca4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecca8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x3ECCA8u;
    {
        const bool branch_taken_0x3ecca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECCA8u;
        // 0x3eccac: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecca8) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECCB0u;
label_3eccb0:
    // 0x3eccb0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3eccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3eccb4: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3eccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3eccb8:
    // 0x3eccb8: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x3eccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x3eccbc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3eccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3eccc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eccc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eccc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3eccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3eccc8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x3ECCC8u;
    {
        const bool branch_taken_0x3eccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECCC8u;
        // 0x3ecccc: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eccc8) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECCD0u;
label_3eccd0:
    // 0x3eccd0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3eccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3eccd4: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3eccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3eccd8:
    // 0x3eccd8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x3eccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3eccdc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3eccdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecce0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecce4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecce8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3ECCE8u;
    {
        const bool branch_taken_0x3ecce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECCE8u;
        // 0x3eccec: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecce8) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECCF0u;
label_3eccf0:
    // 0x3eccf0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x3eccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3eccf4: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3eccf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3eccf8:
    // 0x3eccf8: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x3eccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x3eccfc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3eccfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecd00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd04: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3ecd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3ecd08: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x3ECD08u;
    {
        const bool branch_taken_0x3ecd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD08u;
        // 0x3ecd0c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd08) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECD10u;
label_3ecd10:
    // 0x3ecd10: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x3ecd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3ecd14: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecd18:
    // 0x3ecd18: 0x92242b2d  lbu         $a0, 0x2B2D($s1)
    ctx->pc = 0x3ecd18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11053)));
    // 0x3ecd1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ecd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ecd20: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3ECD20u;
    {
        const bool branch_taken_0x3ecd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ECD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD20u;
        // 0x3ecd24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd20) {
            ctx->pc = 0x3ECD70u;
            goto label_3ecd70;
        }
    }
    ctx->pc = 0x3ECD28u;
    // 0x3ecd28: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3ECD28u;
    {
        const bool branch_taken_0x3ecd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ecd28) {
            ctx->pc = 0x3ECD60u;
            goto label_3ecd60;
        }
    }
    ctx->pc = 0x3ECD30u;
    // 0x3ecd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ecd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ecd34: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ECD34u;
    {
        const bool branch_taken_0x3ecd34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ecd34) {
            ctx->pc = 0x3ECD50u;
            goto label_3ecd50;
        }
    }
    ctx->pc = 0x3ECD3Cu;
    // 0x3ecd3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECD3Cu;
    {
        const bool branch_taken_0x3ecd3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecd3c) {
            ctx->pc = 0x3ECD50u;
            goto label_3ecd50;
        }
    }
    ctx->pc = 0x3ECD44u;
    // 0x3ecd44: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3ECD44u;
    {
        const bool branch_taken_0x3ecd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecd44) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECD4Cu;
    // 0x3ecd4c: 0x0  nop
    ctx->pc = 0x3ecd4cu;
    // NOP
label_3ecd50:
    // 0x3ecd50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecd54: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x3ECD54u;
    {
        const bool branch_taken_0x3ecd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD54u;
        // 0x3ecd58: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd54) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECD5Cu;
    // 0x3ecd5c: 0x0  nop
    ctx->pc = 0x3ecd5cu;
    // NOP
label_3ecd60:
    // 0x3ecd60: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x3ecd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3ecd64: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x3ECD64u;
    {
        const bool branch_taken_0x3ecd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD64u;
        // 0x3ecd68: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd64) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECD6Cu;
    // 0x3ecd6c: 0x0  nop
    ctx->pc = 0x3ecd6cu;
    // NOP
label_3ecd70:
    // 0x3ecd70: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3ecd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3ecd74: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x3ECD74u;
    {
        const bool branch_taken_0x3ecd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD74u;
        // 0x3ecd78: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd74) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECD7Cu;
    // 0x3ecd7c: 0x0  nop
    ctx->pc = 0x3ecd7cu;
    // NOP
label_3ecd80:
    // 0x3ecd80: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x3ecd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3ecd84: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecd84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecd88:
    // 0x3ecd88: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3ecd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3ecd8c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecd90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ecd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ecd98: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3ECD98u;
    {
        const bool branch_taken_0x3ecd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD98u;
        // 0x3ecd9c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd98) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECDA0u;
label_3ecda0:
    // 0x3ecda0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x3ecda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x3ecda4: 0xa2222bae  sb          $v0, 0x2BAE($s1)
    ctx->pc = 0x3ecda4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 2));
label_3ecda8:
    // 0x3ecda8: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x3ecda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x3ecdac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ecdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ecdb0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ecdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ecdb4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ecdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ecdb8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3ecdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ecdbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ecdbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ecdc0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ecdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ecdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ecdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ecdc8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ecdc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ecdcc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ecdccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ecdd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ecdd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ecdd4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3ECDD4u;
    {
        const bool branch_taken_0x3ecdd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ecdd4) {
            ctx->pc = 0x3ECDECu;
            goto label_3ecdec;
        }
    }
    ctx->pc = 0x3ECDDCu;
    // 0x3ecddc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ecde0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ecde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ecde4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ECDE4u;
    {
        const bool branch_taken_0x3ecde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDE4u;
        // 0x3ecde8: 0xa6232b24  sh          $v1, 0x2B24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecde4) {
            ctx->pc = 0x3ECE08u;
            goto label_3ece08;
        }
    }
    ctx->pc = 0x3ECDECu;
label_3ecdec:
    // 0x3ecdec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ecdecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ecdf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ecdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ecdf4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecdf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ecdf8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ecdf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ecdfc: 0x0  nop
    ctx->pc = 0x3ecdfcu;
    // NOP
    // 0x3ece00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ece00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ece04: 0xa6232b24  sh          $v1, 0x2B24($s1)
    ctx->pc = 0x3ece04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3ece08:
    // 0x3ece08: 0xc0fb6cc  jal         func_3EDB30
    ctx->pc = 0x3ECE08u;
    SET_GPR_U32(ctx, 31, 0x3ECE10u);
    ctx->pc = 0x3EDB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDB30u, 0x3ECE08u, 0x3ECE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECE10u;
label_3ece10:
    // 0x3ece10: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x3ece10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3ece14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ece14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ece18: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ece18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ece1c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3ece1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3ece20: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3ECE20u;
    {
        const bool branch_taken_0x3ece20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE20u;
        // 0x3ece24: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece20) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECE28u;
label_3ece28:
    // 0x3ece28: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3ece28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3ece2c: 0xa2222bae  sb          $v0, 0x2BAE($s1)
    ctx->pc = 0x3ece2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 2));
label_3ece30:
    // 0x3ece30: 0xc0fb6b0  jal         func_3EDAC0
    ctx->pc = 0x3ECE30u;
    SET_GPR_U32(ctx, 31, 0x3ECE38u);
    ctx->pc = 0x3EDAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDAC0u, 0x3ECE30u, 0x3ECE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECE38u;
label_3ece38:
    // 0x3ece38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECE38u;
    {
        const bool branch_taken_0x3ece38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE38u;
        // 0x3ece3c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece38) {
            ctx->pc = 0x3ECE48u;
            goto label_3ece48;
        }
    }
    ctx->pc = 0x3ECE40u;
    // 0x3ece40: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x3ECE40u;
    {
        const bool branch_taken_0x3ece40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE40u;
        // 0x3ece44: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece40) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECE48u;
label_3ece48:
    // 0x3ece48: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x3ece48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3ece4c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3ECE4Cu;
    {
        const bool branch_taken_0x3ece4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE4Cu;
        // 0x3ece50: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece4c) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECE54u;
    // 0x3ece54: 0x0  nop
    ctx->pc = 0x3ece54u;
    // NOP
label_3ece58:
    // 0x3ece58: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3ece58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3ece5c: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ece5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ece60:
    // 0x3ece60: 0xc62d28f0  lwc1        $f13, 0x28F0($s1)
    ctx->pc = 0x3ece60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3ece64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ece64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ece68: 0x0  nop
    ctx->pc = 0x3ece68u;
    // NOP
    // 0x3ece6c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x3ece6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ece70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECE70u;
    {
        const bool branch_taken_0x3ece70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ECE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE70u;
        // 0x3ece74: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece70) {
            ctx->pc = 0x3ECE80u;
            goto label_3ece80;
        }
    }
    ctx->pc = 0x3ECE78u;
    // 0x3ece78: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3ECE78u;
    {
        const bool branch_taken_0x3ece78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE78u;
        // 0x3ece7c: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece78) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECE80u;
label_3ece80:
    // 0x3ece80: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x3ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x3ece84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ece84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ece88: 0xc0fa3fc  jal         func_3E8FF0
    ctx->pc = 0x3ECE88u;
    SET_GPR_U32(ctx, 31, 0x3ECE90u);
    ctx->pc = 0x3ECE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECE88u;
    // 0x3ece8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FF0u, 0x3ECE88u, 0x3ECE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECE90u;
label_3ece90:
    // 0x3ece90: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ece90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ece94: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x3ece94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x3ece98: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ece98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ece9c: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3ece9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3ecea0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3ecea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3ecea4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ecea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ecea8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ecea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eceac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eceacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eceb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eceb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eceb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eceb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eceb8: 0x0  nop
    ctx->pc = 0x3eceb8u;
    // NOP
    // 0x3ecebc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ecebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ecec0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3ECEC0u;
    {
        const bool branch_taken_0x3ecec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ECEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEC0u;
        // 0x3ecec4: 0xc6242b48  lwc1        $f4, 0x2B48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecec0) {
            ctx->pc = 0x3ECED8u;
            goto label_3eced8;
        }
    }
    ctx->pc = 0x3ECEC8u;
    // 0x3ecec8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ececc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ececcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3eced0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ECED0u;
    {
        const bool branch_taken_0x3eced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eced0) {
            ctx->pc = 0x3ECEF0u;
            goto label_3ecef0;
        }
    }
    ctx->pc = 0x3ECED8u;
label_3eced8:
    // 0x3eced8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eced8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ecedc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ecedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ecee0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ecee4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ecee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ecee8: 0x0  nop
    ctx->pc = 0x3ecee8u;
    // NOP
    // 0x3eceec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3eceecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3ecef0:
    // 0x3ecef0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECEF0u;
    {
        const bool branch_taken_0x3ecef0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3ECEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEF0u;
        // 0x3ecef4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecef0) {
            ctx->pc = 0x3ECF04u;
            goto label_3ecf04;
        }
    }
    ctx->pc = 0x3ECEF8u;
    // 0x3ecef8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ecef8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ecefc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ECEFCu;
    {
        const bool branch_taken_0x3ecefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECEFCu;
        // 0x3ecf00: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecefc) {
            ctx->pc = 0x3ECF1Cu;
            goto label_3ecf1c;
        }
    }
    ctx->pc = 0x3ECF04u;
label_3ecf04:
    // 0x3ecf04: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3ecf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3ecf08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ecf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ecf0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ecf0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ecf10: 0x0  nop
    ctx->pc = 0x3ecf10u;
    // NOP
    // 0x3ecf14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ecf14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ecf18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ecf18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ecf1c:
    // 0x3ecf1c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3ecf1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3ecf20: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x3ecf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3ecf24: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3ecf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3ecf28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ecf2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ecf30: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3ecf30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ecf34: 0x0  nop
    ctx->pc = 0x3ecf34u;
    // NOP
    // 0x3ecf38: 0xa6252b24  sh          $a1, 0x2B24($s1)
    ctx->pc = 0x3ecf38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11044), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ecf3c: 0xa2240780  sb          $a0, 0x780($s1)
    ctx->pc = 0x3ecf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ecf40: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3ECF40u;
    {
        const bool branch_taken_0x3ecf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF40u;
        // 0x3ecf44: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf40) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECF48u;
label_3ecf48:
    // 0x3ecf48: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x3ecf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3ecf4c: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecf50:
    // 0x3ecf50: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x3ecf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3ecf54: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecf54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecf58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecf58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf5c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3ecf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3ecf60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3ECF60u;
    {
        const bool branch_taken_0x3ecf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF60u;
        // 0x3ecf64: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf60) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECF68u;
label_3ecf68:
    // 0x3ecf68: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x3ecf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3ecf6c: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecf70:
    // 0x3ecf70: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x3ecf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3ecf74: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecf74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecf78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ecf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ecf80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3ECF80u;
    {
        const bool branch_taken_0x3ecf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF80u;
        // 0x3ecf84: 0xa2232bae  sb          $v1, 0x2BAE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecf80) {
            ctx->pc = 0x3ECFA8u;
            goto label_3ecfa8;
        }
    }
    ctx->pc = 0x3ECF88u;
label_3ecf88:
    // 0x3ecf88: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x3ecf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3ecf8c: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
label_3ecf90:
    // 0x3ecf90: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3ecf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3ecf94: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3ecf94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecf98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ecf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecf9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ecf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ecfa0: 0xa2232bae  sb          $v1, 0x2BAE($s1)
    ctx->pc = 0x3ecfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11182), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ecfa4: 0x0  nop
    ctx->pc = 0x3ecfa4u;
    // NOP
label_3ecfa8:
    // 0x3ecfa8: 0x1600fee3  bnez        $s0, . + 4 + (-0x11D << 2)
    ctx->pc = 0x3ECFA8u;
    {
        const bool branch_taken_0x3ecfa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecfa8) {
            ctx->pc = 0x3ECB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecb38;
        }
    }
    ctx->pc = 0x3ECFB0u;
    // 0x3ecfb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ecfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ecfb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ecfb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ecfb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ecfb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ecfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECFBCu;
        // 0x3ecfc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECFC4u;
}
