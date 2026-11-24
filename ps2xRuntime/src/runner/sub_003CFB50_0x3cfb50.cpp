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

// Function: sub_003CFB50
// Address: 0x3cfb50 - 0x3d009c
void sub_003CFB50_0x3cfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CFB50_0x3cfb50");
#endif

    switch (ctx->pc) {
        case 0x3cfb84u: goto label_3cfb84;
        case 0x3cfbb0u: goto label_3cfbb0;
        case 0x3cfbfcu: goto label_3cfbfc;
        case 0x3cfc10u: goto label_3cfc10;
        case 0x3cfc48u: goto label_3cfc48;
        case 0x3cfc5cu: goto label_3cfc5c;
        case 0x3cfcd0u: goto label_3cfcd0;
        case 0x3cfce8u: goto label_3cfce8;
        case 0x3cfcf8u: goto label_3cfcf8;
        case 0x3cfd94u: goto label_3cfd94;
        case 0x3cfda0u: goto label_3cfda0;
        case 0x3cfdd8u: goto label_3cfdd8;
        case 0x3cfe04u: goto label_3cfe04;
        case 0x3cfe54u: goto label_3cfe54;
        case 0x3cfec0u: goto label_3cfec0;
        case 0x3cff0cu: goto label_3cff0c;
        case 0x3cff14u: goto label_3cff14;
        case 0x3cff30u: goto label_3cff30;
        case 0x3cff64u: goto label_3cff64;
        case 0x3cff70u: goto label_3cff70;
        case 0x3d0000u: goto label_3d0000;
        case 0x3d0018u: goto label_3d0018;
        case 0x3d0034u: goto label_3d0034;
        case 0x3d0068u: goto label_3d0068;
        case 0x3d0074u: goto label_3d0074;
        default: break;
    }

    ctx->pc = 0x3cfb50u;

    // 0x3cfb50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3cfb54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3cfb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3cfb58: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3cfb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3cfb5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3cfb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3cfb60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cfb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3cfb64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3cfb64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfb68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3cfb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3cfb6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3cfb6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfb70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3cfb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3cfb74: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CFB74u;
    {
        const bool branch_taken_0x3cfb74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFB74u;
        // 0x3cfb78: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfb74) {
            ctx->pc = 0x3CFB90u;
            goto label_3cfb90;
        }
    }
    ctx->pc = 0x3CFB7Cu;
    // 0x3cfb7c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CFB7Cu;
    SET_GPR_U32(ctx, 31, 0x3CFB84u);
    ctx->pc = 0x3CFB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFB7Cu;
    // 0x3cfb80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CFB7Cu, 0x3CFB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFB84u;
label_3cfb84:
    // 0x3cfb84: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x3CFB84u;
    {
        const bool branch_taken_0x3cfb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfb84) {
            ctx->pc = 0x3D0078u;
            goto label_3d0078;
        }
    }
    ctx->pc = 0x3CFB8Cu;
    // 0x3cfb8c: 0x0  nop
    ctx->pc = 0x3cfb8cu;
    // NOP
label_3cfb90:
    // 0x3cfb90: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CFB90u;
    {
        const bool branch_taken_0x3cfb90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfb90) {
            ctx->pc = 0x3CFBB8u;
            goto label_3cfbb8;
        }
    }
    ctx->pc = 0x3CFB98u;
    // 0x3cfb98: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x3cfb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x3cfb9c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3cfb9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cfba0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CFBA0u;
    {
        const bool branch_taken_0x3cfba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFBA0u;
        // 0x3cfba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfba0) {
            ctx->pc = 0x3CFBB8u;
            goto label_3cfbb8;
        }
    }
    ctx->pc = 0x3CFBA8u;
    // 0x3cfba8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CFBA8u;
    SET_GPR_U32(ctx, 31, 0x3CFBB0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CFBA8u, 0x3CFBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFBB0u;
label_3cfbb0:
    // 0x3cfbb0: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x3CFBB0u;
    {
        const bool branch_taken_0x3cfbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfbb0) {
            ctx->pc = 0x3D0078u;
            goto label_3d0078;
        }
    }
    ctx->pc = 0x3CFBB8u;
