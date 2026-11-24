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

// Function: sub_00306980
// Address: 0x306980 - 0x306f6c
void sub_00306980_0x306980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306980_0x306980");
#endif

    switch (ctx->pc) {
        case 0x3069c0u: goto label_3069c0;
        case 0x306a34u: goto label_306a34;
        case 0x306a54u: goto label_306a54;
        case 0x306a68u: goto label_306a68;
        case 0x306a80u: goto label_306a80;
        case 0x306b44u: goto label_306b44;
        case 0x306b54u: goto label_306b54;
        case 0x306b84u: goto label_306b84;
        case 0x306ba0u: goto label_306ba0;
        case 0x306bbcu: goto label_306bbc;
        case 0x306be0u: goto label_306be0;
        case 0x306bf0u: goto label_306bf0;
        case 0x306c18u: goto label_306c18;
        case 0x306c60u: goto label_306c60;
        case 0x306c78u: goto label_306c78;
        case 0x306cf0u: goto label_306cf0;
        case 0x306d1cu: goto label_306d1c;
        case 0x306d3cu: goto label_306d3c;
        case 0x306d58u: goto label_306d58;
        case 0x306d78u: goto label_306d78;
        case 0x306da4u: goto label_306da4;
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd8u: goto label_306dd8;
        case 0x306e30u: goto label_306e30;
        case 0x306e84u: goto label_306e84;
        case 0x306f48u: goto label_306f48;
        default: break;
    }

    ctx->pc = 0x306980u;

    // 0x306980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x306980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x306984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x306984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x306988: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x306988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30698c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30698cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x306990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x306990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x306994: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x306994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30699c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3069a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3069a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3069a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3069a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3069a8: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3069ac: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x3069acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3069b0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3069b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3069b4: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
    ctx->pc = 0x3069B4u;
    {
        const bool branch_taken_0x3069b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3069B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069B4u;
        // 0x3069b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3069b4) {
            ctx->pc = 0x306C08u;
            goto label_306c08;
        }
    }
    ctx->pc = 0x3069BCu;
    // 0x3069bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3069bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3069c0:
    // 0x3069c0: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x3069c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x3069c4: 0x86240054  lh          $a0, 0x54($s1)
    ctx->pc = 0x3069c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3069c8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3069c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3069cc: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x3069ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x3069d0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3069d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3069d4: 0x0  nop
    ctx->pc = 0x3069d4u;
    // NOP
    // 0x3069d8: 0x0  nop
    ctx->pc = 0x3069d8u;
    // NOP
    // 0x3069dc: 0x1010  mfhi        $v0
    ctx->pc = 0x3069dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3069e0: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x3069E0u;
    {
        const bool branch_taken_0x3069e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3069e0) {
            ctx->pc = 0x306BF0u;
            goto label_306bf0;
        }
    }
    ctx->pc = 0x3069E8u;
    // 0x3069e8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3069e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3069ec: 0x90a70001  lbu         $a3, 0x1($a1)
    ctx->pc = 0x3069ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3069f0: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x3069f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x3069f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3069f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3069f8: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3069fc: 0x2012  mflo        $a0
    ctx->pc = 0x3069fcu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x306a00: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x306a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x306a04: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x306a04u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x306a08: 0x0  nop
    ctx->pc = 0x306a08u;
    // NOP
    // 0x306a0c: 0x0  nop
    ctx->pc = 0x306a0cu;
    // NOP
    // 0x306a10: 0x2010  mfhi        $a0
    ctx->pc = 0x306a10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x306a14: 0x2871018  mult        $v0, $s4, $a3
    ctx->pc = 0x306a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x306a18: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x306a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x306a1c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x306a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x306a20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x306a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x306a24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x306a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x306a28: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x306a28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306a2c: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x306A2Cu;
    SET_GPR_U32(ctx, 31, 0x306A34u);
    ctx->pc = 0x306A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A2Cu;
    // 0x306a30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x306A2Cu, 0x306A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A34u;
