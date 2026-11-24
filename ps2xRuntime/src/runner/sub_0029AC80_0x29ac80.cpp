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

// Function: sub_0029AC80
// Address: 0x29ac80 - 0x29afa0
void sub_0029AC80_0x29ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC80_0x29ac80");
#endif

    switch (ctx->pc) {
        case 0x29ad18u: goto label_29ad18;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ada8u: goto label_29ada8;
        case 0x29adb8u: goto label_29adb8;
        case 0x29af4cu: goto label_29af4c;
        default: break;
    }

    ctx->pc = 0x29ac80u;

    // 0x29ac80: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x29ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x29ac84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29ac88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29ac8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ac90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ac90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ac94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ac98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ac98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ac9c: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x29ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29aca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ACA0u;
    {
        const bool branch_taken_0x29aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACA0u;
        // 0x29aca4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aca0) {
            ctx->pc = 0x29ACB0u;
            goto label_29acb0;
        }
    }
    ctx->pc = 0x29ACA8u;
    // 0x29aca8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x29ACA8u;
    {
        const bool branch_taken_0x29aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACA8u;
        // 0x29acac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aca8) {
            ctx->pc = 0x29AF80u;
            goto label_29af80;
        }
    }
    ctx->pc = 0x29ACB0u;
label_29acb0:
    // 0x29acb0: 0x8c530054  lw          $s3, 0x54($v0)
    ctx->pc = 0x29acb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x29acb4: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x29ACB4u;
    {
        const bool branch_taken_0x29acb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x29acb4) {
            ctx->pc = 0x29ACC8u;
            goto label_29acc8;
        }
    }
    ctx->pc = 0x29ACBCu;
    // 0x29acbc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x29ACBCu;
    {
        const bool branch_taken_0x29acbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACBCu;
        // 0x29acc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acbc) {
            ctx->pc = 0x29AF80u;
            goto label_29af80;
        }
    }
    ctx->pc = 0x29ACC4u;
    // 0x29acc4: 0x0  nop
    ctx->pc = 0x29acc4u;
    // NOP
label_29acc8:
    // 0x29acc8: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x29acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x29accc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29ACCCu;
    {
        const bool branch_taken_0x29accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29accc) {
            ctx->pc = 0x29ACE0u;
            goto label_29ace0;
        }
    }
    ctx->pc = 0x29ACD4u;
    // 0x29acd4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x29ACD4u;
    {
        const bool branch_taken_0x29acd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACD4u;
        // 0x29acd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acd4) {
            ctx->pc = 0x29AF80u;
            goto label_29af80;
        }
    }
    ctx->pc = 0x29ACDCu;
    // 0x29acdc: 0x0  nop
    ctx->pc = 0x29acdcu;
    // NOP
label_29ace0:
    // 0x29ace0: 0x8c520080  lw          $s2, 0x80($v0)
    ctx->pc = 0x29ace0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x29ace4: 0x8c510094  lw          $s1, 0x94($v0)
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x29ace8: 0x92620085  lbu         $v0, 0x85($s3)
    ctx->pc = 0x29ace8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 133)));
    // 0x29acec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29ACECu;
    {
        const bool branch_taken_0x29acec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29acec) {
            ctx->pc = 0x29AD00u;
            goto label_29ad00;
        }
    }
    ctx->pc = 0x29ACF4u;
    // 0x29acf4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x29ACF4u;
    {
        const bool branch_taken_0x29acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACF4u;
        // 0x29acf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29acf4) {
            ctx->pc = 0x29AF80u;
            goto label_29af80;
        }
    }
    ctx->pc = 0x29ACFCu;
    // 0x29acfc: 0x0  nop
    ctx->pc = 0x29acfcu;
    // NOP