label_3cfbb8:
    // 0x3cfbb8: 0x92840521  lbu         $a0, 0x521($s4)
    ctx->pc = 0x3cfbb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3cfbbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cfbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cfbc0: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3CFBC0u;
    {
        const bool branch_taken_0x3cfbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFBC0u;
        // 0x3cfbc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfbc0) {
            ctx->pc = 0x3CFC90u;
            goto label_3cfc90;
        }
    }
    ctx->pc = 0x3CFBC8u;
    // 0x3cfbc8: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3CFBC8u;
    {
        const bool branch_taken_0x3cfbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cfbc8) {
            ctx->pc = 0x3CFC70u;
            goto label_3cfc70;
        }
    }
    ctx->pc = 0x3CFBD0u;
    // 0x3cfbd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CFBD0u;
    {
        const bool branch_taken_0x3cfbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfbd0) {
            ctx->pc = 0x3CFBE0u;
            goto label_3cfbe0;
        }
    }
    ctx->pc = 0x3CFBD8u;
    // 0x3cfbd8: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x3CFBD8u;
    {
        const bool branch_taken_0x3cfbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfbd8) {
            ctx->pc = 0x3D0078u;
            goto label_3d0078;
        }
    }
    ctx->pc = 0x3CFBE0u;
label_3cfbe0:
    // 0x3cfbe0: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3CFBE0u;
    {
        const bool branch_taken_0x3cfbe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfbe0) {
            ctx->pc = 0x3CFC50u;
            goto label_3cfc50;
        }
    }
    ctx->pc = 0x3CFBE8u;
    // 0x3cfbe8: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3cfbe8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3cfbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cfbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfbf0: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3cfbf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3cfbf4: 0xc0a9970  jal         func_2A65C0
    ctx->pc = 0x3CFBF4u;
    SET_GPR_U32(ctx, 31, 0x3CFBFCu);
    ctx->pc = 0x3CFBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFBF4u;
    // 0x3cfbf8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65C0u, 0x3CFBF4u, 0x3CFBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFBFCu;
label_3cfbfc:
    // 0x3cfbfc: 0x9284053b  lbu         $a0, 0x53B($s4)
    ctx->pc = 0x3cfbfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1339)));
    // 0x3cfc00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3cfc00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc04: 0x9285052e  lbu         $a1, 0x52E($s4)
    ctx->pc = 0x3cfc04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3cfc08: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x3CFC08u;
    SET_GPR_U32(ctx, 31, 0x3CFC10u);
    ctx->pc = 0x3CFC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFC08u;
    // 0x3cfc0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x3CFC08u, 0x3CFC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFC10u;
label_3cfc10:
    // 0x3cfc10: 0xae820560  sw          $v0, 0x560($s4)
    ctx->pc = 0x3cfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1376), GPR_U32(ctx, 2));
    // 0x3cfc14: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cfc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cfc18: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3cfc18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3cfc1c: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x3cfc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x3cfc20: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cfc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cfc24: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3cfc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
    // 0x3cfc28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cfc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc2c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3cfc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3cfc30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cfc30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cfc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cfc38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cfc3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc40: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CFC40u;
    SET_GPR_U32(ctx, 31, 0x3CFC48u);
    ctx->pc = 0x3CFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFC40u;
    // 0x3cfc44: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CFC40u, 0x3CFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFC48u;
label_3cfc48:
    // 0x3cfc48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CFC48u;
    {
        const bool branch_taken_0x3cfc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfc48) {
            ctx->pc = 0x3CFC60u;
            goto label_3cfc60;
        }
    }
    ctx->pc = 0x3CFC50u;
label_3cfc50:
    // 0x3cfc50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3cfc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfc54: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CFC54u;
    SET_GPR_U32(ctx, 31, 0x3CFC5Cu);
    ctx->pc = 0x3CFC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFC54u;
    // 0x3cfc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CFC54u, 0x3CFC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFC5Cu;
label_3cfc5c:
    // 0x3cfc5c: 0x0  nop
    ctx->pc = 0x3cfc5cu;
    // NOP
label_3cfc60:
    // 0x3cfc60: 0x92830521  lbu         $v1, 0x521($s4)
    ctx->pc = 0x3cfc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3cfc64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cfc68: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x3CFC68u;
    {
        const bool branch_taken_0x3cfc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFC68u;
        // 0x3cfc6c: 0xa2830521  sb          $v1, 0x521($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfc68) {
            ctx->pc = 0x3D0078u;
            goto label_3d0078;
        }
    }
    ctx->pc = 0x3CFC70u;
