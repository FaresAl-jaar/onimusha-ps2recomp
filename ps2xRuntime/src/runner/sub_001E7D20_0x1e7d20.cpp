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

// Function: sub_001E7D20
// Address: 0x1e7d20 - 0x1e8210
void sub_001E7D20_0x1e7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D20_0x1e7d20");
#endif

    switch (ctx->pc) {
        case 0x1e7d88u: goto label_1e7d88;
        case 0x1e7dccu: goto label_1e7dcc;
        case 0x1e7dd4u: goto label_1e7dd4;
        case 0x1e7de0u: goto label_1e7de0;
        case 0x1e7df8u: goto label_1e7df8;
        case 0x1e7e0cu: goto label_1e7e0c;
        case 0x1e7e18u: goto label_1e7e18;
        case 0x1e7e2cu: goto label_1e7e2c;
        case 0x1e7e80u: goto label_1e7e80;
        case 0x1e7e90u: goto label_1e7e90;
        case 0x1e7ea4u: goto label_1e7ea4;
        case 0x1e7f2cu: goto label_1e7f2c;
        case 0x1e7f44u: goto label_1e7f44;
        case 0x1e7fc0u: goto label_1e7fc0;
        case 0x1e7fd4u: goto label_1e7fd4;
        case 0x1e7fe8u: goto label_1e7fe8;
        case 0x1e7ffcu: goto label_1e7ffc;
        case 0x1e8010u: goto label_1e8010;
        case 0x1e8050u: goto label_1e8050;
        case 0x1e806cu: goto label_1e806c;
        case 0x1e8088u: goto label_1e8088;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80c0u: goto label_1e80c0;
        case 0x1e8104u: goto label_1e8104;
        case 0x1e8124u: goto label_1e8124;
        case 0x1e8140u: goto label_1e8140;
        case 0x1e8168u: goto label_1e8168;
        case 0x1e8188u: goto label_1e8188;
        case 0x1e81b4u: goto label_1e81b4;
        case 0x1e81c0u: goto label_1e81c0;
        case 0x1e81d8u: goto label_1e81d8;
        default: break;
    }

    ctx->pc = 0x1e7d20u;

    // 0x1e7d20: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1e7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1e7d24: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e7d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e7d28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1e7d2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e7d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e7d30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e7d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e7d34: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1e7d34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e7d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e7d3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e7d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e7d40: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e7d40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e7d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e7d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e7d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7d58: 0xa7a800ae  sh          $t0, 0xAE($sp)
    ctx->pc = 0x1e7d58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 8));
    // 0x1e7d5c: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e7d5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e7d60: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7D60u;
    {
        const bool branch_taken_0x1e7d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D60u;
        // 0x1e7d64: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d60) {
            ctx->pc = 0x1E7D70u;
            goto label_1e7d70;
        }
    }
    ctx->pc = 0x1E7D68u;
    // 0x1e7d68: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1E7D68u;
    {
        const bool branch_taken_0x1e7d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D68u;
        // 0x1e7d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d68) {
            ctx->pc = 0x1E81E0u;
            goto label_1e81e0;
        }
    }
    ctx->pc = 0x1E7D70u;
label_1e7d70:
    // 0x1e7d70: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7D70u;
    {
        const bool branch_taken_0x1e7d70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D70u;
        // 0x1e7d74: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d70) {
            ctx->pc = 0x1E7D80u;
            goto label_1e7d80;
        }
    }
    ctx->pc = 0x1E7D78u;
    // 0x1e7d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7D78u;
    {
        const bool branch_taken_0x1e7d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D78u;
        // 0x1e7d7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d78) {
            ctx->pc = 0x1E7D90u;
            goto label_1e7d90;
        }
    }
    ctx->pc = 0x1E7D80u;
