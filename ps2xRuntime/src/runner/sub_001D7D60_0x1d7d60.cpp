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

// Function: sub_001D7D60
// Address: 0x1d7d60 - 0x1d80ec
void sub_001D7D60_0x1d7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7D60_0x1d7d60");
#endif

    switch (ctx->pc) {
        case 0x1d7e1cu: goto label_1d7e1c;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e34u: goto label_1d7e34;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e50u: goto label_1d7e50;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7e74u: goto label_1d7e74;
        case 0x1d7e84u: goto label_1d7e84;
        case 0x1d7e94u: goto label_1d7e94;
        case 0x1d7ea4u: goto label_1d7ea4;
        case 0x1d7eb4u: goto label_1d7eb4;
        case 0x1d7ec4u: goto label_1d7ec4;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7f08u: goto label_1d7f08;
        case 0x1d7f38u: goto label_1d7f38;
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7f60u: goto label_1d7f60;
        case 0x1d7f88u: goto label_1d7f88;
        case 0x1d7f98u: goto label_1d7f98;
        case 0x1d7fa8u: goto label_1d7fa8;
        case 0x1d7fc0u: goto label_1d7fc0;
        case 0x1d7fe8u: goto label_1d7fe8;
        case 0x1d7ffcu: goto label_1d7ffc;
        case 0x1d800cu: goto label_1d800c;
        case 0x1d801cu: goto label_1d801c;
        case 0x1d802cu: goto label_1d802c;
        default: break;
    }

    ctx->pc = 0x1d7d60u;

    // 0x1d7d60: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x1d7d64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d7d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d7d68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d7d6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d7d70: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1d7d70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d7d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d7d78: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1d7d78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d7d80: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1d7d80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d7d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d7d88: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1d7d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d7d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d7d90: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1d7d90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d7d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d7d98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d7d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d7da0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d7da4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1d7da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7da8: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x1d7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x1d7dac: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DACu;
    {
        const bool branch_taken_0x1d7dac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DACu;
        // 0x1d7db0: 0xafa700b8  sw          $a3, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dac) {
            ctx->pc = 0x1D7DB8u;
            goto label_1d7db8;
        }
    }
    ctx->pc = 0x1D7DB4u;
    // 0x1d7db4: 0x86b60002  lh          $s6, 0x2($s5)
    ctx->pc = 0x1d7db4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_1d7db8:
    // 0x1d7db8: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x1d7db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d7dbc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7DBCu;
    {
        const bool branch_taken_0x1d7dbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DBCu;
        // 0x1d7dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dbc) {
            ctx->pc = 0x1D7DD0u;
            goto label_1d7dd0;
        }
    }
    ctx->pc = 0x1D7DC4u;
    // 0x1d7dc4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1D7DC4u;
    {
        const bool branch_taken_0x1d7dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7dc4) {
            ctx->pc = 0x1D80B8u;
            goto label_1d80b8;
        }
    }
    ctx->pc = 0x1D7DCCu;
    // 0x1d7dcc: 0x0  nop
    ctx->pc = 0x1d7dccu;
    // NOP
label_1d7dd0:
    // 0x1d7dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7dd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d7dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7dd8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ddc: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7DDCu;
    {
        const bool branch_taken_0x1d7ddc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DDCu;
        // 0x1d7de0: 0x26f10010  addiu       $s1, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ddc) {
            ctx->pc = 0x1D7DF4u;
            goto label_1d7df4;
        }
    }
    ctx->pc = 0x1D7DE4u;
    // 0x1d7de4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7de8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d7de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d7dec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7DECu;
    {
        const bool branch_taken_0x1d7dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DECu;
        // 0x1d7df0: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dec) {
            ctx->pc = 0x1D7E14u;
            goto label_1d7e14;
        }
    }
    ctx->pc = 0x1D7DF4u;
label_1d7df4:
    // 0x1d7df4: 0x26c3ffff  addiu       $v1, $s6, -0x1
    ctx->pc = 0x1d7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1d7df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7dfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d7dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7e04: 0x0  nop
    ctx->pc = 0x1d7e04u;
    // NOP
    // 0x1d7e08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d7e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d7e0c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1d7e0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d7e10: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1d7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1d7e14:
    // 0x1d7e14: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7E14u;
    SET_GPR_U32(ctx, 31, 0x1D7E1Cu);
    ctx->pc = 0x1D7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E14u;
    // 0x1d7e18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7E14u, 0x1D7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E1Cu;
