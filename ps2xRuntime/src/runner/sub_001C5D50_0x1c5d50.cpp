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

// Function: sub_001C5D50
// Address: 0x1c5d50 - 0x1c5f08
void sub_001C5D50_0x1c5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D50_0x1c5d50");
#endif

    switch (ctx->pc) {
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e5cu: goto label_1c5e5c;
        case 0x1c5e70u: goto label_1c5e70;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5ed8u: goto label_1c5ed8;
        case 0x1c5eecu: goto label_1c5eec;
        default: break;
    }

    ctx->pc = 0x1c5d50u;

    // 0x1c5d50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c5d54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5d58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c5d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c5d5c: 0x2442f660  addiu       $v0, $v0, -0x9A0
    ctx->pc = 0x1c5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964832));
    // 0x1c5d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5d64: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x1c5d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c5d6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c5d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5d74: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1c5d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1c5d78: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1c5d78u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x40F660u));
    // 0x1c5d7c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c5d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d84: 0x24c6f670  addiu       $a2, $a2, -0x990
    ctx->pc = 0x1c5d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964848));
    // 0x1c5d88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c5d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d8c: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1c5d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5d90: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d98: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1c5d98u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x1c5d9c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5da0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1c5da0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40F670u));
    // 0x1c5da4: 0x2442f680  addiu       $v0, $v0, -0x980
    ctx->pc = 0x1c5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964864));
    // 0x1c5da8: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c5dac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c5dacu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F680u));
    // 0x1c5db0: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C5DB0u;
    SET_GPR_U32(ctx, 31, 0x1C5DB8u);
    ctx->pc = 0x1C5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DB0u;
    // 0x1c5db4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C5DB0u, 0x1C5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DB8u;
label_1c5db8:
    // 0x1c5db8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1c5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1c5dbc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5DBCu;
    {
        const bool branch_taken_0x1c5dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5dbc) {
            ctx->pc = 0x1C5DD0u;
            goto label_1c5dd0;
        }
    }
    ctx->pc = 0x1C5DC4u;
    // 0x1c5dc4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1C5DC4u;
    {
        const bool branch_taken_0x1c5dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5dc4) {
            ctx->pc = 0x1C5EF0u;
            goto label_1c5ef0;
        }
    }
    ctx->pc = 0x1C5DCCu;
    // 0x1c5dcc: 0x0  nop
    ctx->pc = 0x1c5dccu;
    // NOP
label_1c5dd0:
    // 0x1c5dd0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5dd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5dd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ddc: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5DDCu;
    SET_GPR_U32(ctx, 31, 0x1C5DE4u);
    ctx->pc = 0x1C5DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DDCu;
    // 0x1c5de0: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5DDCu, 0x1C5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DE4u;
label_1c5de4:
    // 0x1c5de4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5de8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5dec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5df0: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5DF0u;
    SET_GPR_U32(ctx, 31, 0x1C5DF8u);
    ctx->pc = 0x1C5DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DF0u;
    // 0x1c5df4: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5DF0u, 0x1C5DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DF8u;
label_1c5df8:
    // 0x1c5df8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1c5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1c5dfc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5e00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5e04: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5E04u;
    SET_GPR_U32(ctx, 31, 0x1C5E0Cu);
    ctx->pc = 0x1C5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E04u;
    // 0x1c5e08: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5E04u, 0x1C5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E0Cu;
label_1c5e0c:
    // 0x1c5e0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5e10: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c5e14: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c5e14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c5e18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5e1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c5e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5e20: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5e24: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C5E24u;
    SET_GPR_U32(ctx, 31, 0x1C5E2Cu);
    ctx->pc = 0x1C5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E24u;
    // 0x1c5e28: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C5E24u, 0x1C5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E2Cu;
label_1c5e2c:
    // 0x1c5e2c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5e30: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5E30u;
    SET_GPR_U32(ctx, 31, 0x1C5E38u);
    ctx->pc = 0x1C5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E30u;
    // 0x1c5e34: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5E30u, 0x1C5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E38u;