label_1e7d80:
    // 0x1e7d80: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E7D80u;
    SET_GPR_U32(ctx, 31, 0x1E7D88u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E7D80u, 0x1E7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D88u;
label_1e7d88:
    // 0x1e7d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e7d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e7d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d90:
    // 0x1e7d90: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e7d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e7d94: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e7d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e7d98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7d9c: 0x92a5003a  lbu         $a1, 0x3A($s5)
    ctx->pc = 0x1e7d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 58)));
    // 0x1e7da0: 0x34210080  ori         $at, $at, 0x80
    ctx->pc = 0x1e7da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)128);
    // 0x1e7da4: 0x92a6003b  lbu         $a2, 0x3B($s5)
    ctx->pc = 0x1e7da4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 59)));
    // 0x1e7da8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e7dac: 0x92a8003e  lbu         $t0, 0x3E($s5)
    ctx->pc = 0x1e7dacu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 62)));
    // 0x1e7db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e7db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7db4: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x1e7db4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e7db8: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x1e7db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e7dbc: 0x2721018  mult        $v0, $s3, $s2
    ctx->pc = 0x1e7dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7dc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e7dc4: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E7DC4u;
    SET_GPR_U32(ctx, 31, 0x1E7DCCu);
    ctx->pc = 0x1E7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DC4u;
    // 0x1e7dc8: 0x41a021  addu        $s4, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E7DC4u, 0x1E7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DCCu;
label_1e7dcc:
    // 0x1e7dcc: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1E7DCCu;
    SET_GPR_U32(ctx, 31, 0x1E7DD4u);
    ctx->pc = 0x1E7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DCCu;
    // 0x1e7dd0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1E7DCCu, 0x1E7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DD4u;
label_1e7dd4:
    // 0x1e7dd4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e7dd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dd8: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1E7DD8u;
    SET_GPR_U32(ctx, 31, 0x1E7DE0u);
    ctx->pc = 0x1E7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DD8u;
    // 0x1e7ddc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1E7DD8u, 0x1E7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DE0u;
label_1e7de0:
    // 0x1e7de0: 0x92a80032  lbu         $t0, 0x32($s5)
    ctx->pc = 0x1e7de0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1e7de4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e7de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7de8: 0x26a40080  addiu       $a0, $s5, 0x80
    ctx->pc = 0x1e7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    // 0x1e7dec: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e7decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7df0: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1E7DF0u;
    SET_GPR_U32(ctx, 31, 0x1E7DF8u);
    ctx->pc = 0x1E7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DF0u;
    // 0x1e7df4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1E7DF0u, 0x1E7DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DF8u;
label_1e7df8:
    // 0x1e7df8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e7df8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7dfc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e7dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7e00: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e7e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7e04: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E7E04u;
    SET_GPR_U32(ctx, 31, 0x1E7E0Cu);
    ctx->pc = 0x1E7E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E04u;
    // 0x1e7e08: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E7E04u, 0x1E7E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E0Cu;
label_1e7e0c:
    // 0x1e7e0c: 0x86a50040  lh          $a1, 0x40($s5)
    ctx->pc = 0x1e7e0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1e7e10: 0xc04d594  jal         func_135650
    ctx->pc = 0x1E7E10u;
    SET_GPR_U32(ctx, 31, 0x1E7E18u);
    ctx->pc = 0x1E7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E10u;
    // 0x1e7e14: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x1E7E10u, 0x1E7E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E18u;
label_1e7e18:
    // 0x1e7e18: 0xc6ac004c  lwc1        $f12, 0x4C($s5)
    ctx->pc = 0x1e7e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7e1c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7e20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e7e20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e7e24: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x1E7E24u;
    SET_GPR_U32(ctx, 31, 0x1E7E2Cu);
    ctx->pc = 0x1E7E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E24u;
    // 0x1e7e28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x1E7E24u, 0x1E7E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E2Cu;
label_1e7e2c:
    // 0x1e7e2c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e7e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e7e30: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x1e7e30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e7e34: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e7e34u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e7e38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7e3c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e7e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e7e40: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e7e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e7e44: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e7e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e7e48: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e7e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e7e4c: 0x7fa90160  sq          $t1, 0x160($sp)
    ctx->pc = 0x1e7e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 9));
    // 0x1e7e50: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e7e50u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e7e54: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e7e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e7e58: 0x7fa80170  sq          $t0, 0x170($sp)
    ctx->pc = 0x1e7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 8));
    // 0x1e7e5c: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e7e5cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e7e60: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e7e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e7e64: 0x7fa70180  sq          $a3, 0x180($sp)
    ctx->pc = 0x1e7e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 7));
    // 0x1e7e68: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e7e68u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e7e6c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e7e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e7e70: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x1e7e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7e74: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e7e74u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e7e78: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E7E78u;
    SET_GPR_U32(ctx, 31, 0x1E7E80u);
    ctx->pc = 0x1E7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E78u;
    // 0x1e7e7c: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E7E78u, 0x1E7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E80u;