label_306a34:
    // 0x306a34: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306a38: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x306a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x306a3c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x306a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x306a40: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x306a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x306a44: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x306a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x306a48: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x306a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x306a4c: 0xc096da0  jal         func_25B680
    ctx->pc = 0x306A4Cu;
    SET_GPR_U32(ctx, 31, 0x306A54u);
    ctx->pc = 0x306A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A4Cu;
    // 0x306a50: 0x2449000c  addiu       $t1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x306A4Cu, 0x306A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A54u;
label_306a54:
    // 0x306a54: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x306a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x306a58: 0xa6620038  sh          $v0, 0x38($s3)
    ctx->pc = 0x306a58u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x306a5c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306a60: 0xc096d80  jal         func_25B600
    ctx->pc = 0x306A60u;
    SET_GPR_U32(ctx, 31, 0x306A68u);
    ctx->pc = 0x306A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A60u;
    // 0x306a64: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x306A60u, 0x306A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A68u;
label_306a68:
    // 0x306a68: 0xa262003a  sb          $v0, 0x3A($s3)
    ctx->pc = 0x306a68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x306a6c: 0xa260003b  sb          $zero, 0x3B($s3)
    ctx->pc = 0x306a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x306a70: 0xa6600034  sh          $zero, 0x34($s3)
    ctx->pc = 0x306a70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x306a74: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306a78: 0xc078e9c  jal         func_1E3A70
    ctx->pc = 0x306A78u;
    SET_GPR_U32(ctx, 31, 0x306A80u);
    ctx->pc = 0x306A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A78u;
    // 0x306a7c: 0x84440032  lh          $a0, 0x32($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A70u, 0x306A78u, 0x306A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A80u;
label_306a80:
    // 0x306a80: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306a84: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x306a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x306a88: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x306a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x306a8c: 0xa6620036  sh          $v0, 0x36($s3)
    ctx->pc = 0x306a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x306a90: 0x86620036  lh          $v0, 0x36($s3)
    ctx->pc = 0x306a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x306a94: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306A94u;
    {
        const bool branch_taken_0x306a94 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x306A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A94u;
        // 0x306a98: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a94) {
            ctx->pc = 0x306AA4u;
            goto label_306aa4;
        }
    }
    ctx->pc = 0x306A9Cu;
    // 0x306a9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x306A9Cu;
    {
        const bool branch_taken_0x306a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A9Cu;
        // 0x306aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a9c) {
            ctx->pc = 0x306AB4u;
            goto label_306ab4;
        }
    }
    ctx->pc = 0x306AA4u;
label_306aa4:
    // 0x306aa4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x306AA4u;
    {
        const bool branch_taken_0x306aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x306aa4) {
            ctx->pc = 0x306AB4u;
            goto label_306ab4;
        }
    }
    ctx->pc = 0x306AACu;
    // 0x306aac: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x306AACu;
    {
        const bool branch_taken_0x306aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AACu;
        // 0x306ab0: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306aac) {
            ctx->pc = 0x306AB4u;
            goto label_306ab4;
        }
    }
    ctx->pc = 0x306AB4u;
label_306ab4:
    // 0x306ab4: 0xa6620036  sh          $v0, 0x36($s3)
    ctx->pc = 0x306ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x306ab8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x306ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306abc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x306abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x306ac0: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x306ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x306ac4: 0x86620036  lh          $v0, 0x36($s3)
    ctx->pc = 0x306ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x306ac8: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x306ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x306acc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x306accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x306ad0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x306ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x306ad4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x306ad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x306ad8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x306ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x306adc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x306adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x306ae0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x306ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x306ae4: 0x0  nop
    ctx->pc = 0x306ae4u;
    // NOP
    // 0x306ae8: 0x1010  mfhi        $v0
    ctx->pc = 0x306ae8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x306aec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x306aecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x306af0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306af4: 0xa6620040  sh          $v0, 0x40($s3)
    ctx->pc = 0x306af4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x306af8: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306afc: 0x86640036  lh          $a0, 0x36($s3)
    ctx->pc = 0x306afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x306b00: 0x90420030  lbu         $v0, 0x30($v0)
    ctx->pc = 0x306b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x306b04: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x306b04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x306b08: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x306b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x306b0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x306b10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306b14: 0x70821018  mult1       $v0, $a0, $v0
    ctx->pc = 0x306b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x306b18: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x306b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x306b1c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x306b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x306b20: 0x0  nop
    ctx->pc = 0x306b20u;
    // NOP
    // 0x306b24: 0x1010  mfhi        $v0
    ctx->pc = 0x306b24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x306b28: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x306b28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x306b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x306b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x306b30: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x306b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x306b34: 0xa6620042  sh          $v0, 0x42($s3)
    ctx->pc = 0x306b34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x306b38: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306b3c: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306B3Cu;
    SET_GPR_U32(ctx, 31, 0x306B44u);
    ctx->pc = 0x306B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B3Cu;
    // 0x306b40: 0xc44c0018  lwc1        $f12, 0x18($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306B3Cu, 0x306B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B44u;