label_3cfc70:
    // 0x3cfc70: 0x86820526  lh          $v0, 0x526($s4)
    ctx->pc = 0x3cfc70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1318)));
    // 0x3cfc74: 0xa6820512  sh          $v0, 0x512($s4)
    ctx->pc = 0x3cfc74u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cfc78: 0xa6800510  sh          $zero, 0x510($s4)
    ctx->pc = 0x3cfc78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cfc7c: 0xa2800514  sb          $zero, 0x514($s4)
    ctx->pc = 0x3cfc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cfc80: 0xa2800515  sb          $zero, 0x515($s4)
    ctx->pc = 0x3cfc80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cfc84: 0x92820521  lbu         $v0, 0x521($s4)
    ctx->pc = 0x3cfc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1313)));
    // 0x3cfc88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cfc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cfc8c: 0xa2820521  sb          $v0, 0x521($s4)
    ctx->pc = 0x3cfc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3cfc90:
    // 0x3cfc90: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3cfc90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3cfc94: 0x7e820020  sq          $v0, 0x20($s4)
    ctx->pc = 0x3cfc94u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 2));
    // 0x3cfc98: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x3cfc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x3cfc9c: 0x96820574  lhu         $v0, 0x574($s4)
    ctx->pc = 0x3cfc9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1396)));
    // 0x3cfca0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3cfca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cfca4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3cfca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3cfca8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CFCA8u;
    {
        const bool branch_taken_0x3cfca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfca8) {
            ctx->pc = 0x3CFCF0u;
            goto label_3cfcf0;
        }
    }
    ctx->pc = 0x3CFCB0u;
    // 0x3cfcb0: 0x96900576  lhu         $s0, 0x576($s4)
    ctx->pc = 0x3cfcb0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1398)));
    // 0x3cfcb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3cfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cfcb8: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x3cfcb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3cfcbc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CFCBCu;
    {
        const bool branch_taken_0x3cfcbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfcbc) {
            ctx->pc = 0x3CFCC8u;
            goto label_3cfcc8;
        }
    }
    ctx->pc = 0x3CFCC4u;
    // 0x3cfcc4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x3cfcc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3cfcc8:
    // 0x3cfcc8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3CFCC8u;
    SET_GPR_U32(ctx, 31, 0x3CFCD0u);
    ctx->pc = 0x3CFCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFCC8u;
    // 0x3cfccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3CFCC8u, 0x3CFCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFCD0u;
label_3cfcd0:
    // 0x3cfcd0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3cfcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3cfcd4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3cfcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3cfcd8: 0x8e6229c0  lw          $v0, 0x29C0($s3)
    ctx->pc = 0x3cfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x3cfcdc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3cfcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cfce0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3CFCE0u;
    SET_GPR_U32(ctx, 31, 0x3CFCE8u);
    ctx->pc = 0x3CFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFCE0u;
    // 0x3cfce4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3CFCE0u, 0x3CFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFCE8u;
label_3cfce8:
    // 0x3cfce8: 0x8e6329c0  lw          $v1, 0x29C0($s3)
    ctx->pc = 0x3cfce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10688)));
    // 0x3cfcec: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3cfcecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_3cfcf0:
    // 0x3cfcf0: 0xc0f4054  jal         func_3D0150
    ctx->pc = 0x3CFCF0u;
    SET_GPR_U32(ctx, 31, 0x3CFCF8u);
    ctx->pc = 0x3D0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0150u, 0x3CFCF0u, 0x3CFCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFCF8u;