label_1e7e80:
    // 0x1e7e80: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e7e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e7e84: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e7e88: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E7E88u;
    SET_GPR_U32(ctx, 31, 0x1E7E90u);
    ctx->pc = 0x1E7E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E88u;
    // 0x1e7e8c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E7E88u, 0x1E7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E90u;
label_1e7e90:
    // 0x1e7e90: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e7e94: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e7e98: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e7e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e7e9c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E7EA4u);
    ctx->pc = 0x1E7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E9Cu;
    // 0x1e7ea0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E7E9Cu, 0x1E7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7EA4u;
label_1e7ea4:
    // 0x1e7ea4: 0x87a200ae  lh          $v0, 0xAE($sp)
    ctx->pc = 0x1e7ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x1e7ea8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7eac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e7eacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7eb0: 0x7aa20050  lq          $v0, 0x50($s5)
    ctx->pc = 0x1e7eb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1e7eb4: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x1e7eb4u;
    runtime->Store128(rdram, ctx, 0x70000040u, GPR_VEC(ctx, 2));
    // 0x1e7eb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7ebc: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1e7ec0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e7ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7ec4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7ec8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e7ec8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e7ecc: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1e7eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1e7ed0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7ed4: 0x78220040  lq          $v0, 0x40($at)
    ctx->pc = 0x1e7ed4u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000040u));
    // 0x1e7ed8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7edc: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1e7edcu;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1e7ee0: 0x7aa20060  lq          $v0, 0x60($s5)
    ctx->pc = 0x1e7ee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1e7ee4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7ee8: 0x7c220060  sq          $v0, 0x60($at)
    ctx->pc = 0x1e7ee8u;
    runtime->Store128(rdram, ctx, 0x70000060u, GPR_VEC(ctx, 2));
    // 0x1e7eec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7ef0: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000006Cu)); // MMIO: 0x7000006c
    // 0x1e7ef4: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1e7ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7ef8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7efc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e7f00: 0xac22006c  sw          $v0, 0x6C($at)
    ctx->pc = 0x1e7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 108), GPR_U32(ctx, 2));
    // 0x1e7f04: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7f08: 0x78220060  lq          $v0, 0x60($at)
    ctx->pc = 0x1e7f08u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000060u));
    // 0x1e7f0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7f10: 0x7c220070  sq          $v0, 0x70($at)
    ctx->pc = 0x1e7f10u;
    runtime->Store128(rdram, ctx, 0x70000070u, GPR_VEC(ctx, 2));
    // 0x1e7f14: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e7f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e7f18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e7f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e7f1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7F1Cu;
    {
        const bool branch_taken_0x1e7f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F1Cu;
        // 0x1e7f20: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f1c) {
            ctx->pc = 0x1E7F30u;
            goto label_1e7f30;
        }
    }
    ctx->pc = 0x1E7F24u;
    // 0x1e7f24: 0xc07865c  jal         func_1E1970
    ctx->pc = 0x1E7F24u;
    SET_GPR_U32(ctx, 31, 0x1E7F2Cu);
    ctx->pc = 0x1E7F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F24u;
    // 0x1e7f28: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1970u, 0x1E7F24u, 0x1E7F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F2Cu;
label_1e7f2c:
    // 0x1e7f2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e7f30:
    // 0x1e7f30: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1e7f30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1e7f34: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e7f38: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1e7f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e7f3c: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1E7F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F44u);
    ctx->pc = 0x1E7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F3Cu;
    // 0x1e7f40: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1E7F3Cu, 0x1E7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7F44u;