label_29ad00:
    // 0x29ad00: 0x92820172  lbu         $v0, 0x172($s4)
    ctx->pc = 0x29ad00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 370)));
    // 0x29ad04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ad08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AD08u;
    {
        const bool branch_taken_0x29ad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ad08) {
            ctx->pc = 0x29AD18u;
            goto label_29ad18;
        }
    }
    ctx->pc = 0x29AD10u;
    // 0x29ad10: 0xc0a7044  jal         func_29C110
    ctx->pc = 0x29AD10u;
    SET_GPR_U32(ctx, 31, 0x29AD18u);
    ctx->pc = 0x29AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD10u;
    // 0x29ad14: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C110u, 0x29AD10u, 0x29AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD18u;
label_29ad18:
    // 0x29ad18: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x29ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x29ad1c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29ad20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29ad20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad24: 0x26900180  addiu       $s0, $s4, 0x180
    ctx->pc = 0x29ad24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    // 0x29ad28: 0xc04144e  jal         func_105138
    ctx->pc = 0x29AD28u;
    SET_GPR_U32(ctx, 31, 0x29AD30u);
    ctx->pc = 0x29AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD28u;
    // 0x29ad2c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x29AD28u, 0x29AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD30u;
label_29ad30:
    // 0x29ad30: 0x92620084  lbu         $v0, 0x84($s3)
    ctx->pc = 0x29ad30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x29ad34: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29AD34u;
    {
        const bool branch_taken_0x29ad34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad34) {
            ctx->pc = 0x29AD68u;
            goto label_29ad68;
        }
    }
    ctx->pc = 0x29AD3Cu;
    // 0x29ad3c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x29ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29ad40: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29ad44: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x29ad44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ad48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x29ad48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x29ad4c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x29ad4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29ad50: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x29ad50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x29ad54: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x29ad54u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29ad58: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x29ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
    // 0x29ad5c: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x29ad5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29ad60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29AD60u;
    {
        const bool branch_taken_0x29ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AD60u;
        // 0x29ad64: 0x7c640030  sq          $a0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ad60) {
            ctx->pc = 0x29ADB8u;
            goto label_29adb8;
        }
    }
    ctx->pc = 0x29AD68u;
label_29ad68:
    // 0x29ad68: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x29ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x29ad6c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x29ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ad70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ad70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad74: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ad78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29ad78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ad7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29ad7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad80: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29ad84: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x29ad84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x29ad88: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x29ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x29ad8c: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x29ad8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x29ad90: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x29ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x29ad94: 0x79020020  lq          $v0, 0x20($t0)
    ctx->pc = 0x29ad94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x29ad98: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x29ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x29ad9c: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x29ad9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x29ada0: 0xc06031c  jal         func_180C70
    ctx->pc = 0x29ADA0u;
    SET_GPR_U32(ctx, 31, 0x29ADA8u);
    ctx->pc = 0x29ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADA0u;
    // 0x29ada4: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C70u, 0x29ADA0u, 0x29ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADA8u;
label_29ada8:
    // 0x29ada8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29adac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29adacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29adb0: 0xc04144e  jal         func_105138
    ctx->pc = 0x29ADB0u;
    SET_GPR_U32(ctx, 31, 0x29ADB8u);
    ctx->pc = 0x29ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADB0u;
    // 0x29adb4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x29ADB0u, 0x29ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADB8u;
label_29adb8:
    // 0x29adb8: 0x92620086  lbu         $v0, 0x86($s3)
    ctx->pc = 0x29adb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 134)));
    // 0x29adbc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x29ADBCu;
    {
        const bool branch_taken_0x29adbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29adbc) {
            ctx->pc = 0x29AE30u;
            goto label_29ae30;
        }
    }
    ctx->pc = 0x29ADC4u;
    // 0x29adc4: 0x92620084  lbu         $v0, 0x84($s3)
    ctx->pc = 0x29adc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x29adc8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29ADC8u;
    {
        const bool branch_taken_0x29adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29adc8) {
            ctx->pc = 0x29ADF8u;
            goto label_29adf8;
        }
    }
    ctx->pc = 0x29ADD0u;
    // 0x29add0: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x29add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x29add4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29add4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29add8: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x29add8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x29addc: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x29addcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29ade0: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x29ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x29ade4: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x29ade4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29ade8: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x29ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x29adec: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x29adecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29adf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x29ADF0u;
    {
        const bool branch_taken_0x29adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADF0u;
        // 0x29adf4: 0x7e630030  sq          $v1, 0x30($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29adf0) {
            ctx->pc = 0x29AE20u;
            goto label_29ae20;
        }
    }
    ctx->pc = 0x29ADF8u;