label_306b44:
    // 0x306b44: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x306b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x306b48: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306b4c: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306B4Cu;
    SET_GPR_U32(ctx, 31, 0x306B54u);
    ctx->pc = 0x306B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B4Cu;
    // 0x306b50: 0xc44c003c  lwc1        $f12, 0x3C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306B4Cu, 0x306B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B54u;
label_306b54:
    // 0x306b54: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306b58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x306b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306b5c: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x306b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x306b60: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x306b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x306b64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x306b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x306b68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x306B68u;
    {
        const bool branch_taken_0x306b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x306B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B68u;
        // 0x306b6c: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b68) {
            ctx->pc = 0x306B78u;
            goto label_306b78;
        }
    }
    ctx->pc = 0x306B70u;
    // 0x306b70: 0xe6610044  swc1        $f1, 0x44($s3)
    ctx->pc = 0x306b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x306b74: 0x0  nop
    ctx->pc = 0x306b74u;
    // NOP
label_306b78:
    // 0x306b78: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306b7c: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306B7Cu;
    SET_GPR_U32(ctx, 31, 0x306B84u);
    ctx->pc = 0x306B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B7Cu;
    // 0x306b80: 0xc44c0060  lwc1        $f12, 0x60($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306B7Cu, 0x306B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B84u;
label_306b84:
    // 0x306b84: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306b88: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x306b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306b8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x306b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x306b90: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x306b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x306b94: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306b98: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306B98u;
    SET_GPR_U32(ctx, 31, 0x306BA0u);
    ctx->pc = 0x306B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B98u;
    // 0x306b9c: 0xc44c0064  lwc1        $f12, 0x64($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306B98u, 0x306BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BA0u;
label_306ba0:
    // 0x306ba0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306ba4: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x306ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306ba8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x306ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x306bac: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x306bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x306bb0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306bb4: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306BB4u;
    SET_GPR_U32(ctx, 31, 0x306BBCu);
    ctx->pc = 0x306BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BB4u;
    // 0x306bb8: 0xc44c0068  lwc1        $f12, 0x68($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306BB4u, 0x306BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BBCu;
label_306bbc:
    // 0x306bbc: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x306bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306bc0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x306bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x306bc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x306bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x306bc8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x306bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306bcc: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x306bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306bd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x306bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x306bd4: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x306bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x306bd8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x306BD8u;
    SET_GPR_U32(ctx, 31, 0x306BE0u);
    ctx->pc = 0x306BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BD8u;
    // 0x306bdc: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x306BD8u, 0x306BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BE0u;
label_306be0:
    // 0x306be0: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x306be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x306be4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x306be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x306be8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x306BE8u;
    SET_GPR_U32(ctx, 31, 0x306BF0u);
    ctx->pc = 0x306BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BE8u;
    // 0x306bec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x306BE8u, 0x306BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BF0u;
label_306bf0:
    // 0x306bf0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x306bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x306bf4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x306bf8: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x306bf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x306bfc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x306bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x306c00: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x306C00u;
    {
        const bool branch_taken_0x306c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C00u;
        // 0x306c04: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c00) {
            ctx->pc = 0x3069C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3069c0;
        }
    }
    ctx->pc = 0x306C08u;