label_1e7f44:
    // 0x1e7f44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e7f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e7f48: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e7f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e7f4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e7f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e7f50: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1E7F50u;
    {
        const bool branch_taken_0x1e7f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f50) {
            ctx->pc = 0x1E80C8u;
            goto label_1e80c8;
        }
    }
    ctx->pc = 0x1E7F58u;
    // 0x1e7f58: 0xc6a00044  lwc1        $f0, 0x44($s5)
    ctx->pc = 0x1e7f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7f5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7f60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e7f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e7f64: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7f68: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e7f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e7f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7f70: 0x86e20008  lh          $v0, 0x8($s7)
    ctx->pc = 0x1e7f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x1e7f74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e7f74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e7f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7f7c: 0x0  nop
    ctx->pc = 0x1e7f7cu;
    // NOP
    // 0x1e7f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e7f84: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e7f84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e7f88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e7f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7f8c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e7f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e7f90: 0xc6a00048  lwc1        $f0, 0x48($s5)
    ctx->pc = 0x1e7f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7f94: 0x86e2000a  lh          $v0, 0xA($s7)
    ctx->pc = 0x1e7f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x1e7f98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e7f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e7f9c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1e7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1e7fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7fa4: 0x0  nop
    ctx->pc = 0x1e7fa4u;
    // NOP
    // 0x1e7fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e7fac: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e7facu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e7fb0: 0x0  nop
    ctx->pc = 0x1e7fb0u;
    // NOP
    // 0x1e7fb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e7fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e7fb8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E7FB8u;
    SET_GPR_U32(ctx, 31, 0x1E7FC0u);
    ctx->pc = 0x1E7FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FB8u;
    // 0x1e7fbc: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E7FB8u, 0x1E7FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FC0u;
label_1e7fc0:
    // 0x1e7fc0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7fc4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e7fc8: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1e7fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e7fcc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E7FCCu;
    SET_GPR_U32(ctx, 31, 0x1E7FD4u);
    ctx->pc = 0x1E7FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FCCu;
    // 0x1e7fd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E7FCCu, 0x1E7FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FD4u;
label_1e7fd4:
    // 0x1e7fd4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7fd8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e7fdc: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1e7fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1e7fe0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E7FE0u;
    SET_GPR_U32(ctx, 31, 0x1E7FE8u);
    ctx->pc = 0x1E7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FE0u;
    // 0x1e7fe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E7FE0u, 0x1E7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FE8u;
label_1e7fe8:
    // 0x1e7fe8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e7fec: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e7ff0: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1e7ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1e7ff4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E7FF4u;
    SET_GPR_U32(ctx, 31, 0x1E7FFCu);
    ctx->pc = 0x1E7FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7FF4u;
    // 0x1e7ff8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E7FF4u, 0x1E7FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7FFCu;
label_1e7ffc:
    // 0x1e7ffc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e8000: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e8000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8004: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e8004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e8008: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1E8008u;
    SET_GPR_U32(ctx, 31, 0x1E8010u);
    ctx->pc = 0x1E800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8008u;
    // 0x1e800c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1E8008u, 0x1E8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8010u;
label_1e8010:
    // 0x1e8010: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e8014: 0x92a90037  lbu         $t1, 0x37($s5)
    ctx->pc = 0x1e8014u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x1e8018: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e8018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e801c: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1e801cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1e8020: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e8020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e8024: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1e8024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1e8028: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e802c: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1e802cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1e8030: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e8034: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e8034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e8038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8038u;
    {
        const bool branch_taken_0x1e8038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8038u;
        // 0x1e803c: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8038) {
            ctx->pc = 0x1E8058u;
            goto label_1e8058;
        }
    }
    ctx->pc = 0x1E8040u;
    // 0x1e8040: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8044: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e8044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e8048: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1E8048u;
    SET_GPR_U32(ctx, 31, 0x1E8050u);
    ctx->pc = 0x1E804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8048u;
    // 0x1e804c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1E8048u, 0x1E8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8050u;
label_1e8050:
    // 0x1e8050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8050u;
    {
        const bool branch_taken_0x1e8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8050) {
            ctx->pc = 0x1E8070u;
            goto label_1e8070;
        }
    }
    ctx->pc = 0x1E8058u;
