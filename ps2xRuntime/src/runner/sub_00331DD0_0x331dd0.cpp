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

// Function: sub_00331DD0
// Address: 0x331dd0 - 0x331f7c
void sub_00331DD0_0x331dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331DD0_0x331dd0");
#endif

    switch (ctx->pc) {
        case 0x331e30u: goto label_331e30;
        case 0x331e44u: goto label_331e44;
        case 0x331e64u: goto label_331e64;
        case 0x331f04u: goto label_331f04;
        case 0x331f2cu: goto label_331f2c;
        case 0x331f38u: goto label_331f38;
        default: break;
    }

    ctx->pc = 0x331dd0u;

    // 0x331dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x331dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x331dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x331dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x331dd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x331dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x331ddc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x331ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x331de0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x331de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331de4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x331de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x331de8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x331de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331dec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x331decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x331df0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x331df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331df4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x331DF4u;
    {
        const bool branch_taken_0x331df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x331DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DF4u;
        // 0x331df8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331df4) {
            ctx->pc = 0x331E18u;
            goto label_331e18;
        }
    }
    ctx->pc = 0x331DFCu;
    // 0x331dfc: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x331dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x331e00: 0x8c32ea20  lw          $s2, -0x15E0($at)
    ctx->pc = 0x331e00u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x331e04: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x331e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x331e08: 0x8c31ea28  lw          $s1, -0x15D8($at)
    ctx->pc = 0x331e08u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x331e0c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x331e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x331e10: 0x8c30ea24  lw          $s0, -0x15DC($at)
    ctx->pc = 0x331e10u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x331e14: 0x0  nop
    ctx->pc = 0x331e14u;
    // NOP
label_331e18:
    // 0x331e18: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x331e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x331e1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x331e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x331e20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x331E20u;
    {
        const bool branch_taken_0x331e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E20u;
        // 0x331e24: 0x26641c88  addiu       $a0, $s3, 0x1C88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e20) {
            ctx->pc = 0x331E38u;
            goto label_331e38;
        }
    }
    ctx->pc = 0x331E28u;
    // 0x331e28: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x331E28u;
    SET_GPR_U32(ctx, 31, 0x331E30u);
    ctx->pc = 0x331E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E28u;
    // 0x331e2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x331E28u, 0x331E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E30u;
label_331e30:
    // 0x331e30: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x331E30u;
    {
        const bool branch_taken_0x331e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331e30) {
            ctx->pc = 0x331F30u;
            goto label_331f30;
        }
    }
    ctx->pc = 0x331E38u;
label_331e38:
    // 0x331e38: 0x26641c88  addiu       $a0, $s3, 0x1C88
    ctx->pc = 0x331e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7304));
    // 0x331e3c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x331E3Cu;
    SET_GPR_U32(ctx, 31, 0x331E44u);
    ctx->pc = 0x331E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E3Cu;
    // 0x331e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x331E3Cu, 0x331E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E44u;
label_331e44:
    // 0x331e44: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x331e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x331e48: 0x344200f0  ori         $v0, $v0, 0xF0
    ctx->pc = 0x331e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)240);
    // 0x331e4c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x331e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x331e50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x331E50u;
    {
        const bool branch_taken_0x331e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E50u;
        // 0x331e54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e50) {
            ctx->pc = 0x331E68u;
            goto label_331e68;
        }
    }
    ctx->pc = 0x331E58u;
    // 0x331e58: 0x26641c88  addiu       $a0, $s3, 0x1C88
    ctx->pc = 0x331e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7304));
    // 0x331e5c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x331E5Cu;
    SET_GPR_U32(ctx, 31, 0x331E64u);
    ctx->pc = 0x331E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331E5Cu;
    // 0x331e60: 0xa2621ca8  sb          $v0, 0x1CA8($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 7336), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x331E5Cu, 0x331E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E64u;
label_331e64:
    // 0x331e64: 0x0  nop
    ctx->pc = 0x331e64u;
    // NOP
label_331e68:
    // 0x331e68: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x331e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x331e6c: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x331e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x331e70: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x331e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x331e74: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x331E74u;
    {
        const bool branch_taken_0x331e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E74u;
        // 0x331e78: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e74) {
            ctx->pc = 0x331F08u;
            goto label_331f08;
        }
    }
    ctx->pc = 0x331E7Cu;
    // 0x331e7c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x331e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x331e80: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x331e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x331e84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331E84u;
    {
        const bool branch_taken_0x331e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331e84) {
            ctx->pc = 0x331EA0u;
            goto label_331ea0;
        }
    }
    ctx->pc = 0x331E8Cu;
    // 0x331e8c: 0x86621c7a  lh          $v0, 0x1C7A($s3)
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 7290)));
    // 0x331e90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x331e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x331e94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x331E94u;
    {
        const bool branch_taken_0x331e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E94u;
        // 0x331e98: 0xa6621c7a  sh          $v0, 0x1C7A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 7290), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e94) {
            ctx->pc = 0x331EB0u;
            goto label_331eb0;
        }
    }
    ctx->pc = 0x331E9Cu;
    // 0x331e9c: 0x0  nop
    ctx->pc = 0x331e9cu;
    // NOP