label_306c08:
    // 0x306c08: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x306c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x306c0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x306c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x306c10: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x306C10u;
    SET_GPR_U32(ctx, 31, 0x306C18u);
    ctx->pc = 0x306C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C10u;
    // 0x306c14: 0x24a55c10  addiu       $a1, $a1, 0x5C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x306C10u, 0x306C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C18u;
label_306c18:
    // 0x306c18: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x306c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306c1c: 0x3c034475  lui         $v1, 0x4475
    ctx->pc = 0x306c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17525 << 16));
    // 0x306c20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306c24: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x306c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x306c28: 0x2484c800  addiu       $a0, $a0, -0x3800
    ctx->pc = 0x306c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
    // 0x306c2c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x306c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x306c30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x306c34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x306c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x306c38: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x306c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306c3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x306c40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x306c40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x306c44: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x306c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x306c48: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x306c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x306c4c: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x306c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x306c50: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x306c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x306c54: 0x102000ac  beqz        $at, . + 4 + (0xAC << 2)
    ctx->pc = 0x306C54u;
    {
        const bool branch_taken_0x306c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C54u;
        // 0x306c58: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c54) {
            ctx->pc = 0x306F08u;
            goto label_306f08;
        }
    }
    ctx->pc = 0x306C5Cu;
    // 0x306c5c: 0x0  nop
    ctx->pc = 0x306c5cu;
    // NOP
label_306c60:
    // 0x306c60: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x306c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306c64: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x306c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c68: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x306c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x306c6c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x306c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x306c70: 0x1020009f  beqz        $at, . + 4 + (0x9F << 2)
    ctx->pc = 0x306C70u;
    {
        const bool branch_taken_0x306c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C70u;
        // 0x306c74: 0x2a39818  mult        $s3, $s5, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c70) {
            ctx->pc = 0x306EF0u;
            goto label_306ef0;
        }
    }
    ctx->pc = 0x306C78u;
label_306c78:
    // 0x306c78: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x306c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x306c7c: 0x2742821  addu        $a1, $s3, $s4
    ctx->pc = 0x306c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x306c80: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x306c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x306c84: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x306c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x306c88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x306c88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x306c8c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x306c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x306c90: 0x859021  addu        $s2, $a0, $a1
    ctx->pc = 0x306c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x306c94: 0x86440034  lh          $a0, 0x34($s2)
    ctx->pc = 0x306c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x306c98: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x306C98u;
    {
        const bool branch_taken_0x306c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306c98) {
            ctx->pc = 0x306ED8u;
            goto label_306ed8;
        }
    }
    ctx->pc = 0x306CA0u;
    // 0x306ca0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x306ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x306ca4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x306ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x306ca8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x306CA8u;
    {
        const bool branch_taken_0x306ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306ca8) {
            ctx->pc = 0x306DB0u;
            goto label_306db0;
        }
    }
    ctx->pc = 0x306CB0u;
    // 0x306cb0: 0x9243003b  lbu         $v1, 0x3B($s2)
    ctx->pc = 0x306cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 59)));
    // 0x306cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306cb8: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x306CB8u;
    {
        const bool branch_taken_0x306cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x306cb8) {
            ctx->pc = 0x306D80u;
            goto label_306d80;
        }
    }
    ctx->pc = 0x306CC0u;
    // 0x306cc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x306CC0u;
    {
        const bool branch_taken_0x306cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306cc0) {
            ctx->pc = 0x306CD0u;
            goto label_306cd0;
        }
    }
    ctx->pc = 0x306CC8u;
    // 0x306cc8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x306CC8u;
    {
        const bool branch_taken_0x306cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306cc8) {
            ctx->pc = 0x306DD0u;
            goto label_306dd0;
        }
    }
    ctx->pc = 0x306CD0u;