label_1e8058:
    // 0x1e8058: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e805c: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e805cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e8060: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8064: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1E8064u;
    SET_GPR_U32(ctx, 31, 0x1E806Cu);
    ctx->pc = 0x1E8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8064u;
    // 0x1e8068: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1E8064u, 0x1E806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E806Cu;
label_1e806c:
    // 0x1e806c: 0x0  nop
    ctx->pc = 0x1e806cu;
    // NOP
label_1e8070:
    // 0x1e8070: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8074: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e8074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8078: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e807c: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1e807cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e8080: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1E8080u;
    SET_GPR_U32(ctx, 31, 0x1E8088u);
    ctx->pc = 0x1E8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8080u;
    // 0x1e8084: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1E8080u, 0x1E8088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8088u;
label_1e8088:
    // 0x1e8088: 0x8ea60090  lw          $a2, 0x90($s5)
    ctx->pc = 0x1e8088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x1e808c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e8090: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e8094: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e8094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8098: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e809c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1e809cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80a0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e80a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80a4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e80a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e80a8: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1E80A8u;
    SET_GPR_U32(ctx, 31, 0x1E80B0u);
    ctx->pc = 0x1E80ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80A8u;
    // 0x1e80ac: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1E80A8u, 0x1E80B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80B0u;
label_1e80b0:
    // 0x1e80b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e80b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e80b4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e80b8: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1E80B8u;
    SET_GPR_U32(ctx, 31, 0x1E80C0u);
    ctx->pc = 0x1E80BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80B8u;
    // 0x1e80bc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1E80B8u, 0x1E80C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E80C0u;
label_1e80c0:
    // 0x1e80c0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E80C0u;
    {
        const bool branch_taken_0x1e80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80C0u;
        // 0x1e80c4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80c0) {
            ctx->pc = 0x1E8170u;
            goto label_1e8170;
        }
    }
    ctx->pc = 0x1E80C8u;
label_1e80c8:
    // 0x1e80c8: 0x92a90037  lbu         $t1, 0x37($s5)
    ctx->pc = 0x1e80c8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x1e80cc: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e80ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e80d0: 0x92a80036  lbu         $t0, 0x36($s5)
    ctx->pc = 0x1e80d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
    // 0x1e80d4: 0x92a30033  lbu         $v1, 0x33($s5)
    ctx->pc = 0x1e80d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e80d8: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x1e80d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
    // 0x1e80dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e80dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e80e0: 0x681826  xor         $v1, $v1, $t0
    ctx->pc = 0x1e80e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x1e80e4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1e80e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1e80e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e80e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e80ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E80ECu;
    {
        const bool branch_taken_0x1e80ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80ECu;
        // 0x1e80f0: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80ec) {
            ctx->pc = 0x1E8110u;
            goto label_1e8110;
        }
    }
    ctx->pc = 0x1E80F4u;
    // 0x1e80f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e80f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e80f8: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e80f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e80fc: 0xc076b04  jal         func_1DAC10
    ctx->pc = 0x1E80FCu;
    SET_GPR_U32(ctx, 31, 0x1E8104u);
    ctx->pc = 0x1E8100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E80FCu;
    // 0x1e8100: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAC10u, 0x1E80FCu, 0x1E8104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8104u;
label_1e8104:
    // 0x1e8104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8104u;
    {
        const bool branch_taken_0x1e8104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8104) {
            ctx->pc = 0x1E8128u;
            goto label_1e8128;
        }
    }
    ctx->pc = 0x1E810Cu;
    // 0x1e810c: 0x0  nop
    ctx->pc = 0x1e810cu;
    // NOP
label_1e8110:
    // 0x1e8110: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8114: 0x34a40080  ori         $a0, $a1, 0x80
    ctx->pc = 0x1e8114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e8118: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e811c: 0xc076a34  jal         func_1DA8D0
    ctx->pc = 0x1E811Cu;
    SET_GPR_U32(ctx, 31, 0x1E8124u);
    ctx->pc = 0x1E8120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E811Cu;
    // 0x1e8120: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA8D0u, 0x1E811Cu, 0x1E8124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8124u;