label_1c5e38:
    // 0x1c5e38: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1c5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1c5e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5e40: 0x0  nop
    ctx->pc = 0x1c5e40u;
    // NOP
    // 0x1c5e44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5e48: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5E48u;
    {
        const bool branch_taken_0x1c5e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E48u;
        // 0x1c5e4c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e48) {
            ctx->pc = 0x1C5E70u;
            goto label_1c5e70;
        }
    }
    ctx->pc = 0x1C5E50u;
    // 0x1c5e50: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c5e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5e54: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5E54u;
    SET_GPR_U32(ctx, 31, 0x1C5E5Cu);
    ctx->pc = 0x1C5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E54u;
    // 0x1c5e58: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5E54u, 0x1C5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E5Cu;
label_1c5e5c:
    // 0x1c5e5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5e60: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c5e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c5e64: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5e68: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5E68u;
    SET_GPR_U32(ctx, 31, 0x1C5E70u);
    ctx->pc = 0x1C5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E68u;
    // 0x1c5e6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5E68u, 0x1C5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E70u;
label_1c5e70:
    // 0x1c5e70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c5e74: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5E74u;
    SET_GPR_U32(ctx, 31, 0x1C5E7Cu);
    ctx->pc = 0x1C5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E74u;
    // 0x1c5e78: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5E74u, 0x1C5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e80: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5E80u;
    {
        const bool branch_taken_0x1c5e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E80u;
        // 0x1c5e84: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e80) {
            ctx->pc = 0x1C5E98u;
            goto label_1c5e98;
        }
    }
    ctx->pc = 0x1C5E88u;
    // 0x1c5e88: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1c5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1c5e8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5e90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5E90u;
    {
        const bool branch_taken_0x1c5e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e90) {
            ctx->pc = 0x1C5E9Cu;
            goto label_1c5e9c;
        }
    }
    ctx->pc = 0x1C5E98u;
label_1c5e98:
    // 0x1c5e98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c5e9c:
    // 0x1c5e9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5ea0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5EA0u;
    {
        const bool branch_taken_0x1c5ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5ea0) {
            ctx->pc = 0x1C5EF0u;
            goto label_1c5ef0;
        }
    }
    ctx->pc = 0x1C5EA8u;
    // 0x1c5ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5eac: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5EACu;
    {
        const bool branch_taken_0x1c5eac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EACu;
        // 0x1c5eb0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5eac) {
            ctx->pc = 0x1C5EC4u;
            goto label_1c5ec4;
        }
    }
    ctx->pc = 0x1C5EB4u;
    // 0x1c5eb4: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1c5eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5EBCu;
    {
        const bool branch_taken_0x1c5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EBCu;
        // 0x1c5ec0: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ebc) {
            ctx->pc = 0x1C5ECCu;
            goto label_1c5ecc;
        }
    }
    ctx->pc = 0x1C5EC4u;
label_1c5ec4:
    // 0x1c5ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5ec8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1c5ec8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c5ecc:
    // 0x1c5ecc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c5ed0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5ED0u;
    SET_GPR_U32(ctx, 31, 0x1C5ED8u);
    ctx->pc = 0x1C5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5ED0u;
    // 0x1c5ed4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5ED0u, 0x1C5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5ED8u;
label_1c5ed8:
    // 0x1c5ed8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5edc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c5edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c5ee0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5ee4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5EE4u;
    SET_GPR_U32(ctx, 31, 0x1C5EECu);
    ctx->pc = 0x1C5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5EE4u;
    // 0x1c5ee8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5EE4u, 0x1C5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5EECu;
label_1c5eec:
    // 0x1c5eec: 0x0  nop
    ctx->pc = 0x1c5eecu;
    // NOP
label_1c5ef0:
    // 0x1c5ef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c5ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F00u;
        // 0x1c5f04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5F08u;
}