label_306cd0:
    // 0x306cd0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x306cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x306cd4: 0xc4cd0040  lwc1        $f13, 0x40($a2)
    ctx->pc = 0x306cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x306cd8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x306cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x306cdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ce4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x306ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x306ce8: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x306CE8u;
    SET_GPR_U32(ctx, 31, 0x306CF0u);
    ctx->pc = 0x306CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CE8u;
    // 0x306cec: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x306CE8u, 0x306CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CF0u;
label_306cf0:
    // 0x306cf0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x306cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306cf4: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x306cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306cf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x306cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x306cfc: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x306CFCu;
    {
        const bool branch_taken_0x306cfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x306D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CFCu;
        // 0x306d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cfc) {
            ctx->pc = 0x306DD0u;
            goto label_306dd0;
        }
    }
    ctx->pc = 0x306D04u;
    // 0x306d04: 0xa242003b  sb          $v0, 0x3B($s2)
    ctx->pc = 0x306d04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 59), (uint8_t)GPR_U32(ctx, 2));
    // 0x306d08: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x306d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306d0c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x306d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x306d10: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306d14: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306D14u;
    SET_GPR_U32(ctx, 31, 0x306D1Cu);
    ctx->pc = 0x306D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D14u;
    // 0x306d18: 0xc44c0060  lwc1        $f12, 0x60($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306D14u, 0x306D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D1Cu;
label_306d1c:
    // 0x306d1c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306d20: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x306d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x306d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x306d28: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x306d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x306d2c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x306d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x306d30: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306d34: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x306D34u;
    SET_GPR_U32(ctx, 31, 0x306D3Cu);
    ctx->pc = 0x306D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D34u;
    // 0x306d38: 0xc44c0068  lwc1        $f12, 0x68($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x306D34u, 0x306D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D3Cu;
label_306d3c:
    // 0x306d3c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x306d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306d40: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x306d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x306d44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x306d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d48: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x306d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306d4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x306d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x306d50: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x306D50u;
    SET_GPR_U32(ctx, 31, 0x306D58u);
    ctx->pc = 0x306D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D50u;
    // 0x306d54: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x306D50u, 0x306D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D58u;
label_306d58:
    // 0x306d58: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x306d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306d5c: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x306d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x306d60: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x306d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x306d64: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x306d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x306d68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x306d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306d6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x306d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d70: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x306D70u;
    SET_GPR_U32(ctx, 31, 0x306D78u);
    ctx->pc = 0x306D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D70u;
    // 0x306d74: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x306D70u, 0x306D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D78u;
label_306d78:
    // 0x306d78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x306D78u;
    {
        const bool branch_taken_0x306d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d78) {
            ctx->pc = 0x306DD0u;
            goto label_306dd0;
        }
    }
    ctx->pc = 0x306D80u;
label_306d80:
    // 0x306d80: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x306d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x306d84: 0xc4cd0040  lwc1        $f13, 0x40($a2)
    ctx->pc = 0x306d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x306d88: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x306d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x306d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d94: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x306d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x306d98: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x306d98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x306d9c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x306D9Cu;
    SET_GPR_U32(ctx, 31, 0x306DA4u);
    ctx->pc = 0x306DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D9Cu;
    // 0x306da0: 0x24c65c10  addiu       $a2, $a2, 0x5C10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x306D9Cu, 0x306DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DA4u;
label_306da4:
    // 0x306da4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x306DA4u;
    {
        const bool branch_taken_0x306da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306da4) {
            ctx->pc = 0x306DD0u;
            goto label_306dd0;
        }
    }
    ctx->pc = 0x306DACu;
    // 0x306dac: 0x0  nop
    ctx->pc = 0x306dacu;
    // NOP
label_306db0:
    // 0x306db0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x306db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x306db4: 0xc4cd0040  lwc1        $f13, 0x40($a2)
    ctx->pc = 0x306db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x306db8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x306db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x306dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x306dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x306dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x306dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306dc4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x306dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x306dc8: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x306DC8u;
    SET_GPR_U32(ctx, 31, 0x306DD0u);
    ctx->pc = 0x306DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DC8u;
    // 0x306dcc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x306DC8u, 0x306DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DD0u;