label_1e8124:
    // 0x1e8124: 0x0  nop
    ctx->pc = 0x1e8124u;
    // NOP
label_1e8128:
    // 0x1e8128: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e812c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8130: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e8130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8134: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x1e8134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1e8138: 0xc076b74  jal         func_1DADD0
    ctx->pc = 0x1E8138u;
    SET_GPR_U32(ctx, 31, 0x1E8140u);
    ctx->pc = 0x1E813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8138u;
    // 0x1e813c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DADD0u, 0x1E8138u, 0x1E8140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8140u;
label_1e8140:
    // 0x1e8140: 0x8ea60090  lw          $a2, 0x90($s5)
    ctx->pc = 0x1e8140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x1e8144: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e8144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e8148: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e8148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e814c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1e814cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8150: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e8150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e8154: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1e8154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8158: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1e8158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e815c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e8160: 0xc07603c  jal         func_1D80F0
    ctx->pc = 0x1E8160u;
    SET_GPR_U32(ctx, 31, 0x1E8168u);
    ctx->pc = 0x1E8164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8160u;
    // 0x1e8164: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D80F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D80F0u, 0x1E8160u, 0x1E8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8168u;
label_1e8168:
    // 0x1e8168: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e816c: 0x0  nop
    ctx->pc = 0x1e816cu;
    // NOP
label_1e8170:
    // 0x1e8170: 0x92a20035  lbu         $v0, 0x35($s5)
    ctx->pc = 0x1e8170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e8174: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e8174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e8178: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8178u;
    {
        const bool branch_taken_0x1e8178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8178u;
        // 0x1e817c: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8178) {
            ctx->pc = 0x1E8190u;
            goto label_1e8190;
        }
    }
    ctx->pc = 0x1E8180u;
    // 0x1e8180: 0xc07866c  jal         func_1E19B0
    ctx->pc = 0x1E8180u;
    SET_GPR_U32(ctx, 31, 0x1E8188u);
    ctx->pc = 0x1E8184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8180u;
    // 0x1e8184: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19B0u, 0x1E8180u, 0x1E8188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8188u;
label_1e8188:
    // 0x1e8188: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e8188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e818c: 0x0  nop
    ctx->pc = 0x1e818cu;
    // NOP
label_1e8190:
    // 0x1e8190: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E8190u;
    {
        const bool branch_taken_0x1e8190 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8190u;
        // 0x1e8194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8190) {
            ctx->pc = 0x1E81A0u;
            goto label_1e81a0;
        }
    }
    ctx->pc = 0x1E8198u;
    // 0x1e8198: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8198u;
    {
        const bool branch_taken_0x1e8198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8198) {
            ctx->pc = 0x1E81E0u;
            goto label_1e81e0;
        }
    }
    ctx->pc = 0x1E81A0u;
label_1e81a0:
    // 0x1e81a0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e81a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e81a8: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e81a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e81ac: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E81ACu;
    SET_GPR_U32(ctx, 31, 0x1E81B4u);
    ctx->pc = 0x1E81B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81ACu;
    // 0x1e81b0: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E81ACu, 0x1E81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81B4u;
label_1e81b4:
    // 0x1e81b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81b8: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E81B8u;
    SET_GPR_U32(ctx, 31, 0x1E81C0u);
    ctx->pc = 0x1E81BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81B8u;
    // 0x1e81bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E81B8u, 0x1E81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81C0u;
label_1e81c0:
    // 0x1e81c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e81c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e81c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e81c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1e81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1e81cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e81ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81d0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E81D0u;
    SET_GPR_U32(ctx, 31, 0x1E81D8u);
    ctx->pc = 0x1E81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E81D0u;
    // 0x1e81d4: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E81D0u, 0x1E81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E81D8u;
label_1e81d8:
    // 0x1e81d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e81d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e81dc: 0x0  nop
    ctx->pc = 0x1e81dcu;
    // NOP
label_1e81e0:
    // 0x1e81e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e81e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e81e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e81e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e81e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e81e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e81ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e81ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e81f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e81f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e81f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e81f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e81f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e81f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e81fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e81fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e8200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8208: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8208u;
        // 0x1e820c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8210u;
}