label_29adf8:
    // 0x29adf8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x29adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29adfc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29adfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ae00: 0x7e630000  sq          $v1, 0x0($s3)
    ctx->pc = 0x29ae00u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 3));
    // 0x29ae04: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x29ae04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29ae08: 0x7e630010  sq          $v1, 0x10($s3)
    ctx->pc = 0x29ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 3));
    // 0x29ae0c: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x29ae0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29ae10: 0x7e630020  sq          $v1, 0x20($s3)
    ctx->pc = 0x29ae10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 3));
    // 0x29ae14: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x29ae14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29ae18: 0x7e630030  sq          $v1, 0x30($s3)
    ctx->pc = 0x29ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 3));
    // 0x29ae1c: 0x0  nop
    ctx->pc = 0x29ae1cu;
    // NOP
label_29ae20:
    // 0x29ae20: 0x96620080  lhu         $v0, 0x80($s3)
    ctx->pc = 0x29ae20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x29ae24: 0xa6620082  sh          $v0, 0x82($s3)
    ctx->pc = 0x29ae24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x29ae28: 0xa2600086  sb          $zero, 0x86($s3)
    ctx->pc = 0x29ae28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ae2c: 0x0  nop
    ctx->pc = 0x29ae2cu;
    // NOP
label_29ae30:
    // 0x29ae30: 0x96630082  lhu         $v1, 0x82($s3)
    ctx->pc = 0x29ae30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 130)));
    // 0x29ae34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ae38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29ae38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ae3c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x29AE3Cu;
    {
        const bool branch_taken_0x29ae3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae3c) {
            ctx->pc = 0x29AEF0u;
            goto label_29aef0;
        }
    }
    ctx->pc = 0x29AE44u;
    // 0x29ae44: 0x8e820148  lw          $v0, 0x148($s4)
    ctx->pc = 0x29ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x29ae48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ae48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ae4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29ae4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29ae50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29ae54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ae58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AE58u;
    {
        const bool branch_taken_0x29ae58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae58) {
            ctx->pc = 0x29AE68u;
            goto label_29ae68;
        }
    }
    ctx->pc = 0x29AE60u;
    // 0x29ae60: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x29ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29ae64: 0xa6620082  sh          $v0, 0x82($s3)
    ctx->pc = 0x29ae64u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 130), (uint16_t)GPR_U32(ctx, 2));