label_306dd0:
    // 0x306dd0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x306DD0u;
    SET_GPR_U32(ctx, 31, 0x306DD8u);
    ctx->pc = 0x306DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DD0u;
    // 0x306dd4: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x306DD0u, 0x306DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DD8u;
label_306dd8:
    // 0x306dd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306DD8u;
    {
        const bool branch_taken_0x306dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DD8u;
        // 0x306ddc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306dd8) {
            ctx->pc = 0x306DE8u;
            goto label_306de8;
        }
    }
    ctx->pc = 0x306DE0u;
    // 0x306de0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x306DE0u;
    {
        const bool branch_taken_0x306de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DE0u;
        // 0x306de4: 0xa6430034  sh          $v1, 0x34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306de0) {
            ctx->pc = 0x306ED8u;
            goto label_306ed8;
        }
    }
    ctx->pc = 0x306DE8u;
label_306de8:
    // 0x306de8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x306de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306dec: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x306decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x306df0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x306df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x306df4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x306df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x306df8: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x306df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x306dfc: 0x86460040  lh          $a2, 0x40($s2)
    ctx->pc = 0x306dfcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x306e00: 0x86440034  lh          $a0, 0x34($s2)
    ctx->pc = 0x306e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x306e04: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x306e04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x306e08: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x306E08u;
    {
        const bool branch_taken_0x306e08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x306e08) {
            ctx->pc = 0x306E50u;
            goto label_306e50;
        }
    }
    ctx->pc = 0x306E10u;
    // 0x306e10: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x306E10u;
    {
        const bool branch_taken_0x306e10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x306E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E10u;
        // 0x306e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e10) {
            ctx->pc = 0x306E28u;
            goto label_306e28;
        }
    }
    ctx->pc = 0x306E18u;
    // 0x306e18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x306e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x306e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306E20u;
    {
        const bool branch_taken_0x306e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E20u;
        // 0x306e24: 0x3c034380  lui         $v1, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e20) {
            ctx->pc = 0x306E34u;
            goto label_306e34;
        }
    }
    ctx->pc = 0x306E28u;
label_306e28:
    // 0x306e28: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x306E28u;
    SET_GPR_U32(ctx, 31, 0x306E30u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x306E28u, 0x306E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E30u;
label_306e30:
    // 0x306e30: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x306e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
label_306e34:
    // 0x306e34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306e38: 0x0  nop
    ctx->pc = 0x306e38u;
    // NOP
    // 0x306e3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x306e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x306e40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x306e40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x306e44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x306e44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x306e48: 0x0  nop
    ctx->pc = 0x306e48u;
    // NOP
    // 0x306e4c: 0xa6430038  sh          $v1, 0x38($s2)
    ctx->pc = 0x306e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 3));
label_306e50:
    // 0x306e50: 0x86450042  lh          $a1, 0x42($s2)
    ctx->pc = 0x306e50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x306e54: 0x86440034  lh          $a0, 0x34($s2)
    ctx->pc = 0x306e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x306e58: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x306e58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x306e5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x306E5Cu;
    {
        const bool branch_taken_0x306e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306e5c) {
            ctx->pc = 0x306EB0u;
            goto label_306eb0;
        }
    }
    ctx->pc = 0x306E64u;
    // 0x306e64: 0x86460036  lh          $a2, 0x36($s2)
    ctx->pc = 0x306e64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x306e68: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x306E68u;
    {
        const bool branch_taken_0x306e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x306E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E68u;
        // 0x306e6c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e68) {
            ctx->pc = 0x306E7Cu;
            goto label_306e7c;
        }
    }
    ctx->pc = 0x306E70u;
    // 0x306e70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306e70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306e74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x306E74u;
    {
        const bool branch_taken_0x306e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E74u;
        // 0x306e78: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e74) {
            ctx->pc = 0x306E88u;
            goto label_306e88;
        }
    }
    ctx->pc = 0x306E7Cu;