label_331ea0:
    // 0x331ea0: 0x86621c7a  lh          $v0, 0x1C7A($s3)
    ctx->pc = 0x331ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 7290)));
    // 0x331ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331ea8: 0xa6621c7a  sh          $v0, 0x1C7A($s3)
    ctx->pc = 0x331ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 7290), (uint16_t)GPR_U32(ctx, 2));
    // 0x331eac: 0x0  nop
    ctx->pc = 0x331eacu;
    // NOP
label_331eb0:
    // 0x331eb0: 0x8e6c0008  lw          $t4, 0x8($s3)
    ctx->pc = 0x331eb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x331eb4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x331eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x331eb8: 0x86631c7a  lh          $v1, 0x1C7A($s3)
    ctx->pc = 0x331eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 7290)));
    // 0x331ebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331ec0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x331ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x331ec4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x331ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x331ec8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x331ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x331eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x331ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ed4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x331ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ed8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x331ed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331edc: 0x958c000e  lhu         $t4, 0xE($t4)
    ctx->pc = 0x331edcu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x331ee0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x331ee0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ee4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x331ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x331ee8: 0x6c001a  div         $zero, $v1, $t4
    ctx->pc = 0x331ee8u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x331eec: 0x0  nop
    ctx->pc = 0x331eecu;
    // NOP
    // 0x331ef0: 0x0  nop
    ctx->pc = 0x331ef0u;
    // NOP
    // 0x331ef4: 0x1810  mfhi        $v1
    ctx->pc = 0x331ef4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x331ef8: 0xa6631c7a  sh          $v1, 0x1C7A($s3)
    ctx->pc = 0x331ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 7290), (uint16_t)GPR_U32(ctx, 3));
    // 0x331efc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x331EFCu;
    SET_GPR_U32(ctx, 31, 0x331F04u);
    ctx->pc = 0x331F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331EFCu;
    // 0x331f00: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x331EFCu, 0x331F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F04u;
label_331f04:
    // 0x331f04: 0x0  nop
    ctx->pc = 0x331f04u;
    // NOP
label_331f08:
    // 0x331f08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331f0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x331f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x331f10: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x331f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x331f14: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f18: 0x26641c7c  addiu       $a0, $s3, 0x1C7C
    ctx->pc = 0x331f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7292));
    // 0x331f1c: 0x34670010  ori         $a3, $v1, 0x10
    ctx->pc = 0x331f1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x331f20: 0x34480040  ori         $t0, $v0, 0x40
    ctx->pc = 0x331f20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x331f24: 0xc0cde64  jal         func_337990
    ctx->pc = 0x331F24u;
    SET_GPR_U32(ctx, 31, 0x331F2Cu);
    ctx->pc = 0x331F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F24u;
    // 0x331f28: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337990u, 0x331F24u, 0x331F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F2Cu;
label_331f2c:
    // 0x331f2c: 0x0  nop
    ctx->pc = 0x331f2cu;
    // NOP
label_331f30:
    // 0x331f30: 0xc0cc7e0  jal         func_331F80
    ctx->pc = 0x331F30u;
    SET_GPR_U32(ctx, 31, 0x331F38u);
    ctx->pc = 0x331F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F30u;
    // 0x331f34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F80u, 0x331F30u, 0x331F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F38u;
label_331f38:
    // 0x331f38: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x331f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x331f3c: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x331f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x331f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331F40u;
    {
        const bool branch_taken_0x331f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331f40) {
            ctx->pc = 0x331F50u;
            goto label_331f50;
        }
    }
    ctx->pc = 0x331F48u;
    // 0x331f48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x331F48u;
    {
        const bool branch_taken_0x331f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F48u;
        // 0x331f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f48) {
            ctx->pc = 0x331F60u;
            goto label_331f60;
        }
    }
    ctx->pc = 0x331F50u;
label_331f50:
    // 0x331f50: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x331f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x331f54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x331f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331f58: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x331f58u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x331f5c: 0x0  nop
    ctx->pc = 0x331f5cu;
    // NOP
label_331f60:
    // 0x331f60: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x331f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331f64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x331f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331f68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x331f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331f6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x331f6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331f70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x331f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331f74: 0x3e00008  jr          $ra
    ctx->pc = 0x331F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F74u;
        // 0x331f78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331F7Cu;
}