label_3cfcf8:
    // 0x3cfcf8: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x3cfcf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3cfcfc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x3CFCFCu;
    {
        const bool branch_taken_0x3cfcfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfcfc) {
            ctx->pc = 0x3CFD98u;
            goto label_3cfd98;
        }
    }
    ctx->pc = 0x3CFD04u;
    // 0x3cfd04: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3cfd04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3cfd08: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3cfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3cfd0c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x3cfd0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3cfd10: 0x0  nop
    ctx->pc = 0x3cfd10u;
    // NOP
    // 0x3cfd14: 0x0  nop
    ctx->pc = 0x3cfd14u;
    // NOP
    // 0x3cfd18: 0x1010  mfhi        $v0
    ctx->pc = 0x3cfd18u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3cfd1c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3CFD1Cu;
    {
        const bool branch_taken_0x3cfd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cfd1c) {
            ctx->pc = 0x3CFD98u;
            goto label_3cfd98;
        }
    }
    ctx->pc = 0x3CFD24u;
    // 0x3cfd24: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x3cfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cfd28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3cfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3cfd2c: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x3cfd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3cfd30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cfd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfd34: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cfd38: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x3cfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x3cfd3c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3cfd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3cfd40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cfd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cfd44: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x3cfd44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x3cfd48: 0x8e68004c  lw          $t0, 0x4C($s3)
    ctx->pc = 0x3cfd48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3cfd4c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3cfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cfd50: 0x92860569  lbu         $a2, 0x569($s4)
    ctx->pc = 0x3cfd50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1385)));
    // 0x3cfd54: 0x9284052e  lbu         $a0, 0x52E($s4)
    ctx->pc = 0x3cfd54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3cfd58: 0x9509006a  lhu         $t1, 0x6A($t0)
    ctx->pc = 0x3cfd58u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x3cfd5c: 0x33b02  srl         $a3, $v1, 12
    ctx->pc = 0x3cfd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x3cfd60: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cfd64: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3cfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cfd68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cfd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cfd70: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x3cfd70u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3cfd74: 0x8d080094  lw          $t0, 0x94($t0)
    ctx->pc = 0x3cfd74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x3cfd78: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x3cfd78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cfd7c: 0x1010  mfhi        $v0
    ctx->pc = 0x3cfd7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3cfd80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cfd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3cfd84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3cfd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3cfd88: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3cfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3cfd8c: 0xc0bc850  jal         func_2F2140
    ctx->pc = 0x3CFD8Cu;
    SET_GPR_U32(ctx, 31, 0x3CFD94u);
    ctx->pc = 0x3CFD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFD8Cu;
    // 0x3cfd90: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2140u, 0x3CFD8Cu, 0x3CFD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFD94u;
label_3cfd94:
    // 0x3cfd94: 0x0  nop
    ctx->pc = 0x3cfd94u;
    // NOP
label_3cfd98:
    // 0x3cfd98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cfd98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfd9c: 0x27958060  addiu       $s5, $gp, -0x7FA0
    ctx->pc = 0x3cfd9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_3cfda0:
    // 0x3cfda0: 0x92850569  lbu         $a1, 0x569($s4)
    ctx->pc = 0x3cfda0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1385)));
    // 0x3cfda4: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x3cfda4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3cfda8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cfda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cfdac: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x3cfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x3cfdb0: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x3cfdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3cfdb4: 0x2687056c  addiu       $a3, $s4, 0x56C
    ctx->pc = 0x3cfdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1388));
    // 0x3cfdb8: 0x26880570  addiu       $t0, $s4, 0x570
    ctx->pc = 0x3cfdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1392));
    // 0x3cfdbc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3cfdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cfdc0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3cfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cfdc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cfdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfdc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cfdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cfdcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cfdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cfdd0: 0xc0976f0  jal         func_25DBC0
    ctx->pc = 0x3CFDD0u;
    SET_GPR_U32(ctx, 31, 0x3CFDD8u);
    ctx->pc = 0x3CFDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFDD0u;
    // 0x3cfdd4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x3CFDD0u, 0x3CFDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFDD8u;
label_3cfdd8:
    // 0x3cfdd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3CFDD8u;
    {
        const bool branch_taken_0x3cfdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cfdd8) {
            ctx->pc = 0x3CFE58u;
            goto label_3cfe58;
        }
    }
    ctx->pc = 0x3CFDE0u;
    // 0x3cfde0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3cfde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cfde4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3cfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3cfde8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3cfde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3cfdec: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3cfdecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3cfdf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cfdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3cfdf4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3cfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3cfdf8: 0x8e70004c  lw          $s0, 0x4C($s3)
    ctx->pc = 0x3cfdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3cfdfc: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3CFDFCu;
    SET_GPR_U32(ctx, 31, 0x3CFE04u);
    ctx->pc = 0x3CFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFDFCu;
    // 0x3cfe00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3CFDFCu, 0x3CFE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFE04u;