label_1d7e1c:
    // 0x1d7e1c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d7e20: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7E20u;
    SET_GPR_U32(ctx, 31, 0x1D7E28u);
    ctx->pc = 0x1D7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E20u;
    // 0x1d7e24: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7E20u, 0x1D7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E28u;
label_1d7e28:
    // 0x1d7e28: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d7e2c: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E34u);
    ctx->pc = 0x1D7E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E2Cu;
    // 0x1d7e30: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7E2Cu, 0x1D7E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E34u;
label_1d7e34:
    // 0x1d7e34: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x1d7e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1d7e38: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D7E38u;
    SET_GPR_U32(ctx, 31, 0x1D7E40u);
    ctx->pc = 0x1D7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E38u;
    // 0x1d7e3c: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D7E38u, 0x1D7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E40u;
label_1d7e40:
    // 0x1d7e40: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d7e44: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d7e48: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D7E48u;
    SET_GPR_U32(ctx, 31, 0x1D7E50u);
    ctx->pc = 0x1D7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E48u;
    // 0x1d7e4c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D7E48u, 0x1D7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E50u;
label_1d7e50:
    // 0x1d7e50: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x1d7e50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d7e54: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1d7e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d7e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E64u);
    ctx->pc = 0x1D7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E5Cu;
    // 0x1d7e60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D7E5Cu, 0x1D7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E64u;
label_1d7e64:
    // 0x1d7e64: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d7e68: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1d7e6c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E74u);
    ctx->pc = 0x1D7E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E6Cu;
    // 0x1d7e70: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D7E6Cu, 0x1D7E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E74u;
label_1d7e74:
    // 0x1d7e74: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d7e78: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d7e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d7e7c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D7E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E84u);
    ctx->pc = 0x1D7E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E7Cu;
    // 0x1d7e80: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D7E7Cu, 0x1D7E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E84u;
label_1d7e84:
    // 0x1d7e84: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d7e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d7e88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7e88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7e8c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D7E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E94u);
    ctx->pc = 0x1D7E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E8Cu;
    // 0x1d7e90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D7E8Cu, 0x1D7E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E94u;
label_1d7e94:
    // 0x1d7e94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d7e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e9c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7EA4u);
    ctx->pc = 0x1D7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E9Cu;
    // 0x1d7ea0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D7E9Cu, 0x1D7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EA4u;
label_1d7ea4:
    // 0x1d7ea4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d7ea8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7eac: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D7EACu;
    SET_GPR_U32(ctx, 31, 0x1D7EB4u);
    ctx->pc = 0x1D7EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EACu;
    // 0x1d7eb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D7EACu, 0x1D7EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EB4u;
label_1d7eb4:
    // 0x1d7eb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d7eb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7eb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7ebc: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D7EBCu;
    SET_GPR_U32(ctx, 31, 0x1D7EC4u);
    ctx->pc = 0x1D7EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EBCu;
    // 0x1d7ec0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D7EBCu, 0x1D7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EC4u;
label_1d7ec4:
    // 0x1d7ec4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1d7ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7ec8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1d7ecc: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1d7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1d7ed0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x1d7ed0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7ed4: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d7ed8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d7ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d7edc: 0x7ba201c0  lq          $v0, 0x1C0($sp)
    ctx->pc = 0x1d7edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1d7ee0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1d7ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1d7ee4: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1d7ee8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d7ee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7eec: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x1d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d7ef0: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D7EF0u;
    SET_GPR_U32(ctx, 31, 0x1D7EF8u);
    ctx->pc = 0x1D7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EF0u;
    // 0x1d7ef4: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D7EF0u, 0x1D7EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EF8u;
label_1d7ef8:
    // 0x1d7ef8: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1d7ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d7efc: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x1D7EFCu;
    {
        const bool branch_taken_0x1d7efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EFCu;
        // 0x1d7f00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7efc) {
            ctx->pc = 0x1D8040u;
            goto label_1d8040;
        }
    }
    ctx->pc = 0x1D7F04u;
    // 0x1d7f04: 0x0  nop
    ctx->pc = 0x1d7f04u;
    // NOP