label_306e7c:
    // 0x306e7c: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x306E7Cu;
    SET_GPR_U32(ctx, 31, 0x306E84u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x306E7Cu, 0x306E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E84u;
label_306e84:
    // 0x306e84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x306e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_306e88:
    // 0x306e88: 0x3c044380  lui         $a0, 0x4380
    ctx->pc = 0x306e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17280 << 16));
    // 0x306e8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x306e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x306e90: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x306e90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x306e94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x306e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x306e98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x306e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x306e9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x306e9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x306ea0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x306ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x306ea4: 0x0  nop
    ctx->pc = 0x306ea4u;
    // NOP
    // 0x306ea8: 0xa6430038  sh          $v1, 0x38($s2)
    ctx->pc = 0x306ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x306eac: 0x0  nop
    ctx->pc = 0x306eacu;
    // NOP
label_306eb0:
    // 0x306eb0: 0x86430034  lh          $v1, 0x34($s2)
    ctx->pc = 0x306eb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x306eb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306eb8: 0xa6430034  sh          $v1, 0x34($s2)
    ctx->pc = 0x306eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x306ebc: 0x86440034  lh          $a0, 0x34($s2)
    ctx->pc = 0x306ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x306ec0: 0x86430036  lh          $v1, 0x36($s2)
    ctx->pc = 0x306ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x306ec4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x306ec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x306ec8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x306EC8u;
    {
        const bool branch_taken_0x306ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x306ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EC8u;
        // 0x306ecc: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ec8) {
            ctx->pc = 0x306ED8u;
            goto label_306ed8;
        }
    }
    ctx->pc = 0x306ED0u;
    // 0x306ed0: 0xa6430034  sh          $v1, 0x34($s2)
    ctx->pc = 0x306ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x306ed4: 0x0  nop
    ctx->pc = 0x306ed4u;
    // NOP
label_306ed8:
    // 0x306ed8: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x306ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x306edc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x306edcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x306ee0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x306ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x306ee4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x306ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x306ee8: 0x1460ff63  bnez        $v1, . + 4 + (-0x9D << 2)
    ctx->pc = 0x306EE8u;
    {
        const bool branch_taken_0x306ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306ee8) {
            ctx->pc = 0x306C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306c78;
        }
    }
    ctx->pc = 0x306EF0u;
label_306ef0:
    // 0x306ef0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x306ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x306ef4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x306ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x306ef8: 0x9063000c  lbu         $v1, 0xC($v1)
    ctx->pc = 0x306ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x306efc: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x306efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x306f00: 0x1460ff57  bnez        $v1, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x306F00u;
    {
        const bool branch_taken_0x306f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306f00) {
            ctx->pc = 0x306C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306c60;
        }
    }
    ctx->pc = 0x306F08u;
label_306f08:
    // 0x306f08: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x306f08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x306f0c: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x306f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x306f10: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x306f10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x306f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306f18: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x306f18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x306f1c: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x306f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x306f20: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x306f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x306f24: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x306F24u;
    {
        const bool branch_taken_0x306f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F24u;
        // 0x306f28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f24) {
            ctx->pc = 0x306F30u;
            goto label_306f30;
        }
    }
    ctx->pc = 0x306F2Cu;
    // 0x306f2c: 0xa6230054  sh          $v1, 0x54($s1)
    ctx->pc = 0x306f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 3));
label_306f30:
    // 0x306f30: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x306f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x306f34: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x306f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x306f38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x306F38u;
    {
        const bool branch_taken_0x306f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F38u;
        // 0x306f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f38) {
            ctx->pc = 0x306F48u;
            goto label_306f48;
        }
    }
    ctx->pc = 0x306F40u;
    // 0x306f40: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x306F40u;
    SET_GPR_U32(ctx, 31, 0x306F48u);
    ctx->pc = 0x306F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F40u;
    // 0x306f44: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x306F40u, 0x306F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F48u;
label_306f48:
    // 0x306f48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x306f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x306f4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x306f4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306f50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x306f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306f54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x306f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306f58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306f64: 0x3e00008  jr          $ra
    ctx->pc = 0x306F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F64u;
        // 0x306f68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306F6Cu;
}