label_3cfe04:
    // 0x3cfe04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cfe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfe08: 0x9609006a  lhu         $t1, 0x6A($s0)
    ctx->pc = 0x3cfe08u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
    // 0x3cfe0c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x3cfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x3cfe10: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x3cfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x3cfe14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cfe14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cfe18: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3cfe18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3cfe1c: 0x92272901  lbu         $a3, 0x2901($s1)
    ctx->pc = 0x3cfe1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10497)));
    // 0x3cfe20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cfe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfe24: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3cfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3cfe28: 0x26282910  addiu       $t0, $s1, 0x2910
    ctx->pc = 0x3cfe28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 10512));
    // 0x3cfe2c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3cfe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3cfe30: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3cfe30u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3cfe34: 0x0  nop
    ctx->pc = 0x3cfe34u;
    // NOP
    // 0x3cfe38: 0x0  nop
    ctx->pc = 0x3cfe38u;
    // NOP
    // 0x3cfe3c: 0x1010  mfhi        $v0
    ctx->pc = 0x3cfe3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3cfe40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3cfe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3cfe44: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3cfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3cfe48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cfe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3cfe4c: 0xc0aa0dc  jal         func_2A8370
    ctx->pc = 0x3CFE4Cu;
    SET_GPR_U32(ctx, 31, 0x3CFE54u);
    ctx->pc = 0x3CFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFE4Cu;
    // 0x3cfe50: 0x24490030  addiu       $t1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8370u, 0x3CFE4Cu, 0x3CFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFE54u;
label_3cfe54:
    // 0x3cfe54: 0x0  nop
    ctx->pc = 0x3cfe54u;
    // NOP
label_3cfe58:
    // 0x3cfe58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3cfe58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3cfe5c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x3cfe5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3cfe60: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3CFE60u;
    {
        const bool branch_taken_0x3cfe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFE60u;
        // 0x3cfe64: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfe60) {
            ctx->pc = 0x3CFDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cfda0;
        }
    }
    ctx->pc = 0x3CFE68u;
    // 0x3cfe68: 0xc681056c  lwc1        $f1, 0x56C($s4)
    ctx->pc = 0x3cfe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cfe6c: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x3cfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
    // 0x3cfe70: 0x92860569  lbu         $a2, 0x569($s4)
    ctx->pc = 0x3cfe70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1385)));
    // 0x3cfe74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3cfe74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cfe78: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3cfe78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3cfe7c: 0x8e850560  lw          $a1, 0x560($s4)
    ctx->pc = 0x3cfe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1376)));
    // 0x3cfe80: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x3cfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x3cfe84: 0x246330b4  addiu       $v1, $v1, 0x30B4
    ctx->pc = 0x3cfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12468));
    // 0x3cfe88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cfe88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cfe8c: 0x0  nop
    ctx->pc = 0x3cfe8cu;
    // NOP
    // 0x3cfe90: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3cfe90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cfe94: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x3cfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cfe98: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3cfe9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3cfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3cfea0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3cfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3cfea4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3cfea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cfea8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3cfea8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3cfeac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cfeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3cfeb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cfeb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3cfeb4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3cfeb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3cfeb8: 0xc0c08e4  jal         func_302390
    ctx->pc = 0x3CFEB8u;
    SET_GPR_U32(ctx, 31, 0x3CFEC0u);
    ctx->pc = 0x3CFEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFEB8u;
    // 0x3cfebc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302390u, 0x3CFEB8u, 0x3CFEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFEC0u;