label_1d7f08:
    // 0x1d7f08: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7F08u;
    {
        const bool branch_taken_0x1d7f08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f08) {
            ctx->pc = 0x1D7F28u;
            goto label_1d7f28;
        }
    }
    ctx->pc = 0x1D7F10u;
    // 0x1d7f10: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d7f14: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1d7f18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d7f1c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d7f20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d7f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7f24: 0x0  nop
    ctx->pc = 0x1d7f24u;
    // NOP
label_1d7f28:
    // 0x1d7f28: 0x28100  sll         $s0, $v0, 4
    ctx->pc = 0x1d7f28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d7f2c: 0x3d02821  addu        $a1, $fp, $s0
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x1d7f30: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D7F30u;
    SET_GPR_U32(ctx, 31, 0x1D7F38u);
    ctx->pc = 0x1D7F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F30u;
    // 0x1d7f34: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D7F30u, 0x1D7F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F38u;
label_1d7f38:
    // 0x1d7f38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d7f38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d7f3c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d7f40: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7F40u;
    SET_GPR_U32(ctx, 31, 0x1D7F48u);
    ctx->pc = 0x1D7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F40u;
    // 0x1d7f44: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7F40u, 0x1D7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F48u;
label_1d7f48:
    // 0x1d7f48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7f50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7f54: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7f54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d7f58: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7F58u;
    SET_GPR_U32(ctx, 31, 0x1D7F60u);
    ctx->pc = 0x1D7F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F58u;
    // 0x1d7f5c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7F58u, 0x1D7F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F60u;
label_1d7f60:
    // 0x1d7f60: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1d7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d7f64: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d7f68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7f6c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1d7f70: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d7f74: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d7f78: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d7f7c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x1d7f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x1d7f80: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D7F80u;
    SET_GPR_U32(ctx, 31, 0x1D7F88u);
    ctx->pc = 0x1D7F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F80u;
    // 0x1d7f84: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D7F80u, 0x1D7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F88u;
label_1d7f88:
    // 0x1d7f88: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1d7f8c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1d7f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d7f90: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D7F90u;
    SET_GPR_U32(ctx, 31, 0x1D7F98u);
    ctx->pc = 0x1D7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F90u;
    // 0x1d7f94: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D7F90u, 0x1D7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F98u;
label_1d7f98:
    // 0x1d7f98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d7f98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d7f9c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1d7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1d7fa0: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D7FA0u;
    SET_GPR_U32(ctx, 31, 0x1D7FA8u);
    ctx->pc = 0x1D7FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA0u;
    // 0x1d7fa4: 0x139840  sll         $s3, $s3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D7FA0u, 0x1D7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA8u;
label_1d7fa8:
    // 0x1d7fa8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7fac: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d7fb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d7fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7fb4: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x1d7fb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1d7fb8: 0xc0766a0  jal         func_1D9A80
    ctx->pc = 0x1D7FB8u;
    SET_GPR_U32(ctx, 31, 0x1D7FC0u);
    ctx->pc = 0x1D7FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FB8u;
    // 0x1d7fbc: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A80u, 0x1D7FB8u, 0x1D7FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC0u;
label_1d7fc0:
    // 0x1d7fc0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1d7fc4: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1d7fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1d7fc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7fcc: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1d7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d7fd0: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d7fd4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1d7fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d7fd8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1d7fd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1d7fdc: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x1d7fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x1d7fe0: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D7FE0u;
    SET_GPR_U32(ctx, 31, 0x1D7FE8u);
    ctx->pc = 0x1D7FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FE0u;
    // 0x1d7fe4: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D7FE0u, 0x1D7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FE8u;
label_1d7fe8:
    // 0x1d7fe8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1d7fec: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1d7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d7ff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d7ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ff4: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D7FF4u;
    SET_GPR_U32(ctx, 31, 0x1D7FFCu);
    ctx->pc = 0x1D7FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FF4u;
    // 0x1d7ff8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D7FF4u, 0x1D7FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FFCu;
