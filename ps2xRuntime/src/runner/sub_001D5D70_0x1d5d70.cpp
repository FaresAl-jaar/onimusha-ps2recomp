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

// Function: sub_001D5D70
// Address: 0x1d5d70 - 0x1d5f48
void sub_001D5D70_0x1d5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D70_0x1d5d70");
#endif

    switch (ctx->pc) {
        case 0x1d5e20u: goto label_1d5e20;
        case 0x1d5e2cu: goto label_1d5e2c;
        case 0x1d5e3cu: goto label_1d5e3c;
        case 0x1d5e4cu: goto label_1d5e4c;
        case 0x1d5e5cu: goto label_1d5e5c;
        case 0x1d5e68u: goto label_1d5e68;
        case 0x1d5e94u: goto label_1d5e94;
        case 0x1d5ea4u: goto label_1d5ea4;
        case 0x1d5eb0u: goto label_1d5eb0;
        case 0x1d5ef4u: goto label_1d5ef4;
        default: break;
    }

    ctx->pc = 0x1d5d70u;

    // 0x1d5d70: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d5d74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d5d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d5d78: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d5d7c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d5d80: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1d5d80u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d5d88: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d5d88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d8c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d5d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d5d90: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1d5d90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d94: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d5d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d5d98: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d5d98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d5da0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d5da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5da8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5dac: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5DACu;
    {
        const bool branch_taken_0x1d5dac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dac) {
            ctx->pc = 0x1D5DB8u;
            goto label_1d5db8;
        }
    }
    ctx->pc = 0x1D5DB4u;
    // 0x1d5db4: 0x86b40002  lh          $s4, 0x2($s5)
    ctx->pc = 0x1d5db4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_1d5db8:
    // 0x1d5db8: 0x2a810002  slti        $at, $s4, 0x2
    ctx->pc = 0x1d5db8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5dbc: 0x14200056  bnez        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x1D5DBCu;
    {
        const bool branch_taken_0x1d5dbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5dbc) {
            ctx->pc = 0x1D5F18u;
            goto label_1d5f18;
        }
    }
    ctx->pc = 0x1D5DC4u;
    // 0x1d5dc4: 0x8f848814  lw          $a0, -0x77EC($gp)
    ctx->pc = 0x1d5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936596)));
    // 0x1d5dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5dcc: 0x8f838810  lw          $v1, -0x77F0($gp)
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936592)));
    // 0x1d5dd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d5dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d5ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5de0: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5DE0u;
    {
        const bool branch_taken_0x1d5de0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DE0u;
        // 0x1d5de4: 0x24700010  addiu       $s0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5de0) {
            ctx->pc = 0x1D5DF8u;
            goto label_1d5df8;
        }
    }
    ctx->pc = 0x1D5DE8u;
    // 0x1d5de8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5dec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d5decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d5df0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5DF0u;
    {
        const bool branch_taken_0x1d5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF0u;
        // 0x1d5df4: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5df0) {
            ctx->pc = 0x1D5E18u;
            goto label_1d5e18;
        }
    }
    ctx->pc = 0x1D5DF8u;
label_1d5df8:
    // 0x1d5df8: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1d5df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d5dfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5e00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d5e00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5e08: 0x0  nop
    ctx->pc = 0x1d5e08u;
    // NOP
    // 0x1d5e0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d5e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d5e10: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1d5e10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d5e14: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1d5e18:
    // 0x1d5e18: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D5E18u;
    SET_GPR_U32(ctx, 31, 0x1D5E20u);
    ctx->pc = 0x1D5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E18u;
    // 0x1d5e1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D5E18u, 0x1D5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E20u;
label_1d5e20:
    // 0x1d5e20: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1d5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d5e24: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1D5E24u;
    SET_GPR_U32(ctx, 31, 0x1D5E2Cu);
    ctx->pc = 0x1D5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E24u;
    // 0x1d5e28: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1D5E24u, 0x1D5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E2Cu;
label_1d5e2c:
    // 0x1d5e2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5e30: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1d5e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d5e34: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1D5E34u;
    SET_GPR_U32(ctx, 31, 0x1D5E3Cu);
    ctx->pc = 0x1D5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E34u;
    // 0x1d5e38: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1D5E34u, 0x1D5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E3Cu;
label_1d5e3c:
    // 0x1d5e3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5e40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d5e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5e44: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D5E44u;
    SET_GPR_U32(ctx, 31, 0x1D5E4Cu);
    ctx->pc = 0x1D5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E44u;
    // 0x1d5e48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D5E44u, 0x1D5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E4Cu;