label_3cfec0:
    // 0x3cfec0: 0xc681056c  lwc1        $f1, 0x56C($s4)
    ctx->pc = 0x3cfec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cfec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3cfec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cfec8: 0x0  nop
    ctx->pc = 0x3cfec8u;
    // NOP
    // 0x3cfecc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3cfeccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cfed0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x3CFED0u;
    {
        const bool branch_taken_0x3cfed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cfed0) {
            ctx->pc = 0x3CFF70u;
            goto label_3cff70;
        }
    }
    ctx->pc = 0x3CFED8u;
    // 0x3cfed8: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3cfed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3cfedc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cfedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cfee0: 0x3c021400  lui         $v0, 0x1400
    ctx->pc = 0x3cfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5120 << 16));
    // 0x3cfee4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cfee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cfee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cfee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfeec: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3cfeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
    // 0x3cfef0: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3cfef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3cfef4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cfef4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfef8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cfef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfefc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cfefcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff00: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cff00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff04: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CFF04u;
    SET_GPR_U32(ctx, 31, 0x3CFF0Cu);
    ctx->pc = 0x3CFF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF04u;
    // 0x3cff08: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CFF04u, 0x3CFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF0Cu;
label_3cff0c:
    // 0x3cff0c: 0xc0f4098  jal         func_3D0260
    ctx->pc = 0x3CFF0Cu;
    SET_GPR_U32(ctx, 31, 0x3CFF14u);
    ctx->pc = 0x3D0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0260u, 0x3CFF0Cu, 0x3CFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF14u;
label_3cff14:
    // 0x3cff14: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3cff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3cff18: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3cff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3cff1c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x3cff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3cff20: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3cff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3cff24: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3cff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3cff28: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3CFF28u;
    SET_GPR_U32(ctx, 31, 0x3CFF30u);
    ctx->pc = 0x3CFF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF28u;
    // 0x3cff2c: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3CFF28u, 0x3CFF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF30u;
label_3cff30:
    // 0x3cff30: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3cff30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3cff34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3cff34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3cff38: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3cff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3cff3c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3cff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3cff40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cff40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff44: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3cff44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
    // 0x3cff48: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3cff48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3cff4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cff4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3cff50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cff54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cff58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3CFF5Cu;
    SET_GPR_U32(ctx, 31, 0x3CFF64u);
    ctx->pc = 0x3CFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF5Cu;
    // 0x3cff60: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3CFF5Cu, 0x3CFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF64u;
label_3cff64:
    // 0x3cff64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3cff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cff68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3CFF68u;
    SET_GPR_U32(ctx, 31, 0x3CFF70u);
    ctx->pc = 0x3CFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFF68u;
    // 0x3cff6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3CFF68u, 0x3CFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFF70u;
label_3cff70:
    // 0x3cff70: 0x92830515  lbu         $v1, 0x515($s4)
    ctx->pc = 0x3cff70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1301)));
    // 0x3cff74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CFF74u;
    {
        const bool branch_taken_0x3cff74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFF74u;
        // 0x3cff78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cff74) {
            ctx->pc = 0x3CFF88u;
            goto label_3cff88;
        }
    }
    ctx->pc = 0x3CFF7Cu;
    // 0x3cff7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CFF7Cu;
    {
        const bool branch_taken_0x3cff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cff7c) {
            ctx->pc = 0x3D0008u;
            goto label_3d0008;
        }
    }
    ctx->pc = 0x3CFF84u;
    // 0x3cff84: 0x0  nop
    ctx->pc = 0x3cff84u;
    // NOP
label_3cff88:
    // 0x3cff88: 0x86840510  lh          $a0, 0x510($s4)
    ctx->pc = 0x3cff88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3cff8c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3cff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3cff90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cff94: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3cff94u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cff98: 0x86840512  lh          $a0, 0x512($s4)
    ctx->pc = 0x3cff98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1298)));
    // 0x3cff9c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CFF9Cu;
    {
        const bool branch_taken_0x3cff9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cff9c) {
            ctx->pc = 0x3CFFD8u;
            goto label_3cffd8;
        }
    }
    ctx->pc = 0x3CFFA4u;
    // 0x3cffa4: 0x86850510  lh          $a1, 0x510($s4)
    ctx->pc = 0x3cffa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3cffa8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3cffa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3cffac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3CFFACu;
    {
        const bool branch_taken_0x3cffac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFACu;
        // 0x3cffb0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cffac) {
            ctx->pc = 0x3D0000u;
            goto label_3d0000;
        }
    }
    ctx->pc = 0x3CFFB4u;
    // 0x3cffb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cffb8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3cffb8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3cffbc: 0x0  nop
    ctx->pc = 0x3cffbcu;
    // NOP
    // 0x3cffc0: 0x0  nop
    ctx->pc = 0x3cffc0u;
    // NOP
    // 0x3cffc4: 0x2010  mfhi        $a0
    ctx->pc = 0x3cffc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3cffc8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3cffc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cffcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CFFCCu;
    {
        const bool branch_taken_0x3cffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFCCu;
        // 0x3cffd0: 0xa2830514  sb          $v1, 0x514($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cffcc) {
            ctx->pc = 0x3D0000u;
            goto label_3d0000;
        }
    }
    ctx->pc = 0x3CFFD4u;
    // 0x3cffd4: 0x0  nop
    ctx->pc = 0x3cffd4u;
    // NOP