label_1d7ffc:
    // 0x1d7ffc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1d7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d8000: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d8000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d8004: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D8004u;
    SET_GPR_U32(ctx, 31, 0x1D800Cu);
    ctx->pc = 0x1D8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8004u;
    // 0x1d8008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D8004u, 0x1D800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D800Cu;
label_1d800c:
    // 0x1d800c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d8010: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d8014: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D8014u;
    SET_GPR_U32(ctx, 31, 0x1D801Cu);
    ctx->pc = 0x1D8018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8014u;
    // 0x1d8018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D8014u, 0x1D801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D801Cu;
label_1d801c:
    // 0x1d801c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1d801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d8020: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1d8020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d8024: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D8024u;
    SET_GPR_U32(ctx, 31, 0x1D802Cu);
    ctx->pc = 0x1D8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8024u;
    // 0x1d8028: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D8024u, 0x1D802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D802Cu;
label_1d802c:
    // 0x1d802c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d802cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d8030: 0x296102a  slt         $v0, $s4, $s6
    ctx->pc = 0x1d8030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1d8034: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1D8034u;
    {
        const bool branch_taken_0x1d8034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8034u;
        // 0x1d8038: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8034) {
            ctx->pc = 0x1D7F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f08;
        }
    }
    ctx->pc = 0x1D803Cu;
    // 0x1d803c: 0x0  nop
    ctx->pc = 0x1d803cu;
    // NOP
label_1d8040:
    // 0x1d8040: 0x2371823  subu        $v1, $s1, $s7
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1d8044: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8044u;
    {
        const bool branch_taken_0x1d8044 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1D8048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8044u;
        // 0x1d8048: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8044) {
            ctx->pc = 0x1D8054u;
            goto label_1d8054;
        }
    }
    ctx->pc = 0x1D804Cu;
    // 0x1d804c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1d804cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1d8050: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d8050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1d8054:
    // 0x1d8054: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1d8054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8058: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1d8058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x1d805c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d8060: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x1d8060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x1d8064: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1d8064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d8068: 0x0  nop
    ctx->pc = 0x1d8068u;
    // NOP
    // 0x1d806c: 0x0  nop
    ctx->pc = 0x1d806cu;
    // NOP
    // 0x1d8070: 0x1010  mfhi        $v0
    ctx->pc = 0x1d8070u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8074: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d8074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8078: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d8078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d807c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D807Cu;
    {
        const bool branch_taken_0x1d807c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D807Cu;
        // 0x1d8080: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d807c) {
            ctx->pc = 0x1D80A8u;
            goto label_1d80a8;
        }
    }
    ctx->pc = 0x1D8084u;
    // 0x1d8084: 0x3c02302e  lui         $v0, 0x302E
    ctx->pc = 0x1d8084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12334 << 16));
    // 0x1d8088: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1d8088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d808c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d808cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d8090: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d8090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d8094: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x1d8094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1d8098: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d8098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d809c: 0xfee30000  sd          $v1, 0x0($s7)
    ctx->pc = 0x1d809cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
    // 0x1d80a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80A0u;
    {
        const bool branch_taken_0x1d80a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80A0u;
        // 0x1d80a4: 0xfee20008  sd          $v0, 0x8($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80a0) {
            ctx->pc = 0x1D80B0u;
            goto label_1d80b0;
        }
    }
    ctx->pc = 0x1D80A8u;
label_1d80a8:
    // 0x1d80a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D80A8u;
    {
        const bool branch_taken_0x1d80a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80A8u;
        // 0x1d80ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80a8) {
            ctx->pc = 0x1D80B8u;
            goto label_1d80b8;
        }
    }
    ctx->pc = 0x1D80B0u;
label_1d80b0:
    // 0x1d80b0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d80b4: 0x0  nop
    ctx->pc = 0x1d80b4u;
    // NOP
label_1d80b8:
    // 0x1d80b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d80b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d80bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d80bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d80c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d80c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d80c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d80c8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d80c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d80cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d80ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d80d0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d80d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d80d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d80d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d80d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d80d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d80dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d80dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d80e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d80e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d80e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80E4u;
        // 0x1d80e8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80ECu;
}