label_1d5e4c:
    // 0x1d5e4c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1d5e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d5e50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d5e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e54: 0xc0768d8  jal         func_1DA360
    ctx->pc = 0x1D5E54u;
    SET_GPR_U32(ctx, 31, 0x1D5E5Cu);
    ctx->pc = 0x1D5E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E54u;
    // 0x1d5e58: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA360u, 0x1D5E54u, 0x1D5E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E5Cu;
label_1d5e5c:
    // 0x1d5e5c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1d5e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d5e60: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D5E60u;
    {
        const bool branch_taken_0x1d5e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E60u;
        // 0x1d5e64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e60) {
            ctx->pc = 0x1D5F08u;
            goto label_1d5f08;
        }
    }
    ctx->pc = 0x1D5E68u;
label_1d5e68:
    // 0x1d5e68: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5E68u;
    {
        const bool branch_taken_0x1d5e68 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E68u;
        // 0x1d5e6c: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e68) {
            ctx->pc = 0x1D5E88u;
            goto label_1d5e88;
        }
    }
    ctx->pc = 0x1D5E70u;
    // 0x1d5e70: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d5e74: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1d5e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5e7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5e80: 0x62b024  and         $s6, $v1, $v0
    ctx->pc = 0x1d5e80u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5e84: 0x0  nop
    ctx->pc = 0x1d5e84u;
    // NOP
label_1d5e88:
    // 0x1d5e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e8c: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1D5E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E94u);
    ctx->pc = 0x1D5E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E8Cu;
    // 0x1d5e90: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1D5E8Cu, 0x1D5E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E94u;
label_1d5e94:
    // 0x1d5e94: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1d5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1d5e98: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d5e9c: 0xc0768e8  jal         func_1DA3A0
    ctx->pc = 0x1D5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EA4u);
    ctx->pc = 0x1D5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E9Cu;
    // 0x1d5ea0: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA3A0u, 0x1D5E9Cu, 0x1D5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA4u;
label_1d5ea4:
    // 0x1d5ea4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d5ea8: 0xc076638  jal         func_1D98E0
    ctx->pc = 0x1D5EA8u;
    SET_GPR_U32(ctx, 31, 0x1D5EB0u);
    ctx->pc = 0x1D5EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA8u;
    // 0x1d5eac: 0x129040  sll         $s2, $s2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D98E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D98E0u, 0x1D5EA8u, 0x1D5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB0u;
label_1d5eb0:
    // 0x1d5eb0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x1d5eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d5eb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d5eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d5eb8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1d5eb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1d5ebc: 0x2601826  xor         $v1, $s3, $zero
    ctx->pc = 0x1d5ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 0));
    // 0x1d5ec0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d5ec4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5ec4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d5ec8: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x1d5ecc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d5eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d5ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d5ed4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1d5ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d5ed8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d5ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d5edc: 0x71903  sra         $v1, $a3, 4
    ctx->pc = 0x1d5edcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 4));
    // 0x1d5ee0: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x1d5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x1d5ee4: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1d5ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1d5ee8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d5ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1d5eec: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1D5EECu;
    SET_GPR_U32(ctx, 31, 0x1D5EF4u);
    ctx->pc = 0x1D5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EECu;
    // 0x1d5ef0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1D5EECu, 0x1D5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF4u;
label_1d5ef4:
    // 0x1d5ef4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d5ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d5ef8: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x1d5ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d5efc: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D5EFCu;
    {
        const bool branch_taken_0x1d5efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFCu;
        // 0x1d5f00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5efc) {
            ctx->pc = 0x1D5E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5e68;
        }
    }
    ctx->pc = 0x1D5F04u;
    // 0x1d5f04: 0x0  nop
    ctx->pc = 0x1d5f04u;
    // NOP
label_1d5f08:
    // 0x1d5f08: 0x8f838814  lw          $v1, -0x77EC($gp)
    ctx->pc = 0x1d5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936596)));
    // 0x1d5f0c: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x1d5f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1d5f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5f14: 0xaf838814  sw          $v1, -0x77EC($gp)
    ctx->pc = 0x1d5f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936596), GPR_U32(ctx, 3));
label_1d5f18:
    // 0x1d5f18: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d5f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d5f1c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d5f1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5f20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5f24: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d5f24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5f28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d5f28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5f2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d5f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5f30: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d5f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5f34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5f38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5f3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F40u;
        // 0x1d5f44: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F48u;
}