label_29ae68:
    // 0x29ae68: 0x96620082  lhu         $v0, 0x82($s3)
    ctx->pc = 0x29ae68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 130)));
    // 0x29ae6c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AE6Cu;
    {
        const bool branch_taken_0x29ae6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE6Cu;
        // 0x29ae70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae6c) {
            ctx->pc = 0x29AE84u;
            goto label_29ae84;
        }
    }
    ctx->pc = 0x29AE74u;
    // 0x29ae74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ae74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ae78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AE78u;
    {
        const bool branch_taken_0x29ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE78u;
        // 0x29ae7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae78) {
            ctx->pc = 0x29AE9Cu;
            goto label_29ae9c;
        }
    }
    ctx->pc = 0x29AE80u;
    // 0x29ae80: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_29ae84:
    // 0x29ae84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ae88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29ae88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29ae8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ae8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ae90: 0x0  nop
    ctx->pc = 0x29ae90u;
    // NOP
    // 0x29ae94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29ae94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29ae98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29ae98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29ae9c:
    // 0x29ae9c: 0x96620080  lhu         $v0, 0x80($s3)
    ctx->pc = 0x29ae9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x29aea0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29AEA0u;
    {
        const bool branch_taken_0x29aea0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEA0u;
        // 0x29aea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aea0) {
            ctx->pc = 0x29AEB8u;
            goto label_29aeb8;
        }
    }
    ctx->pc = 0x29AEA8u;
    // 0x29aea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aeac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29AEACu;
    {
        const bool branch_taken_0x29aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEACu;
        // 0x29aeb0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aeac) {
            ctx->pc = 0x29AED0u;
            goto label_29aed0;
        }
    }
    ctx->pc = 0x29AEB4u;
    // 0x29aeb4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_29aeb8:
    // 0x29aeb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29aebc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29aebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29aec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29aec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aec4: 0x0  nop
    ctx->pc = 0x29aec4u;
    // NOP
    // 0x29aec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29aec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29aecc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29aeccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_29aed0:
    // 0x29aed0: 0x0  nop
    ctx->pc = 0x29aed0u;
    // NOP
    // 0x29aed4: 0x0  nop
    ctx->pc = 0x29aed4u;
    // NOP
    // 0x29aed8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29aed8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29aedc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29aee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aee4: 0x0  nop
    ctx->pc = 0x29aee4u;
    // NOP
    // 0x29aee8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x29aee8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29aeec: 0x0  nop
    ctx->pc = 0x29aeecu;
    // NOP
label_29aef0:
    // 0x29aef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29aef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29aef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29aef8: 0x0  nop
    ctx->pc = 0x29aef8u;
    // NOP
    // 0x29aefc: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x29aefcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29af00: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x29AF00u;
    {
        const bool branch_taken_0x29af00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29af00) {
            ctx->pc = 0x29AF30u;
            goto label_29af30;
        }
    }
    ctx->pc = 0x29AF08u;
    // 0x29af08: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x29af08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29af0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x29af0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29af10: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x29af10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x29af14: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x29af14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29af18: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x29af18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x29af1c: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x29af1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29af20: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x29af20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x29af24: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x29af24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29af28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29AF28u;
    {
        const bool branch_taken_0x29af28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF28u;
        // 0x29af2c: 0x7e230030  sq          $v1, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af28) {
            ctx->pc = 0x29AF50u;
            goto label_29af50;
        }
    }
    ctx->pc = 0x29AF30u;
label_29af30:
    // 0x29af30: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x29af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x29af34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29af34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af38: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29af3c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x29af3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af40: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x29af40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29af44: 0xc06011c  jal         func_180470
    ctx->pc = 0x29AF44u;
    SET_GPR_U32(ctx, 31, 0x29AF4Cu);
    ctx->pc = 0x29AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF44u;
    // 0x29af48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180470u, 0x29AF44u, 0x29AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF4Cu;
label_29af4c:
    // 0x29af4c: 0x0  nop
    ctx->pc = 0x29af4cu;
    // NOP
label_29af50:
    // 0x29af50: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x29af50u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29af54: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x29af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x29af58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29af5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29af60: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x29af60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x29af64: 0x7a250010  lq          $a1, 0x10($s1)
    ctx->pc = 0x29af64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29af68: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x29af68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x29af6c: 0x7a250020  lq          $a1, 0x20($s1)
    ctx->pc = 0x29af6cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x29af70: 0x7c850020  sq          $a1, 0x20($a0)
    ctx->pc = 0x29af70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 5));
    // 0x29af74: 0x7a250030  lq          $a1, 0x30($s1)
    ctx->pc = 0x29af74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x29af78: 0x7c850030  sq          $a1, 0x30($a0)
    ctx->pc = 0x29af78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 5));
    // 0x29af7c: 0xae4300d4  sw          $v1, 0xD4($s2)
    ctx->pc = 0x29af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
label_29af80:
    // 0x29af80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29af80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29af84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29af84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29af88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29af88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29af8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29af8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29af90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29af94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29af94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af98: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF98u;
        // 0x29af9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AFA0u;
}