label_3cffd8:
    // 0x3cffd8: 0x86830510  lh          $v1, 0x510($s4)
    ctx->pc = 0x3cffd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1296)));
    // 0x3cffdc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3cffdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3cffe0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CFFE0u;
    {
        const bool branch_taken_0x3cffe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cffe0) {
            ctx->pc = 0x3D0000u;
            goto label_3d0000;
        }
    }
    ctx->pc = 0x3CFFE8u;
    // 0x3cffe8: 0xa6840510  sh          $a0, 0x510($s4)
    ctx->pc = 0x3cffe8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cffec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cfff0: 0xa2830515  sb          $v1, 0x515($s4)
    ctx->pc = 0x3cfff0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cfff4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CFFF4u;
    {
        const bool branch_taken_0x3cfff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFFF4u;
        // 0x3cfff8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfff4) {
            ctx->pc = 0x3D0008u;
            goto label_3d0008;
        }
    }
    ctx->pc = 0x3CFFFCu;
    // 0x3cfffc: 0x0  nop
    ctx->pc = 0x3cfffcu;
    // NOP
label_3d0000:
    // 0x3d0000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0004: 0x0  nop
    ctx->pc = 0x3d0004u;
    // NOP
label_3d0008:
    // 0x3d0008: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3D0008u;
    {
        const bool branch_taken_0x3d0008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0008) {
            ctx->pc = 0x3D0078u;
            goto label_3d0078;
        }
    }
    ctx->pc = 0x3D0010u;
    // 0x3d0010: 0xc0f4098  jal         func_3D0260
    ctx->pc = 0x3D0010u;
    SET_GPR_U32(ctx, 31, 0x3D0018u);
    ctx->pc = 0x3D0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0260u, 0x3D0010u, 0x3D0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0018u;
label_3d0018:
    // 0x3d0018: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3d0018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3d001c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3d001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d0020: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x3d0020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3d0024: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x3d0024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3d0028: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3d0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3d002c: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x3D002Cu;
    SET_GPR_U32(ctx, 31, 0x3D0034u);
    ctx->pc = 0x3D0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D002Cu;
    // 0x3d0030: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x3D002Cu, 0x3D0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0034u;
label_3d0034:
    // 0x3d0034: 0x9283052e  lbu         $v1, 0x52E($s4)
    ctx->pc = 0x3d0034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1326)));
    // 0x3d0038: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3d0038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3d003c: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3d003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3d0040: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3d0040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3d0044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0048: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x3d0048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
    // 0x3d004c: 0x26870020  addiu       $a3, $s4, 0x20
    ctx->pc = 0x3d004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3d0050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d0050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0054: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d0054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0058: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d0058u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d005c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3d005cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0060: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3D0060u;
    SET_GPR_U32(ctx, 31, 0x3D0068u);
    ctx->pc = 0x3D0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0060u;
    // 0x3d0064: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3D0060u, 0x3D0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0068u;
label_3d0068:
    // 0x3d0068: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d0068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d006c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3D006Cu;
    SET_GPR_U32(ctx, 31, 0x3D0074u);
    ctx->pc = 0x3D0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D006Cu;
    // 0x3d0070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3D006Cu, 0x3D0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0074u;
label_3d0074:
    // 0x3d0074: 0x0  nop
    ctx->pc = 0x3d0074u;
    // NOP
label_3d0078:
    // 0x3d0078: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d0078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d007c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d007cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d0080: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d0080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d0084: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d0084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d0088: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d0088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d008c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d008cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0090: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d0090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0094: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0094u;
        // 0x3d0098: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D009Cu;
}
